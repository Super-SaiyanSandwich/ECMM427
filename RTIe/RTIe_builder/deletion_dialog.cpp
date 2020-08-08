#include "deletion_dialog.h"
#include "ui_deletion_dialog.h"
#include "splash_Screen.h"

#include <QDebug>
#include <QGraphicsPixmapItem>
#include <QPixmap>
#include <QMessageBox>
#include <QDialog>
#include <QStringList>


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

    //Image and reason lists are linked by indexes.
    image_Delete_List = QStringList();
    reason_Delete_List = QStringList();


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
        ui->remaining_Images_List->addItems(image_Names);

        this->image_Preview_Pixmap = image_Preview_Scene->addPixmap(QPixmap(splashScreen::project_Path + "/images/wd/" + current_Image_Name));
        ui->image_Preview->show();

        dialog_Status_Code = this->exec();


    }


    //Carry out changes listed
    if(dialog_Status_Code == QDialog::Accepted){

    //Perform no operations
    } else {

    }

    return dialog_Status_Code;

}
void deletion_Dialog::update_Preview(){

    QString image_Name = working_Image_Names_List.at(current_Image_Index);
    current_Image_Name = image_Name;

    QString image_Path = splashScreen::project_Path + "/images/wd/" + image_Name;

    QImage new_Image = QImage(image_Path);

    ui->image_File_Name->setText(image_Name);

    this->image_Preview_Pixmap = image_Preview_Scene->addPixmap(QPixmap::fromImage( new_Image ));
    ui->image_Preview->fitInView(image_Preview_Scene->sceneRect(), Qt::KeepAspectRatio);
    ui->image_Preview->show();

}

void deletion_Dialog::on_next_Image_Button_clicked()
{
    qInfo()<<"NEXT";
    current_Image_Index++;
    if(current_Image_Index >= working_Image_Names_List.size()){
        current_Image_Index = 0;
    }

    update_Preview();

}

void deletion_Dialog::on_previous_Image_Button_clicked()
{
    qInfo()<<"PREV";
    current_Image_Index--;
    if(current_Image_Index < 0){
        current_Image_Index = working_Image_Names_List.size()-1;
    }

    update_Preview();

}

void deletion_Dialog::on_buttonBox_accepted()
{




}

void deletion_Dialog::on_buttonBox_rejected()
{




}

void deletion_Dialog::on_delete_Button_clicked()
{
    QMessageBox confirm;
    QString confirm_Text = "Are you sure you want to delete the following images?:\n";

    //0 : unchecked | 2: checked
    if(apply_All_Check_Status == 0){
        //DELETE SINGLE IMAGE
        //confirm_Text.append();

    } else {
        //DELETE ALL IMAGES
        confirm_Text.append( working_Image_Names_List.join(", ") );


    }



}

/*
 * 0 = unchecked | 2 = Checked | 1 = partiallchecked (checkbox is configured so code 1 is impossible).
 */
void deletion_Dialog::on_apply_All_stateChanged(int arg1)
{
    apply_All_Check_Status = arg1;
}
