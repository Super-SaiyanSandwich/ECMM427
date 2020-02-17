#include "system_ui.h"
#include "image_Management.h"
#include "splash_Screen.h"
#include "ui_system_ui.h"
#include <QFileDialog>
#include <QDebug>
#include <QPixmap>
#include <QListWidgetItem>
#include <QDebug>


system_Ui::system_Ui(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::system_Ui)
{
    ui->setupUi(this);

    ui->listWidget->setViewMode(QListWidget::IconMode);
    ui->listWidget->setIconSize(QSize(200,150));
    ui->listWidget->setResizeMode(QListWidget::Adjust);
    QStringList path_List = image_Management::get_Working_Image_Paths();//*splashScreen::project_Path
    QStringListIterator file_Iterator(path_List);
    QStringList file_Names;

    while (file_Iterator.hasNext())
    {

        QString path = file_Iterator.next().toLocal8Bit().constData(); //Path Location
        QFile current_Image(path);
        QFileInfo current_Image_Info(current_Image.fileName());
        QString file_Name(current_Image_Info.fileName());
        file_Names.append(file_Name);

        QListWidgetItem *item = new QListWidgetItem(QIcon(path),QString(file_Name));//
        //QImage result = item->scaled(800, 600)->scaled(200, 150, Qt::IgnoreAspectRatio, Qt::SmoothTransformation);
        item->setFlags(item->flags() | Qt::ItemIsUserCheckable); // set checkable flag
        item->setCheckState(Qt::Unchecked); // AND initialize check state
        ui->listWidget->addItem(item);
    }
}

system_Ui::~system_Ui()
{
    delete ui;
}

void system_Ui::open_Homepage()//IMPORTANT FUNCTION
{

   splashScreen::project_Path = "/Users/jordan/Network Drives/Git/ECMM427/test-root-dir/project";
   system_Ui *home = new system_Ui();
   home->showMaximized();

   //QString dir = "/";
   //QFileDialog dialog;
   //dialog.setFileMode(QFileDialog::DirectoryOnly);

   //QString path = dialog.directory.path();


}

void system_Ui::image_Display(){

    ui->listWidget->setViewMode(QListWidget::IconMode);
    ui->listWidget->setIconSize(QSize(200,150));
    ui->listWidget->setResizeMode(QListWidget::Adjust);

    QStringList path_List = image_Management::get_Working_Image_Paths();
    QStringListIterator file_Iterator(path_List);
    QStringList file_Names;

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

void system_Ui::on_listWidget_itemClicked(QListWidgetItem *item)
{
    QString wd = splashScreen::project_Path + "/images/wd/";
    qInfo() << "pixmap wd:" << wd;

    QPixmap pix(wd);
    int w = ui->image_Preview->width();
    int h = ui->image_Preview->height();
    ui->image_Preview->setPixmap(pix.scaled(w,h,Qt::KeepAspectRatio));
}
