#include "system_ui.h"
#include "ui_system_ui.h"

system_Ui::system_Ui(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::system_Ui)
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

system_Ui::~system_Ui()
{
    delete ui;
}

void system_Ui::open_Homepage()
{
   system_Ui *home = new system_Ui();
   home->showMaximized();
}


void system_Ui::on_btn5_clicked()
{
    ui->stackedWidget->setCurrentIndex(4);
}

void system_Ui::on_btn2_clicked()
{
    ui->stackedWidget->setCurrentIndex(1);
}

void system_Ui::on_btn1_clicked()
{
    ui->stackedWidget->setCurrentIndex(0);
}

void system_Ui::on_btn3_clicked()
{
    ui->stackedWidget->setCurrentIndex(2);
}

void system_Ui::on_btn2_2_clicked()
{
    ui->stackedWidget->setCurrentIndex(1);
}

void system_Ui::on_btn4_clicked()
{
    ui->stackedWidget->setCurrentIndex(3);
}

void system_Ui::on_btn3_2_clicked()
{
    ui->stackedWidget->setCurrentIndex(2);
}

void system_Ui::on_btn5_2_clicked()
{
    ui->stackedWidget->setCurrentIndex(4);
}

void system_Ui::on_btn4_2_clicked()
{
    ui->stackedWidget->setCurrentIndex(3);
}

void system_Ui::on_btn1_2_clicked()
{
    ui->stackedWidget->setCurrentIndex(0);
}
