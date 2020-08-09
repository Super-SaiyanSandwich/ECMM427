/********************************************************************************
** Form generated from reading UI file 'project_Wizard.ui'
**
** Created by: Qt User Interface Compiler version 5.12.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PROJECT_WIZARD_H
#define UI_PROJECT_WIZARD_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFormLayout>
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
    QWidget *formWidget;
    QFormLayout *formLayout;
    QLabel *label_1;
    QLineEdit *project_Name_Line_Edit;
    QLabel *label_2;
    QPushButton *choose_Dialog;
    QLabel *label_3;
    QLineEdit *editor_Name;
    QLabel *path_Placeholder;

    void setupUi(QWizard *project_Wizard)
    {
        if (project_Wizard->objectName().isEmpty())
            project_Wizard->setObjectName(QString::fromUtf8("project_Wizard"));
        project_Wizard->setEnabled(true);
        project_Wizard->resize(640, 339);
        QPalette palette;
        QBrush brush(QColor(33, 33, 33, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::WindowText, brush);
        QBrush brush1(QColor(226, 226, 226, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Light, brush1);
        QBrush brush2(QColor(18, 18, 18, 255));
        brush2.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Text, brush2);
        QBrush brush3(QColor(27, 27, 27, 255));
        brush3.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::ButtonText, brush3);
        QBrush brush4(QColor(66, 66, 66, 255));
        brush4.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::HighlightedText, brush4);
        QBrush brush5(QColor(18, 18, 18, 128));
        brush5.setStyle(Qt::SolidPattern);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette.setBrush(QPalette::Active, QPalette::PlaceholderText, brush5);
#endif
        palette.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Light, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Text, brush2);
        palette.setBrush(QPalette::Inactive, QPalette::ButtonText, brush3);
        palette.setBrush(QPalette::Inactive, QPalette::HighlightedText, brush4);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush5);
#endif
        QBrush brush6(QColor(255, 255, 255, 127));
        brush6.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Disabled, QPalette::WindowText, brush6);
        palette.setBrush(QPalette::Disabled, QPalette::Light, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Text, brush6);
        palette.setBrush(QPalette::Disabled, QPalette::ButtonText, brush6);
        palette.setBrush(QPalette::Disabled, QPalette::HighlightedText, brush4);
        QBrush brush7(QColor(231, 231, 231, 128));
        brush7.setStyle(Qt::SolidPattern);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush7);
#endif
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
        formWidget = new QWidget(wizardPage1);
        formWidget->setObjectName(QString::fromUtf8("formWidget"));
        formLayout = new QFormLayout(formWidget);
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        formLayout->setLabelAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        label_1 = new QLabel(formWidget);
        label_1->setObjectName(QString::fromUtf8("label_1"));

        formLayout->setWidget(0, QFormLayout::LabelRole, label_1);

        project_Name_Line_Edit = new QLineEdit(formWidget);
        project_Name_Line_Edit->setObjectName(QString::fromUtf8("project_Name_Line_Edit"));

        formLayout->setWidget(0, QFormLayout::FieldRole, project_Name_Line_Edit);

        label_2 = new QLabel(formWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        formLayout->setWidget(1, QFormLayout::LabelRole, label_2);

        choose_Dialog = new QPushButton(formWidget);
        choose_Dialog->setObjectName(QString::fromUtf8("choose_Dialog"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Maximum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(choose_Dialog->sizePolicy().hasHeightForWidth());
        choose_Dialog->setSizePolicy(sizePolicy);

        formLayout->setWidget(2, QFormLayout::FieldRole, choose_Dialog);

        label_3 = new QLabel(formWidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        formLayout->setWidget(3, QFormLayout::LabelRole, label_3);

        editor_Name = new QLineEdit(formWidget);
        editor_Name->setObjectName(QString::fromUtf8("editor_Name"));

        formLayout->setWidget(3, QFormLayout::FieldRole, editor_Name);

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

        formLayout->setWidget(1, QFormLayout::FieldRole, path_Placeholder);


        formLayout_2->setWidget(0, QFormLayout::LabelRole, formWidget);

        project_Wizard->addPage(wizardPage1);

        retranslateUi(project_Wizard);

        QMetaObject::connectSlotsByName(project_Wizard);
    } // setupUi

    void retranslateUi(QWizard *project_Wizard)
    {
        project_Wizard->setWindowTitle(QApplication::translate("project_Wizard", "Project Creation Wizard", nullptr));
        label_1->setText(QApplication::translate("project_Wizard", "Project Name:", nullptr));
        label_2->setText(QApplication::translate("project_Wizard", "Project Location:", nullptr));
        choose_Dialog->setText(QApplication::translate("project_Wizard", "Choose Location", nullptr));
        label_3->setText(QApplication::translate("project_Wizard", "Creator name:", nullptr));
        path_Placeholder->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class project_Wizard: public Ui_project_Wizard {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PROJECT_WIZARD_H
