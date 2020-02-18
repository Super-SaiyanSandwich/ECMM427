/********************************************************************************
** Form generated from reading UI file 'project_Wizard.ui'
**
** Created by: Qt User Interface Compiler version 5.14.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PROJECT_WIZARD_H
#define UI_PROJECT_WIZARD_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>
#include <QtWidgets/QWizard>
#include <QtWidgets/QWizardPage>

QT_BEGIN_NAMESPACE

class Ui_project_Wizard
{
public:
    QWizardPage *wizardPage1;
    QWidget *formLayoutWidget;
    QGridLayout *gridLayout;
    QLabel *path_Placeholder;
    QLabel *label_2;
    QLineEdit *project_Name_Line_Edit;
    QPushButton *choose_Dialog;
    QLabel *label_1;

    void setupUi(QWizard *project_Wizard)
    {
        if (project_Wizard->objectName().isEmpty())
            project_Wizard->setObjectName(QString::fromUtf8("project_Wizard"));
        project_Wizard->setEnabled(true);
        project_Wizard->resize(701, 398);
        project_Wizard->setLayoutDirection(Qt::LeftToRight);
        project_Wizard->setAutoFillBackground(false);
        project_Wizard->setSizeGripEnabled(true);
        wizardPage1 = new QWizardPage();
        wizardPage1->setObjectName(QString::fromUtf8("wizardPage1"));
        formLayoutWidget = new QWidget(wizardPage1);
        formLayoutWidget->setObjectName(QString::fromUtf8("formLayoutWidget"));
        formLayoutWidget->setGeometry(QRect(80, 100, 451, 81));
        gridLayout = new QGridLayout(formLayoutWidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setHorizontalSpacing(3);
        gridLayout->setVerticalSpacing(2);
        gridLayout->setContentsMargins(0, 0, 0, 0);
        path_Placeholder = new QLabel(formLayoutWidget);
        path_Placeholder->setObjectName(QString::fromUtf8("path_Placeholder"));

        gridLayout->addWidget(path_Placeholder, 1, 1, 1, 1);

        label_2 = new QLabel(formLayoutWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout->addWidget(label_2, 1, 0, 1, 1);

        project_Name_Line_Edit = new QLineEdit(formLayoutWidget);
        project_Name_Line_Edit->setObjectName(QString::fromUtf8("project_Name_Line_Edit"));

        gridLayout->addWidget(project_Name_Line_Edit, 0, 1, 1, 1);

        choose_Dialog = new QPushButton(formLayoutWidget);
        choose_Dialog->setObjectName(QString::fromUtf8("choose_Dialog"));

        gridLayout->addWidget(choose_Dialog, 2, 1, 1, 1);

        label_1 = new QLabel(formLayoutWidget);
        label_1->setObjectName(QString::fromUtf8("label_1"));

        gridLayout->addWidget(label_1, 0, 0, 1, 1);

        project_Wizard->addPage(wizardPage1);

        retranslateUi(project_Wizard);

        QMetaObject::connectSlotsByName(project_Wizard);
    } // setupUi

    void retranslateUi(QWizard *project_Wizard)
    {
        project_Wizard->setWindowTitle(QCoreApplication::translate("project_Wizard", "Project Creation Wizard", nullptr));
        path_Placeholder->setText(QString());
        label_2->setText(QCoreApplication::translate("project_Wizard", "Project Location:", nullptr));
        choose_Dialog->setText(QCoreApplication::translate("project_Wizard", "Choose Location", nullptr));
        label_1->setText(QCoreApplication::translate("project_Wizard", "Project Name:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class project_Wizard: public Ui_project_Wizard {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PROJECT_WIZARD_H
