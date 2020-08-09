/********************************************************************************
** Form generated from reading UI file 'project_Wizard.ui'
**
** Created by: Qt User Interface Compiler version 5.12.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PROJECT_WIZARD_H
#define UI_PROJECT_WIZARD_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFormLayout>
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
    QFormLayout *formLayout_2;
    QLabel *label;
    QWidget *formWidget;
    QGridLayout *gridLayout;
    QLineEdit *project_Name_Line_Edit;
    QLabel *label_2;
    QLabel *label_1;
    QLineEdit *editor_Name;
    QLabel *path_Placeholder;
    QPushButton *choose_Dialog;
    QLabel *label_3;

    void setupUi(QWizard *project_Wizard)
    {
        if (project_Wizard->objectName().isEmpty())
            project_Wizard->setObjectName(QString::fromUtf8("project_Wizard"));
        project_Wizard->setEnabled(true);
        project_Wizard->resize(522, 280);
        project_Wizard->setMinimumSize(QSize(522, 280));
        project_Wizard->setMaximumSize(QSize(522, 280));
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
        project_Wizard->setSizeGripEnabled(false);
        project_Wizard->setWizardStyle(QWizard::ModernStyle);
        project_Wizard->setOptions(QWizard::CancelButtonOnLeft);
        wizardPage1 = new QWizardPage();
        wizardPage1->setObjectName(QString::fromUtf8("wizardPage1"));
        formLayout_2 = new QFormLayout(wizardPage1);
        formLayout_2->setObjectName(QString::fromUtf8("formLayout_2"));
        label = new QLabel(wizardPage1);
        label->setObjectName(QString::fromUtf8("label"));
        QFont font;
        font.setBold(false);
        font.setItalic(false);
        font.setUnderline(true);
        font.setWeight(50);
        label->setFont(font);

        formLayout_2->setWidget(0, QFormLayout::LabelRole, label);

        formWidget = new QWidget(wizardPage1);
        formWidget->setObjectName(QString::fromUtf8("formWidget"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(formWidget->sizePolicy().hasHeightForWidth());
        formWidget->setSizePolicy(sizePolicy);
        gridLayout = new QGridLayout(formWidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        project_Name_Line_Edit = new QLineEdit(formWidget);
        project_Name_Line_Edit->setObjectName(QString::fromUtf8("project_Name_Line_Edit"));

        gridLayout->addWidget(project_Name_Line_Edit, 1, 1, 1, 1);

        label_2 = new QLabel(formWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout->addWidget(label_2, 2, 0, 1, 1);

        label_1 = new QLabel(formWidget);
        label_1->setObjectName(QString::fromUtf8("label_1"));

        gridLayout->addWidget(label_1, 1, 0, 1, 1);

        editor_Name = new QLineEdit(formWidget);
        editor_Name->setObjectName(QString::fromUtf8("editor_Name"));

        gridLayout->addWidget(editor_Name, 4, 1, 1, 1);

        path_Placeholder = new QLabel(formWidget);
        path_Placeholder->setObjectName(QString::fromUtf8("path_Placeholder"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Maximum);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(path_Placeholder->sizePolicy().hasHeightForWidth());
        path_Placeholder->setSizePolicy(sizePolicy1);
        path_Placeholder->setMinimumSize(QSize(300, 0));
        path_Placeholder->setFrameShape(QFrame::Box);
        path_Placeholder->setFrameShadow(QFrame::Plain);
        path_Placeholder->setLineWidth(1);

        gridLayout->addWidget(path_Placeholder, 2, 1, 1, 1);

        choose_Dialog = new QPushButton(formWidget);
        choose_Dialog->setObjectName(QString::fromUtf8("choose_Dialog"));
        QSizePolicy sizePolicy2(QSizePolicy::Preferred, QSizePolicy::Maximum);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(choose_Dialog->sizePolicy().hasHeightForWidth());
        choose_Dialog->setSizePolicy(sizePolicy2);

        gridLayout->addWidget(choose_Dialog, 3, 1, 1, 1);

        label_3 = new QLabel(formWidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout->addWidget(label_3, 4, 0, 1, 1);


        formLayout_2->setWidget(1, QFormLayout::LabelRole, formWidget);

        project_Wizard->addPage(wizardPage1);

        retranslateUi(project_Wizard);

        QMetaObject::connectSlotsByName(project_Wizard);
    } // setupUi

    void retranslateUi(QWizard *project_Wizard)
    {
        project_Wizard->setWindowTitle(QApplication::translate("project_Wizard", "Project Creation Wizard", nullptr));
        label->setText(QApplication::translate("project_Wizard", "Project Configuration Page", nullptr));
        label_2->setText(QApplication::translate("project_Wizard", "Project Location:", nullptr));
        label_1->setText(QApplication::translate("project_Wizard", "Project Name:", nullptr));
        path_Placeholder->setText(QString());
        choose_Dialog->setText(QApplication::translate("project_Wizard", "Choose Location", nullptr));
        label_3->setText(QApplication::translate("project_Wizard", "Creator name:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class project_Wizard: public Ui_project_Wizard {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PROJECT_WIZARD_H
