#include "image_Management.h"
#include <QDir>
#include <QDebug>

image_Management::image_Management(QWidget *parent) : QMainWindow(parent)
{

    QString source_Directory = project_Location + "/images/src";
    QString working_Directory = project_Location + "/images/wd";

    read(working_Directory);



}

//Import image
/*
 * Used to import images after project setup
 *
 */
void image_Management::import(){

}

// Read Working Directory
/*
 * Reads images from working directory to show tiles
 *
 *
 */
void image_Management::read(QString working_Dir){
    QDir wd = working_Dir;

    QStringList images = wd.entryList(QStringList() << "*.jpg" << "*.JPG",QDir::Files);
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
