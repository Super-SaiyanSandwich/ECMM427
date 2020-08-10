#include "deletion_dialog.h"
#include "ui_deletion_dialog.h"
#include "splash_Screen.h"

#include <QDebug>
#include <QGraphicsPixmapItem>
#include <QPixmap>
#include <QMessageBox>
#include <QDialog>
#include <QStringList>
#include <QFile>


deletion_Dialog::deletion_Dialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::deletion_Dialog)
{
    ui->setupUi(this);

    // Initialize Image preview and set an event filter for the preview
    image_Preview_Scene = new QGraphicsScene(this);
    ui->image_Preview->setScene(image_Preview_Scene);
    this->setWindowTitle("Delete Image(s)"); //Set dialog window title
    image_Preview_Scene->installEventFilter(this);

    working_Image_Names_List = QStringList();

    current_Image_Index = 0;
    current_Image_Name = "";

    dialog_Status_Code = 0; // Used to return exit status of dialog (acceptied / rejected)
    apply_All_Check_Status = 0;

    image_Delete_List = QStringList();
    reason_Delete_Text = "";


}

deletion_Dialog::~deletion_Dialog()
{
    delete ui;
}


/*
 * Detects show() events, this allows the image to be displayed immediately when the dialog is opened
 */
void deletion_Dialog::showEvent(QShowEvent *){
    ui->image_Preview->fitInView(image_Preview_Scene->sceneRect(), Qt::KeepAspectRatio);
}


/*
 * dialog_status_code : 1 = accepted, 0 = rejected, -1 = image_names is empty
 *
 * Main function for delete dialog. This is the function to be used by other classes whenever a user wants
 * to delete images.
 *
 */
int deletion_Dialog::process_Images(QStringList image_Names){

    int dialog_Status_Code;

    // Check that the user hasn't pressed delete with no images selected.
    if( image_Names.size() <= 0){
        dialog_Status_Code = -1;
        return dialog_Status_Code;


    } else {
        //qInfo()<<"Begin delete operation";

        //Configure all variables for start-up with the given image names.

        working_Image_Names_List = image_Names;
        current_Image_Name = image_Names.at(current_Image_Index);
        QString current_Image_Path = splashScreen::project_Path + "/images/wd/" + current_Image_Name;


        // update the preview, remaining images list, and fill the reason box with example text.
        ui->image_File_Name->setText(current_Image_Name);
        ui->remaining_Images_List->addItems(working_Image_Names_List);
        ui->removal_Reason->setText("~example text~");
        this->image_Preview_Pixmap = image_Preview_Scene->addPixmap(QPixmap(current_Image_Path));
        ui->image_Preview->show();

        // Run the dialog box
        dialog_Status_Code = this->exec();


    }


    //Carry out changes listed
    if(dialog_Status_Code == QDialog::Accepted){
        qInfo() << "TEST ACCEPTED";
        dialog_Status_Code = 1;

    //Perform no operations
    } else {
        qInfo() << "TEST REJECTED";
        dialog_Status_Code = 0;
    }

    return dialog_Status_Code;

}

/*
 *
 * Updates the image name label and the image preview.
 *
 */
void deletion_Dialog::update_Preview(){

    //Check if there are any images remaining
    if ( working_Image_Names_List.size() == 0){

        ui->image_File_Name->setText("No Images Remaining");
        image_Preview_Scene->clear();
        ui->image_Preview->fitInView(image_Preview_Scene->sceneRect(), Qt::KeepAspectRatio);
        ui->image_Preview->show();

    } else {

        //Uses current image index to update preview and label name.
        QString image_Name = working_Image_Names_List.at(current_Image_Index);
        current_Image_Name = image_Name;

        QString image_Path = splashScreen::project_Path + "/images/wd/" + image_Name;

        QImage new_Image = QImage(image_Path);

        ui->image_File_Name->setText(image_Name);
        this->image_Preview_Pixmap = image_Preview_Scene->addPixmap(QPixmap::fromImage( new_Image ));
        ui->image_Preview->fitInView(image_Preview_Scene->sceneRect(), Qt::KeepAspectRatio);
        ui->image_Preview->show();
    }

}

/*
 * Event handler: when the "Next" button is clicked.
 *
 */
void deletion_Dialog::on_next_Image_Button_clicked()
{

    current_Image_Index++;

    //Check if there are any images remaining
    if (working_Image_Names_List.size() == 0){

    // Check if current image index is still within indexing range.
    }else if(current_Image_Index >= working_Image_Names_List.size()){
        current_Image_Index = 0;
    }

    //Update preview
    update_Preview();

}


/*
 * Event handler: when the "Previous" button is clicked.
 *
 */
void deletion_Dialog::on_previous_Image_Button_clicked()
{
    current_Image_Index--;

    //Check if there are any images remaining
    if (working_Image_Names_List.size() == 0){

    // Check if current image index is still within indexing range (cannot be negative)
    }else if(current_Image_Index < 0){
        current_Image_Index = working_Image_Names_List.size()-1;
    }

    //update preview
    update_Preview();

}

/*
 * Updates the list of images remaining in the remaining images list
 */
void deletion_Dialog::update_Remaining_Image_List(){

    ui->remaining_Images_List->clear();
    ui->remaining_Images_List->addItems(working_Image_Names_List);

}

/*
 * When the user pressed OK to confirm the decision to delete
 *
 *
 */
void deletion_Dialog::on_buttonBox_accepted()
{


    //Create a deletion summary QMessageBox to relay the changes made
    QString summary = "The following files were removed:\n" + image_Delete_List.join(", ")
    + "\n\nThe following files were not removed:\n" + working_Image_Names_List.join(", ");

    QMessageBox deletion_Summary;
    deletion_Summary.setText("Delete operation summary.");
    deletion_Summary.setInformativeText(summary );
    deletion_Summary.setStandardButtons(QMessageBox::Ok);
    deletion_Summary.setDefaultButton(QMessageBox::Ok);
    deletion_Summary.exec();

    QString wd_Path = splashScreen::project_Path + "/images/wd/";
    QStringListIterator file_Name_Iterator(image_Delete_List);

    //Iterates of the images in the image_Delete_List to delete them and append their reasons to the reasons txt file.
    while(file_Name_Iterator.hasNext()){

        QString file_Name = file_Name_Iterator.next().toLocal8Bit().constData();
        QString file_Path = wd_Path + file_Name;
        QFile file(file_Path);

        //The user still has a choice to cancel, despite prior confirmation
        file.remove();

        QString image_Deletion_Reasons_File_Name = "removed_Images_Reasons.txt";
        QString image_Deletion_Reasons_File_Path = wd_Path + image_Deletion_Reasons_File_Name;

        //Writes to image deletion file, and appends newline ( '\n' ) for separation.
        QFile reason_File(image_Deletion_Reasons_File_Path);
        if (reason_File.open(QIODevice::ReadWrite)) {
            QTextStream stream(&reason_File);
            stream << reason_Delete_Text << endl;
        }
    }
    // returns the QDialog::Accepted code.
    dialog_Status_Code = 1;
    this->accept();


}


/*
 * Returns the QDialog::Rejected code.
 * results in no changes.
 */
void deletion_Dialog::on_buttonBox_rejected()
{

    dialog_Status_Code = 0;
    this->reject();

}

/*
 * The actions performed whever a user pressed the delete button.
 *
 *
 */
void deletion_Dialog::on_delete_Button_clicked()
{
    //CHECK IF THERE ARE ANY IMAGES REMAINING IN WORKING IMAGE LIST
    if(working_Image_Names_List.size() == 0){

    } else {

        //Create a  QMessageBox to confirm the users choice to delete the given images with the given reason.
        QMessageBox confirm;
        confirm.setText("Confirm your Deletion:");
        confirm.setStandardButtons(QMessageBox::Cancel | QMessageBox::Yes);
        confirm.setDefaultButton(QMessageBox::Yes);

        // Check if "Apply to all Remaining Images" has been checked.
        //0 : unchecked | 2: checked | SINGLE IMAGE
        if(apply_All_Check_Status == 0){
            //DELETE SINGLE IMAGE
            QString del_Image_Name = current_Image_Name;
            QString del_Reason = ui->removal_Reason->toPlainText();
            confirm.setInformativeText("File:\n" + del_Image_Name + "\n\nFor the reason of:\n" + del_Reason);
            if(QMessageBox::Cancel == confirm.exec()){
                //If the user has cancelled their changes do nothing.

                // No need to put a QMessageBox here : didn't do so to avoid alert fatigue.

            } else {
                //place single image in image delete list
                image_Delete_List << del_Image_Name;

                //Append the reason to the reason text
                QString reason_Text_Format = "\n-----------------------------------\n" + del_Image_Name + "\n-----------------------------------\nDelete Reason:\n" + del_Reason + "\n\n";
                reason_Delete_Text.append(reason_Text_Format);

                //Remove image at given index, if the index is the last index: decrement it.
                working_Image_Names_List.removeAt(current_Image_Index);
                if(current_Image_Index >= working_Image_Names_List.size()){
                    current_Image_Index--;;

                }

                //Update remaining image list & preview, and reset reason text.
                update_Remaining_Image_List();
                update_Preview();
                ui->removal_Reason->setText("");
            }

        } else {
            //DELETE ALL IMAGES

            // Create QMessageBox to give the option to cancel: for given images, for given reason.
            QString del_Image_Names_List = working_Image_Names_List.join(", ");
            QString del_Reason = ui->removal_Reason->toPlainText();
            confirm.setInformativeText("File(s):\n" + del_Image_Names_List + "\n\nFor the reason of:\n" + del_Reason);

            if(QMessageBox::Cancel == confirm.exec()){
                //If the user has cancelled their changes do nothing.

                // No need to put a QMessageBox here : didn't do so to avoid alert fatigue.
            } else {

                //Place all images in the image delete list
                image_Delete_List << working_Image_Names_List;

                //Append reason to delete reason text.
                QString reason_Text_Format = "\n-----------------------------------\n" + del_Image_Names_List + "\n-----------------------------------\nDelete Reason:\n" + del_Reason + "\n\n";
                reason_Delete_Text.append(reason_Text_Format);

                //No images remaining : remove all remaining images, and reset.
                working_Image_Names_List.clear();
                current_Image_Index = 0;

                update_Remaining_Image_List();
                update_Preview();
                ui->removal_Reason->setText("");


            }


        }

    }


}

/*
 * Event handler: Updates the apply_All_Check_Status
 * 0 = unchecked | 2 = Checked | 1 = partiallchecked (checkbox is configured so code 1 is impossible).
 */
void deletion_Dialog::on_apply_All_stateChanged(int arg1)
{
    apply_All_Check_Status = arg1;
}
