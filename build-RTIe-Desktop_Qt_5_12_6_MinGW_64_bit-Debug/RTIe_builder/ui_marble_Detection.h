/********************************************************************************
** Form generated from reading UI file 'marble_Detection.ui'
**
** Created by: Qt User Interface Compiler version 5.12.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MARBLE_DETECTION_H
#define UI_MARBLE_DETECTION_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBox>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_marble_Detection
{
public:
    QWidget *centralwidget;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QToolBox *toolBox;
    QWidget *movement_Page;
    QWidget *verticalLayoutWidget_2;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_X;
    QSpinBox *spin_Box_X;
    QLabel *label_Y;
    QSpinBox *spin_Box_Y;
    QWidget *scale_Page;
    QDoubleSpinBox *spin_Box_Radius;
    QLabel *image_Label;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *marble_Detection)
    {
        if (marble_Detection->objectName().isEmpty())
            marble_Detection->setObjectName(QString::fromUtf8("marble_Detection"));
        marble_Detection->resize(1202, 740);
        centralwidget = new QWidget(marble_Detection);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        verticalLayoutWidget = new QWidget(centralwidget);
        verticalLayoutWidget->setObjectName(QString::fromUtf8("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(1049, 0, 151, 691));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        toolBox = new QToolBox(verticalLayoutWidget);
        toolBox->setObjectName(QString::fromUtf8("toolBox"));
        toolBox->setStyleSheet(QString::fromUtf8("QToolBox::tab {\n"
"background: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 #E1E1E1, stop: 0.4 #DDDDDD, stop: 0.5 #D8D8D8, stop: 1.0 #D3D3D3);\n"
"border: 2px solid #C4C4C3;\n"
"border-bottom-color: #C2C7CB; /* same as the pane color */\n"
"border-top-left-radius: 4px;\n"
"border-top-right-radius: 4px;\n"
"min-width: 8ex;\n"
"padding: 2px;\n"
"}\n"
"QToolBox::tab:selected, QTabBar::tab:hover {\n"
"background: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 #fafafa, stop: 0.4 #f4f4f4, stop: 0.5 #e7e7e7, stop: 1.0 #fafafa);\n"
"}\n"
"QToolBox::tab:selected {\n"
"border-color: #9B9B9B;\n"
"border-bottom-color: #C2C7CB; /* same as pane color */\n"
"}\n"
"QToolBox::tab:!selected {\n"
"margin-top: 2px; /* make non-selected tabs look smaller */\n"
"}\n"
"/*\n"
"QToolBox::tab:selected { \n"
"    font: italic;\n"
"    color: white;\n"
"}*/"));
        movement_Page = new QWidget();
        movement_Page->setObjectName(QString::fromUtf8("movement_Page"));
        movement_Page->setGeometry(QRect(0, 0, 149, 633));
        verticalLayoutWidget_2 = new QWidget(movement_Page);
        verticalLayoutWidget_2->setObjectName(QString::fromUtf8("verticalLayoutWidget_2"));
        verticalLayoutWidget_2->setGeometry(QRect(0, 10, 151, 611));
        verticalLayout_2 = new QVBoxLayout(verticalLayoutWidget_2);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        label_X = new QLabel(verticalLayoutWidget_2);
        label_X->setObjectName(QString::fromUtf8("label_X"));
        label_X->setAlignment(Qt::AlignBottom|Qt::AlignLeading|Qt::AlignLeft);

        verticalLayout_2->addWidget(label_X);

        spin_Box_X = new QSpinBox(verticalLayoutWidget_2);
        spin_Box_X->setObjectName(QString::fromUtf8("spin_Box_X"));
        spin_Box_X->setMaximum(2088);
        spin_Box_X->setValue(500);

        verticalLayout_2->addWidget(spin_Box_X);

        label_Y = new QLabel(verticalLayoutWidget_2);
        label_Y->setObjectName(QString::fromUtf8("label_Y"));
        label_Y->setEnabled(true);
        label_Y->setAlignment(Qt::AlignBottom|Qt::AlignLeading|Qt::AlignLeft);

        verticalLayout_2->addWidget(label_Y);

        spin_Box_Y = new QSpinBox(verticalLayoutWidget_2);
        spin_Box_Y->setObjectName(QString::fromUtf8("spin_Box_Y"));
        spin_Box_Y->setMaximum(1387);
        spin_Box_Y->setValue(128);

        verticalLayout_2->addWidget(spin_Box_Y);

        toolBox->addItem(movement_Page, QString::fromUtf8("Position"));
        scale_Page = new QWidget();
        scale_Page->setObjectName(QString::fromUtf8("scale_Page"));
        scale_Page->setGeometry(QRect(0, 0, 149, 633));
        spin_Box_Radius = new QDoubleSpinBox(scale_Page);
        spin_Box_Radius->setObjectName(QString::fromUtf8("spin_Box_Radius"));
        spin_Box_Radius->setGeometry(QRect(0, 50, 149, 23));
        spin_Box_Radius->setMaximum(99999.000000000000000);
        spin_Box_Radius->setValue(60.000000000000000);
        toolBox->addItem(scale_Page, QString::fromUtf8("Scale"));

        verticalLayout->addWidget(toolBox);

        image_Label = new QLabel(centralwidget);
        image_Label->setObjectName(QString::fromUtf8("image_Label"));
        image_Label->setGeometry(QRect(1, 1, 1044, 694));
        image_Label->setFrameShape(QFrame::Panel);
        image_Label->setScaledContents(true);
        marble_Detection->setCentralWidget(centralwidget);
        menubar = new QMenuBar(marble_Detection);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 1202, 21));
        marble_Detection->setMenuBar(menubar);
        statusbar = new QStatusBar(marble_Detection);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        marble_Detection->setStatusBar(statusbar);

        retranslateUi(marble_Detection);

        toolBox->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(marble_Detection);
    } // setupUi

    void retranslateUi(QMainWindow *marble_Detection)
    {
        marble_Detection->setWindowTitle(QApplication::translate("marble_Detection", "Marble Detection", nullptr));
        label_X->setText(QApplication::translate("marble_Detection", "X Position:", nullptr));
#ifndef QT_NO_TOOLTIP
        spin_Box_X->setToolTip(QApplication::translate("marble_Detection", "X Value of Sphere", nullptr));
#endif // QT_NO_TOOLTIP
        label_Y->setText(QApplication::translate("marble_Detection", "Y Position:", nullptr));
        toolBox->setItemText(toolBox->indexOf(movement_Page), QApplication::translate("marble_Detection", "Position", nullptr));
#ifndef QT_NO_TOOLTIP
        spin_Box_Radius->setToolTip(QApplication::translate("marble_Detection", "Selecter for Radius of Sphere", nullptr));
#endif // QT_NO_TOOLTIP
        toolBox->setItemText(toolBox->indexOf(scale_Page), QApplication::translate("marble_Detection", "Scale", nullptr));
        image_Label->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class marble_Detection: public Ui_marble_Detection {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MARBLE_DETECTION_H
