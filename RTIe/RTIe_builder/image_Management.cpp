#include "image_Management.h"
#include "new_Project_Settings.h"

#include <QDir>
#include <QDebug>
#include <QApplication>
#include <QPushButton>
#include <QtCore>
#include <QUrl>
#include <QDesktopServices>
#include <iostream>
#include "ui_image_Management.h"
#include <QFileDialog>
#include <QAction>
#include <QPushButton>
#include <QApplication>
#include <QInputDialog>
#include <QMessageBox>
#include <QCheckBox>
#include <QErrorMessage>

QStringList ACCEPTED_FORMATS = QStringList() << "*.jpg" << "*.JPG" << "*.png" << "*.PNG";

image_Management::image_Management(QWidget *parent) : QMainWindow(parent), Ui(new Ui::image_Management)
{

    qInfo() << "Start";
    Ui->setupUi(this);
    this->show();

    connect(Ui->action_Import_Label, SIGNAL(triggered()), this, SLOT(import()));
    connect(Ui->import_Button_Label, SIGNAL(clicked()), this, SLOT(import()));
    connect(Ui->delete_Button_Label, SIGNAL(clicked()), this, SLOT(remove()));


    QStringList file_List;

    //read(working_Directory);
    qInfo() << working_Directory;
    QStringList x = image_Management::get_Working_Image_Paths(working_Directory);

    qInfo() << "Stop";

}

image_Management::~image_Management(){
    delete Ui;
}

//Import image
/*
 * Used to import images after project setup
 *
 * Opens a dialog to select images to be added to the "project/images/src" directory
 *
 * preserves file names.
 *
 */
void image_Management::import(){

    QString dir = "/";

    QFileDialog dialog(this);
    dialog.setFileMode(QFileDialog::ExistingFiles);
    dialog.setNameFilter(tr("Images ( *.jpg *.png *.JPG *.PNG)"));//*.tiff *.DNG)"));
    //dialog.setOption(QFileDialog::ShowDirsOnly, true);
    //dialog.setDirectory(dir);

    QStringList file_Paths;
    QStringList file_Names;
    QString file_Dir;

    if (dialog.exec()){
        file_Paths = dialog.selectedFiles();
        file_Dir = dialog.directory().path();

        QStringListIterator file_Iterator(file_Paths);

        while (file_Iterator.hasNext()){

            //cout << javaStyleIterator.next().toLocal8Bit().constData() << Qt::endl;
            qInfo() << "src_DIR::" << source_Directory;
            QString current_Image_Path = file_Iterator.next().toLocal8Bit().constData();

            QFile current_Image(current_Image_Path);
            QFileInfo current_Image_Info(current_Image.fileName());
            QString file_Name(current_Image_Info.fileName());
            file_Names.append(file_Name);
            qInfo() << "File name:" << file_Name;


            //[TODO] ERROR HANDLING : NEED TO CHECK DUPLICATE FILE NAMES
            QString src_Path = source_Directory + "/" + file_Name;
            QString wd_Path = working_Directory + "/" + file_Name;
            qInfo() << "path to source" << src_Path << "\n";

            QFile::copy(current_Image_Path, src_Path);
            QFile::copy(current_Image_Path, wd_Path);
        }
    }

    //[TODO] ERROR HANDLING
    //Althought the use of setFileMode : ExistingFiles requires the files to exist in order to execute. So this is an impossibility.
    if (file_Names.isEmpty()){
    }


}


QStringList image_Management::get_Working_Image_Paths(QString project_Path){
    QString wd = project_Path + "/images/wd";
    QDir dir(project_Path);
    QStringList file_Paths;

    QStringList file_Name_Paths = dir.entryList(ACCEPTED_FORMATS,QDir::Files);

    QStringListIterator file_Iterator(file_Name_Paths);
    while(file_Iterator.hasNext()){
        file_Paths << (wd+file_Iterator.next());
    }


    qInfo() << "\nFILE PATHS"<< file_Paths << "\n";

    return file_Paths;
}

// Read Working Directory
/*
 * Reads images from working directory to show tiles
 *
 * ONLY SUPPORTS JPGs and PNGs ~~CURRENTLY~~
 */
void image_Management::read(QString working_Dir){
    QDir wd = working_Dir;

    QStringList images = wd.entryList(ACCEPTED_FORMATS,QDir::Files);
    foreach(QString filename, images) {

    }
}

// Update TODO: is this the same as read()??
/*
 * Updates to show which images are in the working directory
 *
 */
void image_Management::update(){

}



// Delete/Remove image from working directory
/*
 * Removes image from working directory and removal reason to removal_Log file.
 * e.g. :: "IMG_XXXXX, reason: 'auto-focus' "
 *
 *
 */
void image_Management::remove(){

    QStringList file_Path_List;
    file_Path_List << "image1.png" << "image2.png"; //TODO: ALLOW SELECTION AND DELETION

    QString file_List_Str = file_Path_List.join( "\n");

    QMessageBox verify;
    verify.setText("Are you sure you want to delete these images?\n");
    verify.setInformativeText("This includes the follwing file(s):\n" + file_List_Str);
    verify.setStandardButtons(QMessageBox::Yes | QMessageBox::Cancel);
    verify.setDefaultButton(QMessageBox::Yes);

    if(QMessageBox::Cancel == verify.exec()){

        QMessageBox deletion_Cancellation;
        deletion_Cancellation.setText("Delete Operation Cancelled.");
        deletion_Cancellation.setInformativeText("No images will be deleted.");
        deletion_Cancellation.setStandardButtons(QMessageBox::Ok);
        deletion_Cancellation.setDefaultButton(QMessageBox::Ok);
        int ret = deletion_Cancellation.exec();

    } else {

        QStringListIterator file_Iterator(file_Path_List);
        QStringList removed_Files;
        QStringList cancelled_Files;

        while(file_Iterator.hasNext()){

            QFile file(file_Iterator.next().toLocal8Bit().constData());
            QFileInfo file_Name_Info(file.fileName());
            QString file_Name(file_Name_Info.fileName());


            bool ok;
            QInputDialog removal_Reason;

            QString window_Title = "Delete Image";
            QString info_Text = "Image: \"" + file_Name + "\".\nReason for removal:";

            QString reason = removal_Reason.getMultiLineText(this, window_Title, info_Text, "Type reason here", &ok);

            if(ok){

                removed_Files << file_Name;
                file.remove();


            }else{

                cancelled_Files << file_Name;
                QMessageBox delete_Cancellation_Alert;
                delete_Cancellation_Alert.setText("Delete operation cancelled.");
                delete_Cancellation_Alert.setInformativeText("Image \"" + file_Name + "\" will remain unchanged." );
                delete_Cancellation_Alert.setStandardButtons(QMessageBox::Ok);
                delete_Cancellation_Alert.setDefaultButton(QMessageBox::Ok);
                int ret = delete_Cancellation_Alert.exec();

            }


        //END OF WHILE LOOP
        }

        QString summary = "The following files were removed:\n" + removed_Files.join(", ")
        + "\n\nThe following files were not removed:\n" + cancelled_Files.join(", ");

        QMessageBox deletion_Summary;
        deletion_Summary.setText("Delete operation summary.");
        deletion_Summary.setInformativeText(summary );
        deletion_Summary.setStandardButtons(QMessageBox::Ok);
        deletion_Summary.setDefaultButton(QMessageBox::Ok);
        int ret = deletion_Summary.exec();

    }


}
