/********************************************************************************
** Form generated from reading UI file 'project_Wizard.ui'
**
** Created by: Qt User Interface Compiler version 5.9.7
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PROJECT_WIZARD_H
#define UI_PROJECT_WIZARD_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QHeaderView>
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
            project_Wizard->setObjectName(QStringLiteral("project_Wizard"));
        project_Wizard->setEnabled(true);
        project_Wizard->resize(640, 339);
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
        wizardPage1->setObjectName(QStringLiteral("wizardPage1"));
        formLayout_2 = new QFormLayout(wizardPage1);
        formLayout_2->setObjectName(QStringLiteral("formLayout_2"));
        formWidget = new QWidget(wizardPage1);
        formWidget->setObjectName(QStringLiteral("formWidget"));
        formLayout = new QFormLayout(formWidget);
        formLayout->setObjectName(QStringLiteral("formLayout"));
        formLayout->setLabelAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        label_1 = new QLabel(formWidget);
        label_1->setObjectName(QStringLiteral("label_1"));
        QPalette palette1;
        QBrush brush2(QColor(0, 0, 0, 255));
        brush2.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::WindowText, brush2);
        palette1.setBrush(QPalette::Active, QPalette::Text, brush2);
        QBrush brush3(QColor(0, 0, 0, 128));
        brush3.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::PlaceholderText, brush3);
        palette1.setBrush(QPalette::Inactive, QPalette::WindowText, brush2);
        palette1.setBrush(QPalette::Inactive, QPalette::Text, brush2);
        palette1.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush3);
        palette1.setBrush(QPalette::Disabled, QPalette::WindowText, brush1);
        palette1.setBrush(QPalette::Disabled, QPalette::Text, brush1);
        QBrush brush4(QColor(231, 231, 231, 128));
        brush4.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush4);
        label_1->setPalette(palette1);

        formLayout->setWidget(0, QFormLayout::LabelRole, label_1);

        project_Name_Line_Edit = new QLineEdit(formWidget);
        project_Name_Line_Edit->setObjectName(QStringLiteral("project_Name_Line_Edit"));
        QPalette palette2;
        palette2.setBrush(QPalette::Active, QPalette::WindowText, brush2);
        palette2.setBrush(QPalette::Active, QPalette::Text, brush2);
        palette2.setBrush(QPalette::Active, QPalette::PlaceholderText, brush3);
        palette2.setBrush(QPalette::Inactive, QPalette::WindowText, brush2);
        palette2.setBrush(QPalette::Inactive, QPalette::Text, brush2);
        palette2.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush3);
        palette2.setBrush(QPalette::Disabled, QPalette::WindowText, brush1);
        palette2.setBrush(QPalette::Disabled, QPalette::Text, brush1);
        palette2.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush4);
        project_Name_Line_Edit->setPalette(palette2);

        formLayout->setWidget(0, QFormLayout::FieldRole, project_Name_Line_Edit);

        label_2 = new QLabel(formWidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        QPalette palette3;
        palette3.setBrush(QPalette::Active, QPalette::WindowText, brush2);
        palette3.setBrush(QPalette::Active, QPalette::Text, brush2);
        palette3.setBrush(QPalette::Active, QPalette::PlaceholderText, brush3);
        palette3.setBrush(QPalette::Inactive, QPalette::WindowText, brush2);
        palette3.setBrush(QPalette::Inactive, QPalette::Text, brush2);
        palette3.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush3);
        palette3.setBrush(QPalette::Disabled, QPalette::WindowText, brush1);
        palette3.setBrush(QPalette::Disabled, QPalette::Text, brush1);
        palette3.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush4);
        label_2->setPalette(palette3);

        formLayout->setWidget(1, QFormLayout::LabelRole, label_2);

        choose_Dialog = new QPushButton(formWidget);
        choose_Dialog->setObjectName(QStringLiteral("choose_Dialog"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Maximum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(choose_Dialog->sizePolicy().hasHeightForWidth());
        choose_Dialog->setSizePolicy(sizePolicy);
        QPalette palette4;
        palette4.setBrush(QPalette::Active, QPalette::WindowText, brush2);
        palette4.setBrush(QPalette::Active, QPalette::Text, brush2);
        palette4.setBrush(QPalette::Active, QPalette::PlaceholderText, brush3);
        palette4.setBrush(QPalette::Inactive, QPalette::WindowText, brush2);
        palette4.setBrush(QPalette::Inactive, QPalette::Text, brush2);
        palette4.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush3);
        palette4.setBrush(QPalette::Disabled, QPalette::WindowText, brush1);
        palette4.setBrush(QPalette::Disabled, QPalette::Text, brush1);
        palette4.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush4);
        choose_Dialog->setPalette(palette4);

        formLayout->setWidget(2, QFormLayout::FieldRole, choose_Dialog);

        label_3 = new QLabel(formWidget);
        label_3->setObjectName(QStringLiteral("label_3"));
        QPalette palette5;
        palette5.setBrush(QPalette::Active, QPalette::WindowText, brush2);
        palette5.setBrush(QPalette::Active, QPalette::Text, brush2);
        palette5.setBrush(QPalette::Active, QPalette::PlaceholderText, brush3);
        palette5.setBrush(QPalette::Inactive, QPalette::WindowText, brush2);
        palette5.setBrush(QPalette::Inactive, QPalette::Text, brush2);
        palette5.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush3);
        palette5.setBrush(QPalette::Disabled, QPalette::WindowText, brush1);
        palette5.setBrush(QPalette::Disabled, QPalette::Text, brush1);
        palette5.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush4);
        label_3->setPalette(palette5);

        formLayout->setWidget(3, QFormLayout::LabelRole, label_3);

        editor_Name = new QLineEdit(formWidget);
        editor_Name->setObjectName(QStringLiteral("editor_Name"));
        QPalette palette6;
        palette6.setBrush(QPalette::Active, QPalette::WindowText, brush2);
        palette6.setBrush(QPalette::Active, QPalette::Text, brush2);
        palette6.setBrush(QPalette::Active, QPalette::PlaceholderText, brush3);
        palette6.setBrush(QPalette::Inactive, QPalette::WindowText, brush2);
        palette6.setBrush(QPalette::Inactive, QPalette::Text, brush2);
        palette6.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush3);
        palette6.setBrush(QPalette::Disabled, QPalette::WindowText, brush1);
        palette6.setBrush(QPalette::Disabled, QPalette::Text, brush1);
        palette6.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush4);
        editor_Name->setPalette(palette6);

        formLayout->setWidget(3, QFormLayout::FieldRole, editor_Name);

        path_Placeholder = new QLabel(formWidget);
        path_Placeholder->setObjectName(QStringLiteral("path_Placeholder"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Maximum);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(path_Placeholder->sizePolicy().hasHeightForWidth());
        path_Placeholder->setSizePolicy(sizePolicy1);
        path_Placeholder->setMinimumSize(QSize(300, 0));
        QPalette palette7;
        palette7.setBrush(QPalette::Active, QPalette::WindowText, brush2);
        palette7.setBrush(QPalette::Active, QPalette::Text, brush2);
        palette7.setBrush(QPalette::Active, QPalette::PlaceholderText, brush3);
        palette7.setBrush(QPalette::Inactive, QPalette::WindowText, brush2);
        palette7.setBrush(QPalette::Inactive, QPalette::Text, brush2);
        palette7.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush3);
        palette7.setBrush(QPalette::Disabled, QPalette::WindowText, brush1);
        palette7.setBrush(QPalette::Disabled, QPalette::Text, brush1);
        palette7.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush4);
        path_Placeholder->setPalette(palette7);
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
        project_Wizard->setWindowTitle(QApplication::translate("project_Wizard", "Project Creation Wizard", Q_NULLPTR));
        label_1->setText(QApplication::translate("project_Wizard", "Project Name:", Q_NULLPTR));
        label_2->setText(QApplication::translate("project_Wizard", "Project Location:", Q_NULLPTR));
        choose_Dialog->setText(QApplication::translate("project_Wizard", "Choose Location", Q_NULLPTR));
        label_3->setText(QApplication::translate("project_Wizard", "Creator name:", Q_NULLPTR));
        path_Placeholder->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class project_Wizard: public Ui_project_Wizard {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PROJECT_WIZARD_H
