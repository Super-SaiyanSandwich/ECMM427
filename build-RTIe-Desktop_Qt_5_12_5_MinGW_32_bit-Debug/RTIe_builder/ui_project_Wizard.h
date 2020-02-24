/********************************************************************************
** Form generated from reading UI file 'project_Wizard.ui'
**
** Created by: Qt User Interface Compiler version 5.12.5
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
        QPalette palette;
        QBrush brush(QColor(255, 255, 255, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        QBrush brush1(QColor(255, 255, 255, 127));
        brush1.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Disabled, QPalette::ButtonText, brush1);
        project_Wizard->setPalette(palette);
        project_Wizard->setLayoutDirection(Qt::LeftToRight);
        project_Wizard->setAutoFillBackground(false);
        project_Wizard->setSizeGripEnabled(true);
        wizardPage1 = new QWizardPage();
        wizardPage1->setObjectName(QString::fromUtf8("wizardPage1"));
        formLayoutWidget = new QWidget(wizardPage1);
        formLayoutWidget->setObjectName(QString::fromUtf8("formLayoutWidget"));
        formLayoutWidget->setGeometry(QRect(0, 10, 451, 81));
        gridLayout = new QGridLayout(formLayoutWidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setHorizontalSpacing(3);
        gridLayout->setVerticalSpacing(2);
        gridLayout->setContentsMargins(0, 0, 0, 0);
        path_Placeholder = new QLabel(formLayoutWidget);
        path_Placeholder->setObjectName(QString::fromUtf8("path_Placeholder"));
        QPalette palette1;
        QBrush brush2(QColor(0, 0, 0, 255));
        brush2.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::WindowText, brush2);
        palette1.setBrush(QPalette::Active, QPalette::Text, brush2);
        QBrush brush3(QColor(0, 0, 0, 128));
        brush3.setStyle(Qt::SolidPattern);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette1.setBrush(QPalette::Active, QPalette::PlaceholderText, brush3);
#endif
        palette1.setBrush(QPalette::Inactive, QPalette::WindowText, brush2);
        palette1.setBrush(QPalette::Inactive, QPalette::Text, brush2);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette1.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush3);
#endif
        palette1.setBrush(QPalette::Disabled, QPalette::WindowText, brush1);
        palette1.setBrush(QPalette::Disabled, QPalette::Text, brush1);
        QBrush brush4(QColor(231, 231, 231, 128));
        brush4.setStyle(Qt::SolidPattern);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette1.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush4);
#endif
        path_Placeholder->setPalette(palette1);

        gridLayout->addWidget(path_Placeholder, 1, 1, 1, 1);

        label_2 = new QLabel(formLayoutWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        QPalette palette2;
        palette2.setBrush(QPalette::Active, QPalette::WindowText, brush2);
        palette2.setBrush(QPalette::Active, QPalette::Text, brush2);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette2.setBrush(QPalette::Active, QPalette::PlaceholderText, brush3);
#endif
        palette2.setBrush(QPalette::Inactive, QPalette::WindowText, brush2);
        palette2.setBrush(QPalette::Inactive, QPalette::Text, brush2);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette2.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush3);
#endif
        palette2.setBrush(QPalette::Disabled, QPalette::WindowText, brush1);
        palette2.setBrush(QPalette::Disabled, QPalette::Text, brush1);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette2.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush4);
#endif
        label_2->setPalette(palette2);

        gridLayout->addWidget(label_2, 1, 0, 1, 1);

        project_Name_Line_Edit = new QLineEdit(formLayoutWidget);
        project_Name_Line_Edit->setObjectName(QString::fromUtf8("project_Name_Line_Edit"));
        QPalette palette3;
        palette3.setBrush(QPalette::Active, QPalette::WindowText, brush2);
        palette3.setBrush(QPalette::Active, QPalette::Text, brush2);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette3.setBrush(QPalette::Active, QPalette::PlaceholderText, brush3);
#endif
        palette3.setBrush(QPalette::Inactive, QPalette::WindowText, brush2);
        palette3.setBrush(QPalette::Inactive, QPalette::Text, brush2);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette3.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush3);
#endif
        palette3.setBrush(QPalette::Disabled, QPalette::WindowText, brush1);
        palette3.setBrush(QPalette::Disabled, QPalette::Text, brush1);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette3.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush4);
#endif
        project_Name_Line_Edit->setPalette(palette3);

        gridLayout->addWidget(project_Name_Line_Edit, 0, 1, 1, 1);

        choose_Dialog = new QPushButton(formLayoutWidget);
        choose_Dialog->setObjectName(QString::fromUtf8("choose_Dialog"));
        QPalette palette4;
        palette4.setBrush(QPalette::Active, QPalette::WindowText, brush2);
        palette4.setBrush(QPalette::Active, QPalette::Text, brush2);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette4.setBrush(QPalette::Active, QPalette::PlaceholderText, brush3);
#endif
        palette4.setBrush(QPalette::Inactive, QPalette::WindowText, brush2);
        palette4.setBrush(QPalette::Inactive, QPalette::Text, brush2);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette4.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush3);
#endif
        palette4.setBrush(QPalette::Disabled, QPalette::WindowText, brush1);
        palette4.setBrush(QPalette::Disabled, QPalette::Text, brush1);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette4.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush4);
#endif
        choose_Dialog->setPalette(palette4);

        gridLayout->addWidget(choose_Dialog, 2, 1, 1, 1);

        label_1 = new QLabel(formLayoutWidget);
        label_1->setObjectName(QString::fromUtf8("label_1"));
        QPalette palette5;
        palette5.setBrush(QPalette::Active, QPalette::WindowText, brush2);
        palette5.setBrush(QPalette::Active, QPalette::Text, brush2);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette5.setBrush(QPalette::Active, QPalette::PlaceholderText, brush3);
#endif
        palette5.setBrush(QPalette::Inactive, QPalette::WindowText, brush2);
        palette5.setBrush(QPalette::Inactive, QPalette::Text, brush2);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette5.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush3);
#endif
        palette5.setBrush(QPalette::Disabled, QPalette::WindowText, brush1);
        palette5.setBrush(QPalette::Disabled, QPalette::Text, brush1);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette5.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush4);
#endif
        label_1->setPalette(palette5);

        gridLayout->addWidget(label_1, 0, 0, 1, 1);

        project_Wizard->addPage(wizardPage1);

        retranslateUi(project_Wizard);

        QMetaObject::connectSlotsByName(project_Wizard);
    } // setupUi

    void retranslateUi(QWizard *project_Wizard)
    {
        project_Wizard->setWindowTitle(QApplication::translate("project_Wizard", "Project Creation Wizard", nullptr));
        path_Placeholder->setText(QString());
        label_2->setText(QApplication::translate("project_Wizard", "Project Location:", nullptr));
        choose_Dialog->setText(QApplication::translate("project_Wizard", "Choose Location", nullptr));
        label_1->setText(QApplication::translate("project_Wizard", "Project Name:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class project_Wizard: public Ui_project_Wizard {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PROJECT_WIZARD_H
