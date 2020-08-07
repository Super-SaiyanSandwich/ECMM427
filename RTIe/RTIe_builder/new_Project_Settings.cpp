#include "new_Project_Settings.h"
#include "new_Project.h"

#include <QApplication>
#include <QtCore>
#include "system_ui.h"

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
    title_Label->setObjectName("title_Label");
    ////////////////////////////////////////////

    QLabel *todo_Label = new QLabel(tr("TODO:: ADD SETTINGS"), this);
    todo_Label->setGeometry(40,90,70,70);


    QPushButton *back_Button = new QPushButton(tr("Back"), this);
    back_Button->setGeometry(300, 215, 60, 30);
    connect(back_Button, SIGNAL(clicked()), this, SLOT(back_Trigger()));

    QPushButton *create_Button = new QPushButton(tr("Create"), this);
    create_Button->setGeometry(365, 215, 60, 30);
    connect(create_Button, SIGNAL(clicked()), this, SLOT(create_Project()));
}

void new_Project_Settings::new_Project_Settings_Open_Page(QString project_Location, QString project_Name,QString editor)
{
    new_Project_Settings *new_Project_Settings_Page = new new_Project_Settings();
    new_Project_Settings_Page->show();

    new_Project_Settings_Page->project_Name = project_Name;
    new_Project_Settings_Page->project_Location = project_Location;
    new_Project_Settings_Page->editor = editor;
}

void new_Project_Settings::back_Trigger()
{
     new_Project *new_Project_Page = new new_Project();
     new_Project_Page->update_Edit_Boxes(project_Location, project_Name,editor);
     new_Project_Page->show();
     this->close_Page();
}

void new_Project_Settings::close_Page()
{
    this->close();
}

void new_Project_Settings::create_Project()
{
    //TODO
}
