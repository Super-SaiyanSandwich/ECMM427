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




image_Management::image_Management(QWidget *parent) : QMainWindow(parent), Ui(new Ui::image_Management)
{

    qInfo() << "Start";
    Ui->setupUi(this);
    this->show();

    connect(Ui->action_Import_Label, SIGNAL(triggered()), this, SLOT(import()));
    connect(Ui->import_Button_Label, SIGNAL(clicked()), this, SLOT(import()));





    QString project_Location = "/Users/jordan/Network Drives/Git/ECMM427/jordan_test_dir/project" ;//new_Project_Settings::project_Location;
    QString source_Directory = project_Location + "/images/src";
    QString working_Directory = project_Location + "/images/wd";

    QStringList file_List;

    //read(working_Directory);

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
    dialog.setNameFilter(tr("Images ( *.jpg .png )"));//*.tiff *.DNG)"));
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

// Read Working Directory
/*
 * Reads images from working directory to show tiles
 *
 * ONLY SUPPORTS JPGs and PNGs ~~CURRENTLY~~
 */
void image_Management::read(QString working_Dir){
    QDir wd = working_Dir;

    QStringList images = wd.entryList(QStringList() << "*.jpg" << ".png",QDir::Files);
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

}
