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

    image_Preview_Scene = new QGraphicsScene(this);
    ui->image_Preview->setScene(image_Preview_Scene);
    this->setWindowTitle("Delete Image(s)");
    image_Preview_Scene->installEventFilter(this);

    working_Image_Names_List = QStringList();

    current_Image_Index = 0;
    current_Image_Name = "";
    current_Reason_Text = "";

    dialog_Status_Code = 0;
    apply_All_Check_Status = 0;

    //Image and reason lists are linked by indexes.
    image_Delete_List = QStringList();
    reason_Delete_Text = "";


}

deletion_Dialog::~deletion_Dialog()
{
    delete ui;
}

QString deletion_Dialog::get_Deletion_Reason()
{
    return "";
}

void deletion_Dialog::set_Display_Image_Name(QString image_Name){
    ui->image_File_Name->setText(image_Name);
}

void deletion_Dialog::showEvent(QShowEvent *){
    ui->image_Preview->fitInView(image_Preview_Scene->sceneRect(), Qt::KeepAspectRatio);
}

void deletion_Dialog::update_Current_Image(QString image_Name){
    ui->image_File_Name->setText(image_Name);

}

/*
 * dialog_status_code : 1 = accepted, 0 = rejected, -1 = image_names is empty
 *
 */
int deletion_Dialog::process_Images(QStringList image_Names){

    int dialog_Status_Code;

    if( image_Names.size() <= 0){

        dialog_Status_Code = -1;
        return dialog_Status_Code;


    } else {
        qInfo()<<"Begin delete operation";

        working_Image_Names_List = image_Names;

        current_Image_Name = image_Names.at(current_Image_Index);
        QString current_Image_Path = splashScreen::project_Path + "/images/wd/" + current_Image_Name;

        this->set_Display_Image_Name(current_Image_Name);
        ui->image_File_Name->setText(current_Image_Name);
        ui->remaining_Images_List->addItems(working_Image_Names_List);
        ui->removal_Reason->setText("~Type your reason for deleting an image here~");
        this->image_Preview_Pixmap = image_Preview_Scene->addPixmap(QPixmap(current_Image_Path));
        ui->image_Preview->show();

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
void deletion_Dialog::update_Preview(){

    if ( working_Image_Names_List.size() == 0){

        ui->image_File_Name->setText("No Images Remaining");
        image_Preview_Scene->clear();
        ui->image_Preview->fitInView(image_Preview_Scene->sceneRect(), Qt::KeepAspectRatio);
        ui->image_Preview->show();

    } else {

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

void deletion_Dialog::on_next_Image_Button_clicked()
{
    qInfo()<<"NEXT";
    current_Image_Index++;
    if (working_Image_Names_List.size() == 0){

    }else if(current_Image_Index >= working_Image_Names_List.size()){
        current_Image_Index = 0;
    }

    update_Preview();

}

void deletion_Dialog::on_previous_Image_Button_clicked()
{
    qInfo()<<"PREV";
    current_Image_Index--;

    if (working_Image_Names_List.size() == 0){

    }else if(current_Image_Index < 0){
        current_Image_Index = working_Image_Names_List.size()-1;
    }

    update_Preview();

}

void deletion_Dialog::update_Remaining_Image_List(){

    ui->remaining_Images_List->clear();
    ui->remaining_Images_List->addItems(working_Image_Names_List);

}

void deletion_Dialog::on_buttonBox_accepted()
{

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
    dialog_Status_Code = 1;
    this->accept();


}

void deletion_Dialog::on_buttonBox_rejected()
{

    dialog_Status_Code = 0;
    this->reject();

}

void deletion_Dialog::on_delete_Button_clicked()
{
    //CHECK IF THERE ARE ANY IMAGES IN WORKING IMAGE LIST
    if(working_Image_Names_List.size() == 0){

    } else {

        QMessageBox confirm;
        confirm.setText("Confirm your Deletion:");
        confirm.setStandardButtons(QMessageBox::Cancel | QMessageBox::Yes);
        confirm.setDefaultButton(QMessageBox::Yes);

        //0 : unchecked | 2: checked
        if(apply_All_Check_Status == 0){
            //DELETE SINGLE IMAGE
            QString del_Image_Name = current_Image_Name;
            QString del_Reason = ui->removal_Reason->toPlainText();
            confirm.setInformativeText("File:\n" + del_Image_Name + "\n\nFor the reason of:\n" + del_Reason);
            if(QMessageBox::Cancel == confirm.exec()){

            } else {

                qInfo()<<"unchecked";



                image_Delete_List << del_Image_Name;

                QString reason_Text_Format = "\n-----------------------------------\n" + del_Image_Name + "\n-----------------------------------\nDelete Reason:\n" + del_Reason + "\n\n";
                reason_Delete_Text.append(reason_Text_Format);

                //confirm_Text.append();
                qInfo()<<reason_Delete_Text;



                working_Image_Names_List.removeAt(current_Image_Index);
                if(current_Image_Index >= working_Image_Names_List.size()){
                    current_Image_Index--;;

                }

                update_Remaining_Image_List();
                update_Preview();
                ui->removal_Reason->setText("");
            }

        } else {
            //DELETE ALL IMAGES
            qInfo()<<"CHECKED | ALL IMAGES";
            QString del_Image_Names_List = working_Image_Names_List.join(", ");
            QString del_Reason = ui->removal_Reason->toPlainText();
            confirm.setInformativeText("File(s):\n" + del_Image_Names_List + "\n\nFor the reason of:\n" + del_Reason);
            if(QMessageBox::Cancel == confirm.exec()){

            } else {

                image_Delete_List << working_Image_Names_List;


                QString reason_Text_Format = "\n-----------------------------------\n" + del_Image_Names_List + "\n-----------------------------------\nDelete Reason:\n" + del_Reason + "\n\n";
                reason_Delete_Text.append(reason_Text_Format);

                qInfo()<<reason_Delete_Text;

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
 * 0 = unchecked | 2 = Checked | 1 = partiallchecked (checkbox is configured so code 1 is impossible).
 */
void deletion_Dialog::on_apply_All_stateChanged(int arg1)
{
    apply_All_Check_Status = arg1;
}
