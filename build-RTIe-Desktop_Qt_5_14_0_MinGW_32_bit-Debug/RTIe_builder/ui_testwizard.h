/********************************************************************************
** Form generated from reading UI file 'testwizard.ui'
**
** Created by: Qt User Interface Compiler version 5.14.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TESTWIZARD_H
#define UI_TESTWIZARD_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QWizard>
#include <QtWidgets/QWizardPage>

QT_BEGIN_NAMESPACE

class Ui_TestWizard
{
public:
    QWizardPage *wizardPage1;
    QRadioButton *radioButton;
    QWizardPage *wizardPage2;
    QPushButton *pushButton;
    QLabel *label;

    void setupUi(QWizard *TestWizard)
    {
        if (TestWizard->objectName().isEmpty())
            TestWizard->setObjectName(QString::fromUtf8("TestWizard"));
        TestWizard->resize(400, 300);
        wizardPage1 = new QWizardPage();
        wizardPage1->setObjectName(QString::fromUtf8("wizardPage1"));
        radioButton = new QRadioButton(wizardPage1);
        radioButton->setObjectName(QString::fromUtf8("radioButton"));
        radioButton->setGeometry(QRect(180, 100, 100, 22));
        TestWizard->addPage(wizardPage1);
        wizardPage2 = new QWizardPage();
        wizardPage2->setObjectName(QString::fromUtf8("wizardPage2"));
        pushButton = new QPushButton(wizardPage2);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(180, 140, 80, 24));
        label = new QLabel(wizardPage2);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(140, 80, 59, 16));
        TestWizard->addPage(wizardPage2);

        retranslateUi(TestWizard);

        QMetaObject::connectSlotsByName(TestWizard);
    } // setupUi

    void retranslateUi(QWizard *TestWizard)
    {
        TestWizard->setWindowTitle(QCoreApplication::translate("TestWizard", "Wizard", nullptr));
        radioButton->setText(QCoreApplication::translate("TestWizard", "RadioButton", nullptr));
        pushButton->setText(QCoreApplication::translate("TestWizard", "PushButton", nullptr));
        label->setText(QCoreApplication::translate("TestWizard", "YEEeeeeah", nullptr));
    } // retranslateUi

};

namespace Ui {
    class TestWizard: public Ui_TestWizard {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TESTWIZARD_H
