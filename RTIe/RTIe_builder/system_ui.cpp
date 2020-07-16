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
#define dumpval(x) qDebug()<<#x<<'='<<x

#include <QTranslator>
#include <QFileDialog>
#include <QDebug>
#include <QPixmap>
#include <QListWidgetItem>
#include <QFile>
#include <QFileDialog>
#include <QLabel>
#include <QLineEdit>
#include <QObject>
#include <QTextBrowser>
#include <QTableWidget>
#include <QDateTime>
#include <QProcess>
#include <QProgressBar>

#include <tuple>
#include <vector>
#include <math.h>
#define _USE_MATH_DEFINES



#include <QApplication>
#include <QtWidgets>
#include <QTranslator>
#include <QLocale>
#include <QLibraryInfo>
#include <QComboBox>

#include <QApplication>
#include <QtWidgets>
#include <QTranslator>
#include <QLocale>
#include <QLibraryInfo>
#include <iostream>
#include <fstream>
#include <exception>

#include <QBasicTimer>
#include <QList>
#include <QImage>
#include <QDir>
#include <QPainter>
#include <QPaintEvent>

#include <QThread>
#include <QGraphicsPixmapItem>
#include <QGraphicsItem>


using namespace std;

// CONSTANT VALUES
#define CENTER_SCALE_FACTOR 0.3
#define SCROLL_AREA_HEIGHT 694.0
#define SCROLL_AREA_WIDTH 1044.0
#define CONTRAST_PIVOT_POINT 215
#define CONTRAST_SCALE 2
#define BORDER_SCALE_FACTOR 0.1


system_Ui::system_Ui(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::system_Ui)
{

    ui->setupUi(this);
}

system_Ui::~system_Ui()
{
    delete ui;
}

void system_Ui::open_Selected_Project()//IMPORTANT FUNCTION
{

    QFileDialog dialog(this);
    dialog.setFileMode(QFileDialog::ExistingFile);

    if(dialog.exec()){
        QFile project_File(dialog.selectedFiles().at(0).toLocal8Bit().constData());

        if (project_File.open(QIODevice::ReadOnly))
        {
            QTextStream in(&project_File);
            splashScreen::project_Path = in.readLine();
            splashScreen::project_Name = project_File.fileName().remove(".rtie");
            project_File.close();
        }

    }

    qInfo() << "OPEN PATH:: " << splashScreen::project_Path;

    system_Ui::start();


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
        crop_Widget *rmv = new crop_Widget();
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
