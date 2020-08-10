#include "image_Management_Nui.h"
#include "new_Project_Settings.h"
#include "splash_Screen.h"
#include "system_ui.h"
#include "deletion_dialog.h"

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
#include <QCheckBox>



// Global constant, lists the acceptable image formats
QStringList ACCEPTED_FORMATS = QStringList()<<"*.jpg" << "*.JPG"<< "*.png"<< "*.PNG" << "*.jpeg" << "*.JPEG" << ".bmp" << ".BMP";

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
void image_Management_Nui::import(QWidget* main)
{
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

        // ### BUG: 15/4/20 ###
        // Progress Dialog doesn't appear
        QProgressDialog progress("Importing Images...", "Cancel", 0, COUNT, main);
        progress.setWindowModality(Qt::WindowModal);

        int prog = 0;


        while (file_Iterator.hasNext()){
            progress.setValue(prog);
            prog++;
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
        progress.setValue(COUNT);
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
QStringList image_Management_Nui::get_Working_Image_Paths()
{//wd Path is created to prepend file names (see below)
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

/*
 *
 *  Returns a stringlist containing all image names::
 *  No file paths in QStringList items. Only image names.
 *
 */
QStringList image_Management_Nui::get_Working_Image_Names(){

    QStringList file_Paths = get_Working_Image_Paths();
    QStringListIterator file_Iterator(file_Paths);
    QStringList file_Names;

    while(file_Iterator.hasNext()){
        QString cur_Image_Path = file_Iterator.next().toLocal8Bit().constData();
        QStringList split_Image_Path = cur_Image_Path.split("/");

        QString cur_Image_Name = split_Image_Path.value( split_Image_Path.length()-1 );
        QString file_Name(cur_Image_Name);
        file_Names.append(file_Name);
    }

    return file_Names;
}


// Delete/Remove image from working directory
/*
 * Removes image from working directory and removal reason to removal_Log file.
 * e.g. :: "IMG_XXXXX, reason: 'auto-focus blur' "
 *
 *
 */
void image_Management_Nui::delete_(QStringList file_Names)
{
    // Create new deletion dialog
    deletion_Dialog del;
    int result = del.process_Images(file_Names);
    //qInfo()<<"result:"<<result;

    //if result = 1 | User pressed OK
    if(result == 1){


    //User tried to press delete without selecting any images.
    }else if (result == -1){

        QMessageBox null_Selected;
        null_Selected.setText("Error: unable to execute delete operation.");
        null_Selected.setInformativeText("No images were selected to be deleted.");
        null_Selected.setStandardButtons(QMessageBox::Ok);
        null_Selected.setDefaultButton(QMessageBox::Ok);

        null_Selected.exec();

    // User pressed abort or cancelled delete process
    } else {
        //qInfo()<<"Failed cancel";
        QMessageBox deletion_Cancellation;
        deletion_Cancellation.setText("Delete Operation Cancelled.");
        deletion_Cancellation.setInformativeText("No images will be deleted.");
        deletion_Cancellation.setStandardButtons(QMessageBox::Ok);
        deletion_Cancellation.setDefaultButton(QMessageBox::Ok);
        deletion_Cancellation.exec();

    }



}
