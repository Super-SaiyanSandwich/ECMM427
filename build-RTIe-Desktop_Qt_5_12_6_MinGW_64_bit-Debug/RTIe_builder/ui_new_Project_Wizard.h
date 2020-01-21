/********************************************************************************
** Form generated from reading UI file 'new_Project_Wizard.ui'
**
** Created by: Qt User Interface Compiler version 5.12.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_NEW_PROJECT_WIZARD_H
#define UI_NEW_PROJECT_WIZARD_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>
#include <QtWidgets/QWizardPage>

QT_BEGIN_NAMESPACE

class Ui_new_Project_Wizard
{
public:
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *pushButton_4;

    void setupUi(QWizardPage *new_Project_Wizard)
    {
        if (new_Project_Wizard->objectName().isEmpty())
            new_Project_Wizard->setObjectName(QString::fromUtf8("new_Project_Wizard"));
        new_Project_Wizard->resize(631, 383);
        layoutWidget = new QWidget(new_Project_Wizard);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(370, 340, 239, 25));
        horizontalLayout = new QHBoxLayout(layoutWidget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        pushButton = new QPushButton(layoutWidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));

        horizontalLayout->addWidget(pushButton);

        pushButton_2 = new QPushButton(layoutWidget);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));

        horizontalLayout->addWidget(pushButton_2);

        pushButton_4 = new QPushButton(layoutWidget);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));

        horizontalLayout->addWidget(pushButton_4);


        retranslateUi(new_Project_Wizard);

        QMetaObject::connectSlotsByName(new_Project_Wizard);
    } // setupUi

    void retranslateUi(QWizardPage *new_Project_Wizard)
    {
        new_Project_Wizard->setWindowTitle(QApplication::translate("new_Project_Wizard", "WizardPage", nullptr));
        pushButton->setText(QApplication::translate("new_Project_Wizard", "PushButton", nullptr));
        pushButton_2->setText(QApplication::translate("new_Project_Wizard", "PushButton", nullptr));
        pushButton_4->setText(QApplication::translate("new_Project_Wizard", "PushButton", nullptr));
    } // retranslateUi

};

namespace Ui {
    class new_Project_Wizard: public Ui_new_Project_Wizard {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NEW_PROJECT_WIZARD_H
