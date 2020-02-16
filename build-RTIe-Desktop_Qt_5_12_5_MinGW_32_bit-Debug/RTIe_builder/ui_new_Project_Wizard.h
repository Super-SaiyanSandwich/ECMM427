/********************************************************************************
** Form generated from reading UI file 'new_Project_Wizard.ui'
**
** Created by: Qt User Interface Compiler version 5.12.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_NEW_PROJECT_WIZARD_H
#define UI_NEW_PROJECT_WIZARD_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QWizardPage>

QT_BEGIN_NAMESPACE

class Ui_new_Project_Wizard
{
public:

    void setupUi(QWizardPage *new_Project_Wizard)
    {
        if (new_Project_Wizard->objectName().isEmpty())
            new_Project_Wizard->setObjectName(QString::fromUtf8("new_Project_Wizard"));
        new_Project_Wizard->resize(631, 391);

        retranslateUi(new_Project_Wizard);

        QMetaObject::connectSlotsByName(new_Project_Wizard);
    } // setupUi

    void retranslateUi(QWizardPage *new_Project_Wizard)
    {
        new_Project_Wizard->setWindowTitle(QApplication::translate("new_Project_Wizard", "WizardPage", nullptr));
    } // retranslateUi

};

namespace Ui {
    class new_Project_Wizard: public Ui_new_Project_Wizard {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NEW_PROJECT_WIZARD_H
