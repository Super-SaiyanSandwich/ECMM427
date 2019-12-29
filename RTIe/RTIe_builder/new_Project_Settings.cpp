#include "new_Project_Settings.h"

#include <QApplication>
#include <QtCore>

#include <QPushButton>
#include <QFileDialog>
#include <QLineEdit>
#include <QLabel>
#include <QMessageBox>

#include <QDebug>

new_Project_Settings::new_Project_Settings(QWidget *parent) : QMainWindow(parent)
{

    this->setFixedSize(400, 250);
    //this->setStyleSheet("background-image: url(:/test.png)");


    ////////////////////////////////////////////
    //TODO:: ABSRACT INTO QTitle CLASS
    QLabel *title_Label = new QLabel(tr("New Project Settings"), this);
    title_Label->setGeometry(10,10,300,60);


    QFont font = title_Label->font();
    font.setPointSize(21);
    font.setBold(true);
    title_Label->setFont(font);
    ////////////////////////////////////////////

}


void new_Project_Settings::new_Project_Settings_Open_Page()
{
    qInfo("OPEN SETTINS PAGE");

    new_Project_Settings *new_Project_Settings_Page = new new_Project_Settings();
    new_Project_Settings_Page->show();
}

void new_Project_Settings::close_Page()
{
    this->close();
}
