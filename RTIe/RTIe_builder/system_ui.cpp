#include "system_ui.h"
#include "image_Management_Nui.h"
#include "splash_Screen.h"
#include "ui_system_ui.h"
#include "project_Wizard.h"
#include "image_Gatherer.h"
#include "splash_Screen.h"
#include "fitter_Widget.h"
#include "crop_Widget.h"
#include "marble_widget.h"

#include <QApplication>
#include <QtWidgets>







system_Ui::system_Ui(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::system_Ui)
{

    ui->setupUi(this);
    this->setWindowIcon(QIcon(":/RTIEx.ico"));  //set the icon HERE.
}

system_Ui::~system_Ui()
{
    delete ui;
}


void system_Ui::open_Selected_Project()//IMPORTANT FUNCTION
{

    QFileDialog dialog(this);
    dialog.setFileMode(QFileDialog::ExistingFile);
    dialog.setNameFilter("*.rtie");


    if(dialog.exec()){

        QFile project_File(dialog.selectedFiles().at(0).toLocal8Bit().constData());

        QString project_Dir;
        QString project_Name;
        QString project_File_Path = project_File.fileName();

        for(int i = project_File_Path.length() - 1; i >= 0; i--){
            // Iterates to get the first '/' or '\' to find the beginning of the file name.
            if(project_File_Path.at(i) == "/" || project_File_Path.at(i) == "\\"){
                //Gets the absolute file path for the project directory.
                project_Dir = project_File_Path.mid(0, i+1);

                int name_start = i+1;
                int name_length = project_File_Path.length() - name_start - 5;
                //gets the name of the project from the file path.
                project_Name = project_File_Path.mid(name_start, name_length);

                break;

            }


        }

        splashScreen :: project_Path = project_Dir;
        splashScreen::project_Name = project_Name;
        qInfo() << "NAME:" << project_Name << " | path:" << project_Dir;

        // DEPRECATED
        /*
        if (project_File.open(QIODevice::ReadOnly))
        {
            //qInfo()<<"Dialog accepted";
            QTextStream in(&project_File);
            splashScreen::project_Path = in.readLine();

            splashScreen::project_Name = project_File.fileName().remove(".rtie").remove(splashScreen::project_Path);
            project_File.close();
        }*/

        // Project file selected, open project
        this->start();

    } else {
        //project selection cancelled, return to splash screen

        qApp->exit(splashScreen::REBOOT_EXIT_CODE);
        //qInfo()<<"Cancel test";
    }

    qInfo() << "OPEN PATH:: " << splashScreen::project_Path;

    //system_Ui::start();





}

void system_Ui::start()
{
    system_Ui *home = new system_Ui();
    home->showMaximized();
}


//==================================== Page change buttons  ===============================

void system_Ui::on_image_Management_Btn_clicked()
{
    ui->stackedWidget->setCurrentIndex(0);

    ui->image_Management_Btn->setEnabled(false);

    ui->marble_Detection_Btn->setEnabled(true);
    ui->remove_Marble_Btn->setEnabled(true);
    ui->export_Btn->setEnabled(true);
}

void system_Ui::on_marble_Detection_Btn_clicked()
{
    if (ui->stackedWidget->currentIndex() == 0){
        if (image_Management_Nui::get_Working_Image_Paths().length() == 0){
            QMessageBox Error_Summary;
            Error_Summary.setText("No Images Error");
            Error_Summary.setInformativeText("There are currently no image files that are a part of this project. Please import some before proceeding.");
            Error_Summary.setStandardButtons(QMessageBox::Ok);
            Error_Summary.setDefaultButton(QMessageBox::Ok);
            Error_Summary.exec();
            return;
        }
    }

    if (marbleDetectionIndex == 0){
        marble_Widget *md = new marble_Widget(nullptr, ui->import_Page->get_Select(), ui->import_Page->get_List());
        marbleDetectionIndex = ui->stackedWidget->addWidget(md);
    }

    ui->stackedWidget->setCurrentIndex(marbleDetectionIndex);

    ui->marble_Detection_Btn->setEnabled(false);

    ui->image_Management_Btn->setEnabled(true);
    ui->remove_Marble_Btn->setEnabled(true);
    ui->export_Btn->setEnabled(true);
}

void system_Ui::on_remove_Marble_Btn_clicked()
{
    if (ui->stackedWidget->currentIndex() == 0){
        if (image_Management_Nui::get_Working_Image_Paths().length() == 0){
            QMessageBox Error_Summary;
            Error_Summary.setText("No Images Found.");
            Error_Summary.setInformativeText("There are currently no image files that are a part of this project. Please import some before proceeding.");
            Error_Summary.setStandardButtons(QMessageBox::Ok);
            Error_Summary.setDefaultButton(QMessageBox::Ok);
            Error_Summary.exec();
            return;
        }
    }

    if (removeMarbleIndex == 0){
        crop_Widget *rmv = new crop_Widget(nullptr, ui->import_Page->get_Select(), ui->import_Page->get_List());
        removeMarbleIndex = ui->stackedWidget->addWidget(rmv);
    }

    ui->stackedWidget->setCurrentIndex(removeMarbleIndex);

    ui->remove_Marble_Btn->setEnabled(false);

    ui->image_Management_Btn->setEnabled(true);
    ui->marble_Detection_Btn->setEnabled(true);
    ui->export_Btn->setEnabled(true);
}

void system_Ui::on_export_Btn_clicked()
{
    if (ui->stackedWidget->currentIndex() == 0){
        if (image_Management_Nui::get_Working_Image_Paths().length() == 0){
            QMessageBox Error_Summary;
            Error_Summary.setText("No Images Error");
            Error_Summary.setInformativeText("There are currently no image files that are a part of this project. Please import some before proceeding.");
            Error_Summary.setStandardButtons(QMessageBox::Ok);
            Error_Summary.setDefaultButton(QMessageBox::Ok);
            Error_Summary.exec();
            return;
        }
    }


    if (exportIndex == 0){
        fitter_Widget* rmv = new fitter_Widget();
        exportIndex = ui->stackedWidget->addWidget(rmv);
    }

    ui->stackedWidget->setCurrentIndex(exportIndex);

    ui->export_Btn->setEnabled(false);

    ui->image_Management_Btn->setEnabled(true);
    ui->marble_Detection_Btn->setEnabled(true);
    ui->remove_Marble_Btn->setEnabled(true);
}

void system_Ui::on_action_New_Project_2_triggered()
{
    project_Wizard *new_Project  =  new  project_Wizard();
    new_Project->create_Project_Wizard();
    this->close();
}

void system_Ui::on_action_Open_Project_2_triggered()
{
    this->open_Selected_Project();
    this->close();
}

void system_Ui::on_action_Exit_2_triggered()
{
    QApplication::quit();
}

void system_Ui::on_actionRtiEx_Wiki_triggered()
{
    QString wiki_Link = "https://universityofexeteruk.sharepoint.com/sites/Stevens_Research/RTIExeter%20Wiki/Home.aspx";
    QDesktopServices::openUrl(QUrl(wiki_Link, QUrl::TolerantMode));
}
