/********************************************************************************
** Form generated from reading UI file 'new_projectw.ui'
**
** Created by: Qt User Interface Compiler version 5.12.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_NEW_PROJECTW_H
#define UI_NEW_PROJECTW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>
#include <QtWidgets/QWizardPage>

QT_BEGIN_NAMESPACE

class Ui_new_Projectw
{
public:
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *pushButton_4;

    void setupUi(QWizardPage *new_Projectw)
    {
        if (new_Projectw->objectName().isEmpty())
            new_Projectw->setObjectName(QString::fromUtf8("new_Projectw"));
        new_Projectw->resize(631, 383);
        widget = new QWidget(new_Projectw);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(370, 340, 239, 25));
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        pushButton = new QPushButton(widget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));

        horizontalLayout->addWidget(pushButton);

        pushButton_2 = new QPushButton(widget);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));

        horizontalLayout->addWidget(pushButton_2);

        pushButton_4 = new QPushButton(widget);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));

        horizontalLayout->addWidget(pushButton_4);


        retranslateUi(new_Projectw);

        QMetaObject::connectSlotsByName(new_Projectw);
    } // setupUi

    void retranslateUi(QWizardPage *new_Projectw)
    {
        new_Projectw->setWindowTitle(QApplication::translate("new_Projectw", "WizardPage", nullptr));
        pushButton->setText(QApplication::translate("new_Projectw", "PushButton", nullptr));
        pushButton_2->setText(QApplication::translate("new_Projectw", "PushButton", nullptr));
        pushButton_4->setText(QApplication::translate("new_Projectw", "PushButton", nullptr));
    } // retranslateUi

};

namespace Ui {
    class new_Projectw: public Ui_new_Projectw {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NEW_PROJECTW_H
