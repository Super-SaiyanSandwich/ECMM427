#include "new_Project.h"
#include "new_Project_Settings.h"

#include <QApplication>
#include <QtCore>

#include <QPushButton>
#include <QFileDialog>
#include <QLineEdit>
#include <QLabel>
#include <QMessageBox>

#include <QDebug>

new_Project::new_Project(QWidget *parent) : QMainWindow(parent)
{

     this->setFixedSize(400, 250);
     //this->setStyleSheet("background-image: url(:/test.png)");


     ////////////////////////////////////////////
     //TODO:: ABSRACT INTO QTitle CLASS
     QLabel *title_Label = new QLabel(tr("Create New Project"), this);
     title_Label->setGeometry(10,10,300,60);


     QFont font = title_Label->font();
     font.setPointSize(21);
     font.setBold(true);
     title_Label->setFont(font);
     ////////////////////////////////////////////


     QLabel *project_Name_Label = new QLabel(tr("Name:"), this);
     project_Name_Label->setGeometry(28,70, 45, 30);
     project_Name_Label->setAlignment(Qt::AlignRight | Qt::AlignVCenter); // RIGHT CENTER ALLIGNMENT

     QLineEdit *project_Name_Edit = new QLineEdit(this);
     project_Name_Edit->setPlaceholderText("Untitled Project");
     project_Name_Edit->setFocus();
     project_Name_Edit->setGeometry(75, 70, 295, 30);
     project_Name_Edit->setObjectName("project_Name");

     QLineEdit *editor_Name = new QLineEdit(this);
     editor_Name->setPlaceholderText("Untitled Editor");
     editor_Name->setFocus();
     editor_Name->setObjectName("editor");

     QLabel *project_Location_Label = new QLabel(tr("Location:"), this);
     project_Location_Label->setGeometry(28,110, 45, 30);
     project_Location_Label->setAlignment(Qt::AlignRight | Qt::AlignVCenter); // RIGHT CENTER ALLIGNMENT

     QLineEdit *project_Location_Edit = new QLineEdit(this);
     project_Location_Edit->setPlaceholderText("Default Location (Documents)?"); // TODO:: DETERMINE DEFAULT PATH
     project_Location_Edit->setGeometry(75, 110, 260, 30);
     project_Location_Edit->setObjectName("project_Location"); //USED TO BE FOUND LATER THROUGH SEARCH OF CHILDREN

     QPushButton *location_Select_Open = new QPushButton("<", this);
     location_Select_Open->setGeometry(340, 110, 30, 30);
     connect(location_Select_Open, SIGNAL(clicked()), this, SLOT(open_Location_Select()));


     QPushButton *back_Button = new QPushButton("Back", this);
     back_Button->setGeometry(310, 215, 60, 30);
     connect(back_Button, SIGNAL(clicked()), this, SLOT(close_Page()));


     QPushButton *next_Button = new QPushButton("Next", this);
     next_Button->setGeometry(245, 215, 60, 30);
     connect(next_Button, SIGNAL(clicked()), this, SLOT(next_Page()));

}

void new_Project::new_Project_Open_Page()
{
    new_Project *new_Project_Page = new new_Project();
    new_Project_Page->show();
}

void new_Project::open_Location_Select()
{
    QString folder_Name = "/";

    QFileDialog dialog(this);
    dialog.setFileMode(QFileDialog::Directory);
    dialog.setOption(QFileDialog::ShowDirsOnly, true);
    dialog.setDirectory(folder_Name);

    folder_Name = dialog.getExistingDirectory();


    QLineEdit *project_Location = this->findChild<QLineEdit *>("project_Location", Qt::FindDirectChildrenOnly);
    project_Location->setText(folder_Name);
}

void new_Project::next_Page()
{
    project_Location = this->findChild<QLineEdit *>("project_Location", Qt::FindDirectChildrenOnly)->text();
    project_Name = this->findChild<QLineEdit *>("project_Name", Qt::FindDirectChildrenOnly)->text();
    editor = this->findChild<QLineEdit *>("editor", Qt::FindDirectChildrenOnly)->text();


    if (project_Location == "")
    {
        QMessageBox errorBox;
        errorBox.setText("There is no location set for the project");
        errorBox.exec();
    } else if (project_Name == "")
    {
        QMessageBox errorBox;
        errorBox.setText("There is no name set for the project");
        errorBox.exec();
    }  else if (editor == "")
    {
        QMessageBox errorBox;
        errorBox.setText("There is no editor name set for the project");
        errorBox.exec();}
    else {
        new_Project_Settings::new_Project_Settings_Open_Page(project_Location, project_Name,editor);
        this->close();

    }
}

void new_Project::update_Edit_Boxes(QString project_Location, QString project_Name, QString editor)
{
    this->project_Name = project_Name;
    this->project_Location = project_Location;
    this->editor = editor;

    this->findChild<QLineEdit *>("project_Location", Qt::FindDirectChildrenOnly)->setText(this->project_Location);
    this->findChild<QLineEdit *>("project_Name", Qt::FindDirectChildrenOnly)->setText(this->project_Name);
    this->findChild<QLineEdit *>("editor", Qt::FindDirectChildrenOnly)->setText(this->editor);
}

void new_Project::close_Page()
{
    this->close();
}
