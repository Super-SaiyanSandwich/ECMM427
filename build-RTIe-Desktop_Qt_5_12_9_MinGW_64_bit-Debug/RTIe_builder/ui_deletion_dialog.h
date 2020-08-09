/********************************************************************************
** Form generated from reading UI file 'deletion_dialog.ui'
**
** Created by: Qt User Interface Compiler version 5.12.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DELETION_DIALOG_H
#define UI_DELETION_DIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGraphicsView>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_deletion_Dialog
{
public:
    QGridLayout *gridLayout;
    QDialogButtonBox *buttonBox;
    QWidget *verticalLayout_5;
    QVBoxLayout *verticalLayout_4;
    QLabel *text_Remaining;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QVBoxLayout *verticalLayout_2;
    QListWidget *remaining_Images_List;
    QWidget *active_Area;
    QHBoxLayout *hboxLayout;
    QWidget *verticalWidget;
    QVBoxLayout *verticalLayout;
    QLabel *text_Reason;
    QTextEdit *removal_Reason;
    QCheckBox *apply_All;
    QGridLayout *image_Layout;
    QPushButton *delete_Button;
    QLabel *image_File_Name;
    QGraphicsView *image_Preview;
    QWidget *horizontalWidget;
    QHBoxLayout *horizontalLayout;
    QPushButton *previous_Image_Button;
    QPushButton *next_Image_Button;
    QSpacerItem *verticalSpacer_3;

    void setupUi(QDialog *deletion_Dialog)
    {
        if (deletion_Dialog->objectName().isEmpty())
            deletion_Dialog->setObjectName(QString::fromUtf8("deletion_Dialog"));
        deletion_Dialog->resize(874, 386);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(deletion_Dialog->sizePolicy().hasHeightForWidth());
        deletion_Dialog->setSizePolicy(sizePolicy);
        deletion_Dialog->setSizeGripEnabled(false);
        deletion_Dialog->setModal(false);
        gridLayout = new QGridLayout(deletion_Dialog);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        buttonBox = new QDialogButtonBox(deletion_Dialog);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setStandardButtons(QDialogButtonBox::Abort|QDialogButtonBox::Ok);

        gridLayout->addWidget(buttonBox, 2, 3, 1, 1);

        verticalLayout_5 = new QWidget(deletion_Dialog);
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(verticalLayout_5->sizePolicy().hasHeightForWidth());
        verticalLayout_5->setSizePolicy(sizePolicy1);
        verticalLayout_4 = new QVBoxLayout(verticalLayout_5);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        text_Remaining = new QLabel(verticalLayout_5);
        text_Remaining->setObjectName(QString::fromUtf8("text_Remaining"));

        verticalLayout_4->addWidget(text_Remaining);

        scrollArea = new QScrollArea(verticalLayout_5);
        scrollArea->setObjectName(QString::fromUtf8("scrollArea"));
        sizePolicy1.setHeightForWidth(scrollArea->sizePolicy().hasHeightForWidth());
        scrollArea->setSizePolicy(sizePolicy1);
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QString::fromUtf8("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 274, 296));
        sizePolicy1.setHeightForWidth(scrollAreaWidgetContents->sizePolicy().hasHeightForWidth());
        scrollAreaWidgetContents->setSizePolicy(sizePolicy1);
        verticalLayout_2 = new QVBoxLayout(scrollAreaWidgetContents);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        remaining_Images_List = new QListWidget(scrollAreaWidgetContents);
        remaining_Images_List->setObjectName(QString::fromUtf8("remaining_Images_List"));
        sizePolicy1.setHeightForWidth(remaining_Images_List->sizePolicy().hasHeightForWidth());
        remaining_Images_List->setSizePolicy(sizePolicy1);
        remaining_Images_List->setHorizontalScrollBarPolicy(Qt::ScrollBarAsNeeded);
        remaining_Images_List->setItemAlignment(Qt::AlignLeading);
        remaining_Images_List->setSortingEnabled(false);

        verticalLayout_2->addWidget(remaining_Images_List);

        scrollArea->setWidget(scrollAreaWidgetContents);

        verticalLayout_4->addWidget(scrollArea);


        gridLayout->addWidget(verticalLayout_5, 1, 3, 1, 1);

        active_Area = new QWidget(deletion_Dialog);
        active_Area->setObjectName(QString::fromUtf8("active_Area"));
        QSizePolicy sizePolicy2(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(active_Area->sizePolicy().hasHeightForWidth());
        active_Area->setSizePolicy(sizePolicy2);
        hboxLayout = new QHBoxLayout(active_Area);
        hboxLayout->setObjectName(QString::fromUtf8("hboxLayout"));
        verticalWidget = new QWidget(active_Area);
        verticalWidget->setObjectName(QString::fromUtf8("verticalWidget"));
        sizePolicy1.setHeightForWidth(verticalWidget->sizePolicy().hasHeightForWidth());
        verticalWidget->setSizePolicy(sizePolicy1);
        verticalLayout = new QVBoxLayout(verticalWidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        text_Reason = new QLabel(verticalWidget);
        text_Reason->setObjectName(QString::fromUtf8("text_Reason"));
        sizePolicy2.setHeightForWidth(text_Reason->sizePolicy().hasHeightForWidth());
        text_Reason->setSizePolicy(sizePolicy2);

        verticalLayout->addWidget(text_Reason);

        removal_Reason = new QTextEdit(verticalWidget);
        removal_Reason->setObjectName(QString::fromUtf8("removal_Reason"));
        QSizePolicy sizePolicy3(QSizePolicy::MinimumExpanding, QSizePolicy::MinimumExpanding);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(removal_Reason->sizePolicy().hasHeightForWidth());
        removal_Reason->setSizePolicy(sizePolicy3);

        verticalLayout->addWidget(removal_Reason);

        apply_All = new QCheckBox(verticalWidget);
        apply_All->setObjectName(QString::fromUtf8("apply_All"));
        sizePolicy2.setHeightForWidth(apply_All->sizePolicy().hasHeightForWidth());
        apply_All->setSizePolicy(sizePolicy2);

        verticalLayout->addWidget(apply_All);


        hboxLayout->addWidget(verticalWidget);

        image_Layout = new QGridLayout();
        image_Layout->setObjectName(QString::fromUtf8("image_Layout"));
        delete_Button = new QPushButton(active_Area);
        delete_Button->setObjectName(QString::fromUtf8("delete_Button"));
        QSizePolicy sizePolicy4(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(delete_Button->sizePolicy().hasHeightForWidth());
        delete_Button->setSizePolicy(sizePolicy4);
        delete_Button->setAutoDefault(true);
        delete_Button->setFlat(false);

        image_Layout->addWidget(delete_Button, 6, 0, 1, 1);

        image_File_Name = new QLabel(active_Area);
        image_File_Name->setObjectName(QString::fromUtf8("image_File_Name"));
        sizePolicy2.setHeightForWidth(image_File_Name->sizePolicy().hasHeightForWidth());
        image_File_Name->setSizePolicy(sizePolicy2);
        QFont font;
        font.setItalic(true);
        image_File_Name->setFont(font);
        image_File_Name->setAlignment(Qt::AlignCenter);

        image_Layout->addWidget(image_File_Name, 2, 0, 1, 1);

        image_Preview = new QGraphicsView(active_Area);
        image_Preview->setObjectName(QString::fromUtf8("image_Preview"));
        QSizePolicy sizePolicy5(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy5.setHorizontalStretch(0);
        sizePolicy5.setVerticalStretch(0);
        sizePolicy5.setHeightForWidth(image_Preview->sizePolicy().hasHeightForWidth());
        image_Preview->setSizePolicy(sizePolicy5);

        image_Layout->addWidget(image_Preview, 4, 0, 1, 1);

        horizontalWidget = new QWidget(active_Area);
        horizontalWidget->setObjectName(QString::fromUtf8("horizontalWidget"));
        sizePolicy5.setHeightForWidth(horizontalWidget->sizePolicy().hasHeightForWidth());
        horizontalWidget->setSizePolicy(sizePolicy5);
        horizontalLayout = new QHBoxLayout(horizontalWidget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        previous_Image_Button = new QPushButton(horizontalWidget);
        previous_Image_Button->setObjectName(QString::fromUtf8("previous_Image_Button"));

        horizontalLayout->addWidget(previous_Image_Button);

        next_Image_Button = new QPushButton(horizontalWidget);
        next_Image_Button->setObjectName(QString::fromUtf8("next_Image_Button"));

        horizontalLayout->addWidget(next_Image_Button);


        image_Layout->addWidget(horizontalWidget, 5, 0, 1, 1);

        verticalSpacer_3 = new QSpacerItem(20, 20, QSizePolicy::Minimum, QSizePolicy::MinimumExpanding);

        image_Layout->addItem(verticalSpacer_3, 1, 0, 1, 1);


        hboxLayout->addLayout(image_Layout);


        gridLayout->addWidget(active_Area, 1, 0, 1, 1);


        retranslateUi(deletion_Dialog);

        delete_Button->setDefault(false);


        QMetaObject::connectSlotsByName(deletion_Dialog);
    } // setupUi

    void retranslateUi(QDialog *deletion_Dialog)
    {
        deletion_Dialog->setWindowTitle(QApplication::translate("deletion_Dialog", "Dialog", nullptr));
        text_Remaining->setText(QApplication::translate("deletion_Dialog", "Remaining images:", nullptr));
        text_Reason->setText(QApplication::translate("deletion_Dialog", "Reason for removal:", nullptr));
        apply_All->setText(QApplication::translate("deletion_Dialog", "Apply to all", nullptr));
        delete_Button->setText(QApplication::translate("deletion_Dialog", "Delete", nullptr));
        image_File_Name->setText(QString());
        previous_Image_Button->setText(QApplication::translate("deletion_Dialog", "Previous", nullptr));
        next_Image_Button->setText(QApplication::translate("deletion_Dialog", "Next", nullptr));
    } // retranslateUi

};

namespace Ui {
    class deletion_Dialog: public Ui_deletion_Dialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DELETION_DIALOG_H
