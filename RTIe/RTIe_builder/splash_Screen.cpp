#include "splash_Screen.h"
#include "new_Project.h"

#include <QApplication>
#include <QPushButton>
#include <QtCore>
#include <QUrl>
#include <QDesktopServices>
#include <iostream>

QString splashScreen::project_Path;
QString splashScreen::project_Name;
int const splashScreen::REBOOT_EXIT_CODE = -123456789;

splashScreen::splashScreen(QWidget *parent) : QMainWindow(parent)
{    

     this->setFixedSize(350, 300);
     this->setStyleSheet("background-image: url(:/RTIEx.jpg);");

     QString button_Icon_Style = "QPushButton{border:none;background-color:rgba(255, 255, 255,100);}";
     QString button_Main_Style = "QPushButton{"
                                 "background-color: white;"
                                 "color: black;"
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
     new_Project_Button->setGeometry(130, 130, 90, 30);
     new_Project_Button->setObjectName("new_Project_Button");
     new_Project_Button->setStyleSheet(button_Main_Style);

     QPushButton *open_Project_Button = new QPushButton("Open Existing Project", this);
     open_Project_Button->setGeometry(100, 175, 150, 30);
     open_Project_Button->setObjectName("open_Project_Button");
     open_Project_Button->setStyleSheet(button_Main_Style);


     QPushButton *help_Button = new QPushButton("?", this);
     help_Button->setGeometry(310, 260, 30, 30);
     //help_Button->setStyleSheet(button_Icon_Style);
     //help_Button->setIconSize(QSize(30,30));
     help_Button->setMinimumSize(30, 30);
     help_Button->setMaximumSize(30, 30);

     QPushButton *settings_Button = new QPushButton(QIcon(":/settings.png"), "", this);
     settings_Button->setGeometry(270, 260, 80, 30);
     settings_Button->setStyleSheet(button_Icon_Style);
     settings_Button->setIconSize(QSize(30,30));
     settings_Button->setMinimumSize(30, 30);
     settings_Button->setMaximumSize(30, 30);


     connect(open_Project_Button, SIGNAL(clicked()), &open_Existing_Project, SLOT(open_Selected_Project())); //Where I need to pass file location to system_ui.cpp
     connect(open_Project_Button, SIGNAL(clicked()), this, SLOT(close()));
     connect(new_Project_Button, SIGNAL(clicked()), &create_project_wizard, SLOT(create_Project_Wizard()));
     connect(new_Project_Button, SIGNAL(clicked()), this, SLOT(close()));
     connect(help_Button, SIGNAL(clicked()), this, SLOT(help_Button_Clicked()));

}
/*
 * Functionality: on button press to link to wiki through user's default browser.
 */
void splashScreen::help_Button_Clicked()
{
    QString wiki_Link = "https://rtiex.atlassian.net/wiki/spaces/REB/overview";
    QDesktopServices::openUrl(QUrl(wiki_Link, QUrl::TolerantMode));


}

void splashScreen::exit_App()
{
    QApplication::exit();
}
