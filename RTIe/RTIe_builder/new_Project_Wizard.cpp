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

#include <QtWidgets>
#include <QTranslator>
#include <QLocale>
#include <QLibraryInfo>
#include <QMessageBox>


new_Project_Wizard::new_Project_Wizard(QWidget *parent) :
    QWizard(parent),
    ui(new Ui::new_Project_Wizard)
{
//    ui->setupUi(this);



    this->setWindowFlags(Qt::CustomizeWindowHint |
                          Qt::WindowMinimizeButtonHint |
                          Qt::WindowMaximizeButtonHint |
                          Qt::WindowCloseButtonHint);

    this->setWindowTitle("Project Creation Wizard");

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

    QLabel *pathLabel = new QLabel("Project Path:");
    QLineEdit *PathLineEdit = new QLineEdit;

    layout->addWidget(pathLabel, 1, 0);
    layout->addWidget(PathLineEdit, 1, 1);

    page->setLayout(layout);

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
    window->addPage(createConclusionPage());
    window->show();
}

void new_Project_Wizard::create_Project_Path(QString project_Name){


    QFileDialog dialog;
    dialog.setFileMode(QFileDialog::DirectoryOnly);

    if(dialog.exec()){

        QString project_Path = dialog.directory().path();

        QDir dir(project_Path);

        if (!dir.exists()){

          dir.mkdir("./" + project_Name);
          dir.mkdir("./" + project_Name + "/images");
          dir.mkdir("./" + project_Name + "/images/src");
          dir.mkdir("./" + project_Name + "/images/wd");

          //TODO SET GLOBAL VARIABLE PROJECT PATH FOR OTHER FILES TO USE

        } else {

            QMessageBox dir_Exists_Alert;
            dir_Exists_Alert.setText("A directory/project of this name already exists.");
            dir_Exists_Alert.setInformativeText("Please enter a different name.");
            dir_Exists_Alert.setStandardButtons(QMessageBox::Ok);
            dir_Exists_Alert.setDefaultButton(QMessageBox::Ok);
            int ret = dir_Exists_Alert.exec();

            create_Project_Path(project_Name);

        }
    }
    }
}
