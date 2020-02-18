#include "ui_image_Management.h"
#include "image_Management_Nui.h"
#include "new_Project_Settings.h"
#include "splash_Screen.h"
#include "system_ui.h"

#include <QDir>
#include <QDebug>
#include <QApplication>
#include <QPushButton>
#include <QtCore>
#include <QUrl>
#include <QDesktopServices>
#include <QTranslator>
#include <QLocale>
#include <iostream>
#include <QFileDialog>
//#include <QtWidgets>
#include <QAction>
#include <QLibraryInfo>
#include <QPushButton>
#include <QApplication>
#include <QInputDialog>
#include <QMessageBox>
#include <QCheckBox>
#include <QErrorMessage>
#include <QFile>
#include <QTextStream>

QStringList ACCEPTED_FORMATS = QStringList()<<"*.jpg" << "*.JPG"<< "*.png"<< "*.PNG";

image_Management_Nui::image_Management_Nui()
{

}

image_Management_Nui::~image_Management_Nui() {};

//Import image
/*
 * Used to import images after project setup
 *
 * Opens a dialog to select images to be added to the "project/images/src" directory
 *
 * preserves file names.
 *
 */
void image_Management_Nui::import(){

    QString dir = "/";

    QFileDialog dialog;
    dialog.setFileMode(QFileDialog::ExistingFiles);
    //TODO SET NAME FILTER ACCORDING TO STRINGLIST

    dialog.setNameFilters(ACCEPTED_FORMATS);//*.tiff *.DNG)"));

    QStringList file_Paths;
    QStringList file_Names;
    QString file_Dir;

    if (dialog.exec()){
        file_Paths = dialog.selectedFiles();
        file_Dir = dialog.directory().path();

        QStringListIterator file_Iterator(file_Paths);

        while (file_Iterator.hasNext()){

            //qInfo() << "src_DIR::" << source_Directory;
            QString current_Image_Path = file_Iterator.next().toLocal8Bit().constData();

            QFile current_Image(current_Image_Path);
            QFileInfo current_Image_Info(current_Image.fileName());
            QString file_Name(current_Image_Info.fileName());
            file_Names.append(file_Name);
            //qInfo() << "File name:" << file_Name;

            //[TODO] ERROR HANDLING : NEED TO CHECK DUPLICATE FILE NAMES
            QString src_Path = splashScreen::project_Path + "/images/src/" + file_Name;
            QString wd_Path = splashScreen::project_Path + "/images/wd/" + file_Name;
            //qInfo() << "path to source" << src_Path << "\n";

            QFile::copy(current_Image_Path, src_Path);
            QFile::copy(current_Image_Path, wd_Path);
        }
    }

    //[TODO] ERROR HANDLING
    //Althought the use of setFileMode : ExistingFiles requires the files to exist in order to execute. So this is an impossibility.
    if (file_Names.isEmpty()){
    }

    system_Ui::image_Display();


}


QStringList image_Management_Nui::get_Working_Image_Paths(){
    QString wd = splashScreen::project_Path + "/images/wd/";
    QDir dir(wd);
    QStringList file_Paths;

    QStringList file_Name_Paths = dir.entryList(ACCEPTED_FORMATS,QDir::Files);

    QStringListIterator file_Iterator(file_Name_Paths);
    while(file_Iterator.hasNext()){
        QString n = file_Iterator.next();
        qInfo() << "iterator:" + n;
        file_Paths << (wd+n);
    }


    qInfo() << "\nFILE PATHS"<< file_Paths << "\n";

    return file_Paths;
}


// Delete/Remove image from working directory
/*
 * Removes image from working directory and removal reason to removal_Log file.
 * e.g. :: "IMG_XXXXX, reason: 'auto-focus' "
 *
 *
 */
void image_Management_Nui::delete_(){//QList<QListWidgetItem *> image_List){

    /**for (QList<QListWidgetItem *>::iterator d = image_List.begin(); d != image_List.end(); ++d){
        qInfo() << "Item Selected:" << typeid(d).name();
    }**/

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
        deletion_Cancellation.exec();

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

            QString removal_Text_File_Header = "--===-- " + file_Name + " removal reason --===--\n";

            //QInputDialog multi_Line(nullptr_t, window_Title, info_Text, "Type reason here", &ok);
            //QString reasonTest;

            QString reason = removal_Reason.getMultiLineText(NULL, window_Title, info_Text, "Type reason here", &ok);
            if(ok){

                removed_Files << file_Name;
                file.remove();



                QString image_Deletion_Reasons_File_Name = "removed_Images_Reasons.txt";
                QString image_Deletion_Reasons_File_Path = splashScreen::project_Path + + "/images/wd/" + image_Deletion_Reasons_File_Name;
                QFile file(image_Deletion_Reasons_File_Path);
                if (file.open(QIODevice::ReadWrite)) {
                    QTextStream stream(&file);
                    stream << removal_Text_File_Header << reason << endl;
                }


            }else{

                cancelled_Files << file_Name;
                QMessageBox delete_Cancellation_Alert;
                delete_Cancellation_Alert.setText("Delete operation cancelled.");
                delete_Cancellation_Alert.setInformativeText("Image \"" + file_Name + "\" will remain unchanged." );
                delete_Cancellation_Alert.setStandardButtons(QMessageBox::Ok);
                delete_Cancellation_Alert.setDefaultButton(QMessageBox::Ok);
                delete_Cancellation_Alert.exec();

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
        deletion_Summary.exec();

    }


}



