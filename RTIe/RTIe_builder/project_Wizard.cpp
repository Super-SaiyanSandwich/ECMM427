#include "project_Wizard.h"
#include "ui_project_Wizard.h"

#include "new_Project_Wizard.h"
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




QString project_Wizard::valid;
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

    // Connects the choose project location dialog button to the choose_Project_Directory function.
    connect(ui->choose_Dialog, SIGNAL(clicked()), this, SLOT(choose_Project_Directory()));

    // Connects the "Done" or "Finish" Button (depending on OS: Mac or windows resp.)
    // to the create project function.
    connect(this->button(QWizard::FinishButton),SIGNAL(clicked()),this,SLOT(create_Project()));

}

project_Wizard::~project_Wizard()
{
    delete ui;
}

/*
 * Creates a new instance of the project creation wizard.
 */
void project_Wizard::create_Project_Wizard()
{
    project_Wizard* window = new project_Wizard();
    window->show();
}

/*
 * Does all the actual project creation operations: making directories,
 * the project .rtie file, as well as the removal reasons text file.
 */
void project_Wizard::create_Project(){

    QString project_container_Path = verification_Path;//dialog.directory().path();
    QDir verification_Dir(project_container_Path + "/" + project_Name);

    // Confirms that the user's desired project name doesn't exist,
    // and/or doesn't conflict with another file
    if (!verification_Dir.exists()){

      // Using the directory that will contain the project directory:
      // create the project directory.
      QDir dir(project_container_Path);
      dir.mkdir("./"+project_Name);

      // From here on, assign the created project's path to the project path global
      // variable to be used across the software.
      QString project_Path = dir.path() + "/" + project_Name;
      splashScreen::project_Path = project_Path;
      splashScreen::project_Name = project_Name;
      // Uses the project's directory to create all nested directories.
      QDir project_Dir(project_Path);
      project_Dir.mkdir("./images/");
      project_Dir.mkdir("./images/src/");
      project_Dir.mkdir("./images/wd/");

      // Creates the removed_Images_Reasons text file in the working directory.
      QString image_Deletion_Reasons_File_Name = "removed_Images_Reasons.txt";
      QDir wdDir = project_Dir.path() + "/images/wd";
      QFile removal_Reasons(wdDir.path() + "/" + image_Deletion_Reasons_File_Name);
      removal_Reasons.open(QIODevice::WriteOnly);

      // Creates the .rtie project file and writes the project's path on the first line.
      QFile project_RTIE_File(project_Dir.path() + "/" + project_Name + ".rtie");
      if (project_RTIE_File.open(QIODevice::ReadWrite)) {
          QTextStream stream(&project_RTIE_File);
          QDate date = QDate::currentDate();
          editor = ui->editor_Name->text();
          valid = date.toString();
          stream << dir.path() << "/" << project_Name << endl;
//          stream << "Owner Name: "  << owner << endl;
          stream << "Editor Name: "  << editor << endl;
          stream << "Created on: "  << valid << endl;

      }




      // Creates and opens the image management window.
      system_Ui::start();

    } else {

        // Alerts the user their desired project name is already occupied by another directory.
        QMessageBox dir_Exists_Alert;
        dir_Exists_Alert.setText("A directory/project of this name already exists.");
        dir_Exists_Alert.setInformativeText("Please enter a different name.");
        dir_Exists_Alert.setStandardButtons(QMessageBox::Ok);
        dir_Exists_Alert.setDefaultButton(QMessageBox::Ok);
        dir_Exists_Alert.exec();

        // Re-opens the project creation wizard
        verification_Path = "";
        create_Project_Wizard();
    }


}

/*
 * Functionality behind the "Choose location" when selecting where a project
 * should be created and stored.
 */
void project_Wizard::choose_Project_Directory(){

    // Creates dialog to allow choice of directory, restricts choice to directories exclusively.
    QFileDialog dialog(this);
    dialog.setFileMode(QFileDialog::DirectoryOnly);
    dialog.setOption(QFileDialog::ShowDirsOnly);

    // Stores the path of the user's choice.
    QString chosen_Location;
    chosen_Location = dialog.getExistingDirectory();

    // Project name is retrieved from the QNameLineEdit
    project_Name = ui->project_Name_Line_Edit->text();

    // Complete chosen path is then processed, and showed on the
    // project wizard for the user to validate
    QString chosen_Path = chosen_Location + "/" + project_Name;
    ui->path_Placeholder->setText(chosen_Path);

    verification_Path = chosen_Location;
}

void project_Wizard::on_project_Name_Line_Edit_textChanged(const QString &arg1)
{
    project_Name = arg1;
    QString chosen_Path = verification_Path + "/" + project_Name;
    ui->path_Placeholder->setText(chosen_Path);
}

