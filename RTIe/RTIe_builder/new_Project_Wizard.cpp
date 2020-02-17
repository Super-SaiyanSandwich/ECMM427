/****************************************************************************
**
** Copyright (C) 2016 The Qt Company Ltd.
** Contact: https://www.qt.io/licensing/
**
** This file is part of the examples of the Qt Toolkit.
**
** $QT_BEGIN_LICENSE:BSD$
** Commercial License Usage
** Licensees holding valid commercial Qt licenses may use this file in
** accordance with the commercial license agreement provided with the
** Software or, alternatively, in accordance with the terms contained in
** a written agreement between you and The Qt Company. For licensing terms
** and conditions see https://www.qt.io/terms-conditions. For further
** information use the contact form at https://www.qt.io/contact-us.
**
** BSD License Usage
** Alternatively, you may use this file under the terms of the BSD license
** as follows:
**
** "Redistribution and use in source and binary forms, with or without
** modification, are permitted provided that the following conditions are
** met:
**   * Redistributions of source code must retain the above copyright
**     notice, this list of conditions and the following disclaimer.
**   * Redistributions in binary form must reproduce the above copyright
**     notice, this list of conditions and the following disclaimer in
**     the documentation and/or other materials provided with the
**     distribution.
**   * Neither the name of The Qt Company Ltd nor the names of its
**     contributors may be used to endorse or promote products derived
**     from this software without specific prior written permission.
**
**
** THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS
** "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT
** LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR
** A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT
** OWNER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL,
** SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT
** LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE,
** DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY
** THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
** (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE
** OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE."
**
** $QT_END_LICENSE$
**
****************************************************************************/

#include "new_Project_Wizard.h"
#include "ui_new_Project_Wizard.h"
#include "splash_Screen.h"

#include <QtWidgets>
#include <QTranslator>
#include <QLocale>
#include <QLibraryInfo>
#include <QMessageBox>
#include <QPushButton>
#include <QLabel>
#include <QFileDialog>
#include <QObject>


new_Project_Wizard::new_Project_Wizard(QWidget *parent) :
    QWizard(parent),
    ui(new Ui::new_Project_Wizard)
{
    //ui->setupUi(this);



    this->setWindowFlags(Qt::CustomizeWindowHint |
                          Qt::WindowMinimizeButtonHint |
                          Qt::WindowMaximizeButtonHint |
                          Qt::WindowCloseButtonHint);

    this->setWindowTitle("Project Creation Wizard");

    connect(button(choose_Dialog), SIGNAL(clicked()), window->layout , SLOT(choose_Project_Directory()));




}


new_Project_Wizard::~new_Project_Wizard()
{
    delete ui;

}


//Page One
//QWizardPage* createIntroPage()
//{
//    QWizardPage *page = new QWizardPage;
//    page->setTitle("Introduction");

//    QLabel *label = new QLabel("This wizard will help you register your copy "
//                               "of Super Product Two.");
//    label->setWordWrap(true);

//    QVBoxLayout *layout = new QVBoxLayout;
//    layout->addWidget(label);
//    page->setLayout(layout);

//    return page;
//}

//Page One
QWizardPage *createRegistrationPage()
{
    QWizardPage *page = new QWizardPage;
    page->setTitle("Project Creation");
    page->setSubTitle("Please enter a name for your project.");

    //QPushButton *choose_Dir;
    //choose_Dir->setText("Select Directory");
    //QLabel *choose_Dir_Label;

    QGridLayout *layout = new QGridLayout;

    QLabel *nameLabel = new QLabel("Project Name:");
    QLineEdit *nameLineEdit = new QLineEdit;

    layout->addWidget(nameLabel, 0, 0);
    layout->addWidget(nameLineEdit, 0, 1);

    QLabel *path_Label = new QLabel("Project Location:");
    QLabel *set_Path = new QLabel;
    QPushButton *choose_Dialog = new QPushButton("Choose Location");

    layout->addWidget(path_Label, 1, 0);
    layout->addWidget(set_Path, 1, 1);
    layout->addWidget(choose_Dialog, 2, 1);


    page->setLayout(layout);

//    QObject::connect(choose_Dialog, SIGNAL(clicked()), layout, SLOT(this->choose_Project_Directory()));

    return page;
}

//Page Two
QWizardPage *createConclusionPage()
{
    QWizardPage *page = new QWizardPage;
    page->setTitle("Conclusion");

    QLabel *label = new QLabel("You are now successfully registered. Have a "
                               "nice day!");
    label->setWordWrap(true);

    QVBoxLayout *layout = new QVBoxLayout;


    layout->addWidget(label);
    page->setLayout(layout);

    return page;
}


void new_Project_Wizard::new_Project_Wizard_Open_Page()
{
    qInfo() << "Begin Test";
    new_Project_Wizard* window = new new_Project_Wizard();

//    window->addPage(createIntroPage());
    window->addPage(createRegistrationPage());




    //window->addPage(createConclusionPage());

    window->show();
}

void new_Project_Wizard::create_Project_Path(QString project_Name){


    QFileDialog dialog;
    dialog.setFileMode(QFileDialog::DirectoryOnly);
    dialog.setOption(QFileDialog::ShowDirsOnly, true);

    if(dialog.exec()){

        QString project_container_Path = dialog.directory().path();

        QDir dir(project_container_Path);

        if (!dir.exists()){



          dir.mkdir("./" + project_Name);

          QString project_Path = project_container_Path + "\\" + project_Name;
          splashScreen::project_Path = project_Path;
          QDir dir(project_Path);

          dir.mkdir("./images");
          dir.mkdir("./images/src");
          dir.mkdir("./images/wd");

          QString image_Deletion_Reasons_File_Name = "removed_Images_Reasons.txt";
          QFile removal_Reasons(dir.path() + "/images/wd" + image_Deletion_Reasons_File_Name);

          QFile project_RTIE_File(dir.path() + project_Name + ".rtie");
          if (project_RTIE_File.open(QIODevice::ReadWrite)) {
              QTextStream stream(&project_RTIE_File);
              stream << dir.path() << endl;
          }
          //TODO SET GLOBAL VARIABLE PROJECT PATH FOR OTHER FILES TO USE
          //TODO CREATE DELETE_REASONS_TXT

        } else {

            QMessageBox dir_Exists_Alert;
            dir_Exists_Alert.setText("A directory/project of this name already exists.");
            dir_Exists_Alert.setInformativeText("Please enter a different name.");
            dir_Exists_Alert.setStandardButtons(QMessageBox::Ok);
            dir_Exists_Alert.setDefaultButton(QMessageBox::Ok);
            dir_Exists_Alert.exec();

            create_Project_Path(project_Name);

        }
    }



}

void new_Project_Wizard::choose_Project_Directory(){

    qInfo() << "WORKS!";

    QString dir = "/";
    QString chosen_Location;

    QFileDialog dialog(this);
    dialog.setFileMode(QFileDialog::DirectoryOnly);
    dialog.setOption(QFileDialog::ShowDirsOnly, true);
    dialog.setDirectory(dir);

    if(dialog.exec()){

        chosen_Location = dialog.getExistingDirectory();


    }

    QString chosen_Path = chosen_Location;//  + project_Name;
    QLabel *path = this -> findChild<QLabel *>("set_Path", Qt::FindDirectChildrenOnly);
    path -> setText(chosen_Path);

}
