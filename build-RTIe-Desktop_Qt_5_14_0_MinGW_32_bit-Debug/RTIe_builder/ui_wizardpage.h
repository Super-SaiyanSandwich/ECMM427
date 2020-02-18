/********************************************************************************
** Form generated from reading UI file 'wizardpage.ui'
**
** Created by: Qt User Interface Compiler version 5.14.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIZARDPAGE_H
#define UI_WIZARDPAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QWizardPage>

QT_BEGIN_NAMESPACE

class Ui_WizardPage
{
public:

    void setupUi(QWizardPage *WizardPage)
    {
        if (WizardPage->objectName().isEmpty())
            WizardPage->setObjectName(QString::fromUtf8("WizardPage"));
        WizardPage->resize(424, 376);

        retranslateUi(WizardPage);

        QMetaObject::connectSlotsByName(WizardPage);
    } // setupUi

    void retranslateUi(QWizardPage *WizardPage)
    {
        WizardPage->setWindowTitle(QCoreApplication::translate("WizardPage", "WizardPage", nullptr));
    } // retranslateUi

};

namespace Ui {
    class WizardPage: public Ui_WizardPage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIZARDPAGE_H
