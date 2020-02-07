#include "stackedExample.h"
#include "ui_stackedExample.h"
//#include <iostream>

//using namespace std;

stackedExample::stackedExample(QWidget *parent): QMainWindow(parent), ui(new Ui::stackedExample)
{
    ui->setupUi(this);
    ui->listWidget->setViewMode(QListWidget::IconMode);
    ui->listWidget->setIconSize(QSize(200,150));
    ui->listWidget->setResizeMode(QListWidget::Adjust);

    for(int i=1;i<=15;i++)
    {
        QString path = "C:/Users/Tolu/Documents/GitHub/ECMM427/RTIe/RTIe_builder/img/image"+QString::number(i) + ".jpg";
        QListWidgetItem *item = new QListWidgetItem(QIcon(path),QString("Image" + QString::number(i) + ".jpg"));
//        QImage result = item.scaled(800, 600).scaled(200, 150, Qt::IgnoreAspectRatio, Qt::SmoothTransformation);
        ui->listWidget->addItem(item);
    }
}

stackedExample::~stackedExample()
{
    delete ui;
}


void stackedExample::open_Homepage()
{
   stackedExample *home = new stackedExample();
   home->showMaximized();
}


void stackedExample::on_btn_page2_clicked()
{
    ui->stackedWidget->setCurrentIndex(1);
}

void stackedExample::on_btn_page5_clicked()
{
    ui->stackedWidget->setCurrentIndex(4);
}

void stackedExample::on_btn_page3_clicked()
{
    ui->stackedWidget->setCurrentIndex(2);
}

void stackedExample::on_btn_page1_clicked()
{
    ui->stackedWidget->setCurrentIndex(0);
}

void stackedExample::on_btn_page4_clicked()
{
    ui->stackedWidget->setCurrentIndex(3);
}

void stackedExample::on_btn_page2_2_clicked()
{
    ui->stackedWidget->setCurrentIndex(1);
}

void stackedExample::on_btn_page5_2_clicked()
{
    ui->stackedWidget->setCurrentIndex(4);
}

void stackedExample::on_btn_page3_2_clicked()
{
    ui->stackedWidget->setCurrentIndex(2);
}

void stackedExample::on_btn_page1_2_clicked()
{
    ui->stackedWidget->setCurrentIndex(0);
}

void stackedExample::on_btn_page4_2_clicked()
{
    ui->stackedWidget->setCurrentIndex(3);
}
