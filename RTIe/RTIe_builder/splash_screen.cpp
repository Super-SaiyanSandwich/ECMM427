#include "splash_screen.h"
#include "new_Project.h"

#include <QApplication>
#include <QPushButton>

splashScreen::splashScreen(QWidget *parent) : QMainWindow(parent)
{    

     this->setFixedSize(350, 300);
     this->setWindowFlags(Qt::CustomizeWindowHint);
     this->setStyleSheet("background-image: url(:/RTIEx.jpg);");

     QString button_Icon_Style = "QPushButton{border:none;background-color:rgba(255, 255, 255,100);}";
     QString button_Main_Style = "QPushButton{"
                                 "background-color: white;"
                                 "border-style: outset;"
                                 "border-width: 2px;"
                                 "border-radius: 10px;"
                                 "border-color: gray;"
                                 "padding: 6px;"
                              "}"
                              "QPushButton::pressed{"
                                 "background-color: white;"
                                 "border-style: inset;"
                              "}";



     QPushButton *new_Project_Button = new QPushButton("New Project", this);
     new_Project_Button->setGeometry(135, 130, 80, 30);
     new_Project_Button->setObjectName("new_Project_Button");
     new_Project_Button->setStyleSheet(button_Main_Style);

     QPushButton *open_Project_Button = new QPushButton("Open Existing Project", this);
     open_Project_Button->setGeometry(115, 175, 120, 30);
     open_Project_Button->setObjectName("open_Project_Button");
     open_Project_Button->setStyleSheet(button_Main_Style);


     QPushButton *exit_Button = new QPushButton(QIcon(":/Exit.png"), "", this);
     exit_Button->setGeometry(310, 260, 30, 30);
     exit_Button->setStyleSheet(button_Icon_Style);
     exit_Button->setIconSize(QSize(30,30));
     exit_Button->setMinimumSize(30, 30);
     exit_Button->setMaximumSize(30, 30);

     QPushButton *settings_Button = new QPushButton(QIcon(":/settings.png"), "", this);
     settings_Button->setGeometry(270, 260, 80, 30);
     settings_Button->setStyleSheet(button_Icon_Style);
     settings_Button->setIconSize(QSize(30,30));
     settings_Button->setMinimumSize(30, 30);
     settings_Button->setMaximumSize(30, 30);

     connect(exit_Button, SIGNAL(clicked()), this, SLOT(exit_App()));
//     connect(new_Project_Button, SIGNAL(clicked()), &new_project, SLOT(new_Project_Open_Page()));open_Project_Button
     connect(new_Project_Button, SIGNAL(clicked()), &new_projectw, SLOT(new_projectw_Open_Page()));


}


void splashScreen::exit_App()
{
    QApplication::exit();
}
