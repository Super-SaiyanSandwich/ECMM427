/********************************************************************************
** Form generated from reading UI file 'marble_Detection.ui'
**
** Created by: Qt User Interface Compiler version 5.12.5
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
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_marble_Detection
{
public:
    QWidget *centralwidget;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QSpinBox *spin_Box_X;
    QSpinBox *spin_Box_Y;
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
        spin_Box_X = new QSpinBox(verticalLayoutWidget);
        spin_Box_X->setObjectName(QString::fromUtf8("spin_Box_X"));
        spin_Box_X->setMaximum(2088);
        spin_Box_X->setValue(128);

        verticalLayout->addWidget(spin_Box_X);

        spin_Box_Y = new QSpinBox(verticalLayoutWidget);
        spin_Box_Y->setObjectName(QString::fromUtf8("spin_Box_Y"));
        spin_Box_Y->setMaximum(1387);
        spin_Box_Y->setValue(128);

        verticalLayout->addWidget(spin_Box_Y);

        spin_Box_Radius = new QDoubleSpinBox(verticalLayoutWidget);
        spin_Box_Radius->setObjectName(QString::fromUtf8("spin_Box_Radius"));
        spin_Box_Radius->setValue(10.000000000000000);

        verticalLayout->addWidget(spin_Box_Radius);

        image_Label = new QLabel(centralwidget);
        image_Label->setObjectName(QString::fromUtf8("image_Label"));
        image_Label->setGeometry(QRect(1, 1, 1044, 694));
        image_Label->setFrameShape(QFrame::Panel);
        image_Label->setScaledContents(true);
        marble_Detection->setCentralWidget(centralwidget);
        menubar = new QMenuBar(marble_Detection);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 1202, 22));
        marble_Detection->setMenuBar(menubar);
        statusbar = new QStatusBar(marble_Detection);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        marble_Detection->setStatusBar(statusbar);

        retranslateUi(marble_Detection);

        QMetaObject::connectSlotsByName(marble_Detection);
    } // setupUi

    void retranslateUi(QMainWindow *marble_Detection)
    {
        marble_Detection->setWindowTitle(QApplication::translate("marble_Detection", "Marble Detection", nullptr));
#ifndef QT_NO_TOOLTIP
        spin_Box_X->setToolTip(QApplication::translate("marble_Detection", "X Value of Sphere", nullptr));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        spin_Box_Radius->setToolTip(QApplication::translate("marble_Detection", "Selecter for Radius of Sphere", nullptr));
#endif // QT_NO_TOOLTIP
        image_Label->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class marble_Detection: public Ui_marble_Detection {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MARBLE_DETECTION_H
