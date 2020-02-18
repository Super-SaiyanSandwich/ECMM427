#include "project_Wizard.h"
#include "ui_project_Wizard.h"

#include "new_Project_Wizard.h"
#include "ui_new_Project_Wizard.h"
#include "splash_Screen.h"
#include "system_ui.h"

#include <QtWidgets>
#include <QTranslator>
#include <QLocale>
#include <QLibraryInfo>
#include <QMessageBox>
#include <QPushButton>
#include <QLabel>
#include <QFileDialog>
#include <QObject>
#include <QGridLayout>
#include <QWizardPage>

project_Wizard::project_Wizard(QWidget *parent) :
    QWizard(parent),
    ui(new Ui::project_Wizard)
{
    ui->setupUi(this);

    this->setWindowFlags(Qt::CustomizeWindowHint |
                          Qt::WindowMinimizeButtonHint |
                          Qt::WindowMaximizeButtonHint |
                          Qt::WindowCloseButtonHint);

    this->setWindowTitle("Project Creation Wizard");
    connect(ui->choose_Dialog, SIGNAL(clicked()), this, SLOT(choose_Project_Directory()));
    connect(this->button(QWizard::FinishButton),SIGNAL(clicked()),this,SLOT(create_Project()));

}

project_Wizard::~project_Wizard()
{
    delete ui;
}


void project_Wizard::create_Project_Wizard()
{
    qInfo() << "Begin Test";
    project_Wizard* window = new project_Wizard();
    window->show();


}

void project_Wizard::create_Project(){

    qInfo() << "creation in progress :: " << project_Name;
    QFileDialog dialog;

    dialog.setFileMode(QFileDialog::DirectoryOnly);
    dialog.setOption(QFileDialog::ShowDirsOnly);


    QString project_container_Path = dialog.directory().absolutePath();


    QDir verification_Dir(project_container_Path + "/" + project_Name);
    //qInfo() << "container path:: " << verification_Dir.absolutePath();

    //qInfo() << "dir exists ::" << QString::number(verification_Dir.exists());
    if (!verification_Dir.exists()){
      //qInfo() << "doesnt exist";

      QDir dir(project_container_Path);
      dir.mkdir(project_Name);


      QString project_Path = dir.path() + "/" + project_Name;
      splashScreen::project_Path = project_Path;
      QDir project_Dir(project_Path);

      project_Dir.mkdir("./images/");
      project_Dir.mkdir("./images/src/");
      project_Dir.mkdir("./images/wd/");

      QString image_Deletion_Reasons_File_Name = "removed_Images_Reasons.txt";
      QDir wdDir = project_Dir.path() + "/images/wd";
      QFile removal_Reasons(wdDir.path() + "/" + image_Deletion_Reasons_File_Name);
      removal_Reasons.open(QIODevice::WriteOnly);

      QFile project_RTIE_File(project_Dir.path() + "/" + project_Name + ".rtie");
      if (project_RTIE_File.open(QIODevice::ReadWrite)) {
          QTextStream stream(&project_RTIE_File);
          stream << dir.path() << "/" << project_Name << endl;
      }
      //TODO CREATE DELETE_REASONS_TXT

    } else {
        //qInfo() << "dir exists FALSE ::" << QString::number(verification_Dir.exists());
        QMessageBox dir_Exists_Alert;
        dir_Exists_Alert.setText("A directory/project of this name already exists.");
        dir_Exists_Alert.setInformativeText("Please enter a different name.");
        dir_Exists_Alert.setStandardButtons(QMessageBox::Ok);
        dir_Exists_Alert.setDefaultButton(QMessageBox::Ok);
        dir_Exists_Alert.exec();

        create_Project();

    }

    system_Ui::start();




}

void project_Wizard::choose_Project_Directory(){

    QString dir = "/";
    QString chosen_Location;

    QFileDialog dialog(this);
    dialog.setFileMode(QFileDialog::DirectoryOnly);
    dialog.setOption(QFileDialog::ShowDirsOnly, true);
    chosen_Location = dialog.getExistingDirectory();

    project_Name = ui->project_Name_Line_Edit->text();
    QString chosen_Path = chosen_Location + "/" + project_Name;
    ui->path_Placeholder->setText(chosen_Path);


}
