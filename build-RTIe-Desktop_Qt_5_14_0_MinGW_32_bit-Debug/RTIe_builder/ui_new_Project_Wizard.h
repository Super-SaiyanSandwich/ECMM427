/********************************************************************************
** Form generated from reading UI file 'new_Project_Wizard.ui'
**
** Created by: Qt User Interface Compiler version 5.14.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_NEW_PROJECT_WIZARD_H
#define UI_NEW_PROJECT_WIZARD_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWizardPage>

QT_BEGIN_NAMESPACE

class Ui_new_Project_Wizard
{
public:
    QPushButton *choose_Dialog;

    void setupUi(QWizardPage *new_Project_Wizard)
    {
        if (new_Project_Wizard->objectName().isEmpty())
            new_Project_Wizard->setObjectName(QString::fromUtf8("new_Project_Wizard"));
        new_Project_Wizard->resize(631, 391);
        choose_Dialog = new QPushButton(new_Project_Wizard);
        choose_Dialog->setObjectName(QString::fromUtf8("choose_Dialog"));
        choose_Dialog->setGeometry(QRect(340, 160, 151, 31));

        retranslateUi(new_Project_Wizard);

        QMetaObject::connectSlotsByName(new_Project_Wizard);
    } // setupUi

    void retranslateUi(QWizardPage *new_Project_Wizard)
    {
        new_Project_Wizard->setWindowTitle(QCoreApplication::translate("new_Project_Wizard", "WizardPage", nullptr));
        choose_Dialog->setText(QCoreApplication::translate("new_Project_Wizard", "Choose Location", nullptr));
    } // retranslateUi

};

namespace Ui {
    class new_Project_Wizard: public Ui_new_Project_Wizard {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NEW_PROJECT_WIZARD_H
