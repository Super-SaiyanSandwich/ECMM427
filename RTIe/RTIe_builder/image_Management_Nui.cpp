
//#include "ui_image_Management.h"

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
#include <QStringList>
#include <QProgressDialog>

// Global constant, lists the acceptable image formats
QStringList ACCEPTED_FORMATS = QStringList()<<"*.jpg" << "*.JPG"<< "*.png"<< "*.PNG";

image_Management_Nui::image_Management_Nui()
{

}

image_Management_Nui::~image_Management_Nui() {};

//Import image
/*
 * Used to import images after a project is setup
 *
 * Opens a dialog to select images to be added to the "project/images/src" directory
 *
 * preserves file names.
 *
 */
void image_Management_Nui::import(){

    //Creates a dialog to choose images to import according to the format filter
    QFileDialog dialog;
    dialog.setFileMode(QFileDialog::ExistingFiles);
    dialog.setNameFilter(ACCEPTED_FORMATS.join(" "));// to be added: *.tiff *.DNG)"));

    //Storage devices
    QStringList file_Paths; //Stores all image paths
    QStringList file_Names; //Stores all file names
    //QString file_Dir;     //Not useful yet, kept in case.


    if (dialog.exec()){
        //Retrieves all selected files from the dialog in a QString List (All file paths)
        file_Paths = dialog.selectedFiles();
        //file_Dir = dialog.directory().path(); //Not Needed, kept in case.

        //Iterator is created to iterate over QStringList
        QStringListIterator file_Iterator(file_Paths);
        const int COUNT = file_Paths.count();

        QProgressDialog progress("Processing Images...", "Cancel", 0, COUNT);
        progress.setWindowModality(Qt::WindowModal);
        while (file_Iterator.hasNext()){

            //Converts 8Bit file path data into QString per image path
            QString current_Image_Path = file_Iterator.next().toLocal8Bit().constData();

            //Retrieves image names from path strings, used to create new image paths in project image directories.
            QFile current_Image(current_Image_Path);
            QFileInfo current_Image_Info(current_Image.fileName());
            QString file_Name(current_Image_Info.fileName());
            file_Names.append(file_Name);

            //TODO: Check for duplicate image names.
            QString src_Path = splashScreen::project_Path + "/images/src/" + file_Name;
            QString wd_Path = splashScreen::project_Path + "/images/wd/" + file_Name;

            //Duplicates images from original to project source and working directories.
            QFile::copy(current_Image_Path, src_Path);
            QFile::copy(current_Image_Path, wd_Path);
        }
    }

    //ERROR HANDLING
    //Althought the use of setFileMode : ExistingFiles requires the files to exist in order to execute. So this is an impossibility.
    if (file_Names.isEmpty()){
    }


}
/*
 * Gets paths of all images in working directory, returns in form a QStringList
 *
 *
 */
QStringList image_Management_Nui::get_Working_Image_Paths(){
    //wd Path is created to prepend file names (see below)
    QString wd = splashScreen::project_Path + "/images/wd/";

    //Dir is used to retrieve all image NAMES (not paths), and filters acceptable formats and directories.
    QDir dir(wd);
    QStringList file_Paths; //File Paths
    QStringList file_Name_Paths //File Names
            = dir.entryList(ACCEPTED_FORMATS,QDir::Files);

    //Iterates over all file paths
    QStringListIterator file_Iterator(file_Name_Paths);
    while(file_Iterator.hasNext()){
        //Accumulates files and prepends paths.
        QString n = file_Iterator.next();
        file_Paths << (wd+n);
    }

    return file_Paths;
}


// Delete/Remove image from working directory
/*
 * Removes image from working directory and removal reason to removal_Log file.
 * e.g. :: "IMG_XXXXX, reason: 'auto-focus blur' "
 *
 *
 */
void image_Management_Nui::delete_(QStringList file_Names){

    //Combines QStringList into singular QStrings
    QString file_List_Str = file_Names.join( "\n");

    //Verification & Notification of choices to be deleted
    QMessageBox verify;
    verify.setText("Are you sure you want to delete these images?\n");
    verify.setInformativeText("This includes the follwing file(s):\n" + file_List_Str);
    verify.setStandardButtons(QMessageBox::Yes | QMessageBox::Cancel);
    verify.setDefaultButton(QMessageBox::Yes);

    //If cancelled operation will not occur and wil alert user.
    if(QMessageBox::Cancel == verify.exec()){
        QMessageBox deletion_Cancellation;
        deletion_Cancellation.setText("Delete Operation Cancelled.");
        deletion_Cancellation.setInformativeText("No images will be deleted.");
        deletion_Cancellation.setStandardButtons(QMessageBox::Ok);
        deletion_Cancellation.setDefaultButton(QMessageBox::Ok);
        deletion_Cancellation.exec();

    } else {
        // wd_Path is used to prepend the file_Names for the file_Path List
        QString wd_Path = splashScreen::project_Path + "/images/wd/";
        // QStringList will contain all the file paths for the checked images
        QStringList file_Path_List;

        //If confirmed user still has choice to individually confirm or cancel images.
        QStringListIterator file_Name_Iterator(file_Names);
        QStringList removed_Files;
        QStringList cancelled_Files;

        /*
         * Iterates per image requesting reason from user and appends the given
         * reason to the separating headers.
         */
        while(file_Name_Iterator.hasNext()){

            QString file_Name = file_Name_Iterator.next().toLocal8Bit().constData();
            QString file_Path = wd_Path + file_Name;
            QFile file(file_Path);

            bool ok;
            QInputDialog removal_Reason;

            QString window_Title = "Delete Image";
            QString info_Text = "Image: \"" + file_Name + "\".\nReason for removal:";
            QString removal_Text_File_Header = "--===-- " + file_Name + " removal reason --===--\n";
            QString reason = removal_Reason.getMultiLineText(NULL, window_Title, info_Text, "Type reason here", &ok);

            //The user still has a choice to cancel, despite prior confirmation
            if(ok){

                /*
                 * Given confirmation, the user's input will be taken and written to the
                 * removed_Images_Reasons text file in the working directory. Moreover,
                 * the givem image file will be removed from ONLY the working directory.
                 */
                removed_Files << file_Name;
                file.remove();

                QString image_Deletion_Reasons_File_Name = "removed_Images_Reasons.txt";
                QString image_Deletion_Reasons_File_Path = splashScreen::project_Path + "/images/wd/" + image_Deletion_Reasons_File_Name;

                //Writes to image deletion file, and appends newline ( '\n' ) for separation.
                QFile file(image_Deletion_Reasons_File_Path);
                if (file.open(QIODevice::ReadWrite)) {
                    QTextStream stream(&file);
                    stream << removal_Text_File_Header << reason << endl;
                }


            }else{

                /*
                 *
                 * Given the user's choice to cancel, despite prior confirmation. Secondary
                 * confirmation will be given, notifying the user that the operation will not occur.
                 */
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

        /*
         * A summary is given containing all images that have been confirmed to be
         * deleted as well as those that have confirmed to be cancelled.
         */
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
