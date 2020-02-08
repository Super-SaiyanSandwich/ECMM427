/********************************************************************************
** Form generated from reading UI file 'image_Management.ui'
**
** Created by: Qt User Interface Compiler version 5.12.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_IMAGE_MANAGEMENT_H
#define UI_IMAGE_MANAGEMENT_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_image_Management
{
public:
    QAction *action_Import_Label;
    QWidget *centralwidget;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout;
    QPushButton *import_Button_Label;
    QPushButton *delete_Button_Label;
    QMenuBar *menuBar;
    QMenu *menuFile;
    QMenu *menuImages;

    void setupUi(QMainWindow *image_Management)
    {
        if (image_Management->objectName().isEmpty())
            image_Management->setObjectName(QString::fromUtf8("image_Management"));
        image_Management->resize(836, 558);
        action_Import_Label = new QAction(image_Management);
        action_Import_Label->setObjectName(QString::fromUtf8("action_Import_Label"));
        centralwidget = new QWidget(image_Management);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        scrollArea = new QScrollArea(centralwidget);
        scrollArea->setObjectName(QString::fromUtf8("scrollArea"));
        scrollArea->setGeometry(QRect(130, 100, 611, 331));
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QString::fromUtf8("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 609, 329));
        gridLayoutWidget = new QWidget(scrollAreaWidgetContents);
        gridLayoutWidget->setObjectName(QString::fromUtf8("gridLayoutWidget"));
        gridLayoutWidget->setGeometry(QRect(-1, -1, 611, 331));
        gridLayout = new QGridLayout(gridLayoutWidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        scrollArea->setWidget(scrollAreaWidgetContents);
        import_Button_Label = new QPushButton(centralwidget);
        import_Button_Label->setObjectName(QString::fromUtf8("import_Button_Label"));
        import_Button_Label->setGeometry(QRect(130, 70, 80, 24));
        delete_Button_Label = new QPushButton(centralwidget);
        delete_Button_Label->setObjectName(QString::fromUtf8("delete_Button_Label"));
        delete_Button_Label->setGeometry(QRect(220, 70, 80, 24));
        image_Management->setCentralWidget(centralwidget);
        menuBar = new QMenuBar(image_Management);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 836, 22));
        menuFile = new QMenu(menuBar);
        menuFile->setObjectName(QString::fromUtf8("menuFile"));
        menuImages = new QMenu(menuBar);
        menuImages->setObjectName(QString::fromUtf8("menuImages"));
        image_Management->setMenuBar(menuBar);

        menuBar->addAction(menuFile->menuAction());
        menuBar->addAction(menuImages->menuAction());
        menuImages->addAction(action_Import_Label);

        retranslateUi(image_Management);

        QMetaObject::connectSlotsByName(image_Management);
    } // setupUi

    void retranslateUi(QMainWindow *image_Management)
    {
        image_Management->setWindowTitle(QApplication::translate("image_Management", "MainWindow", nullptr));
        action_Import_Label->setText(QApplication::translate("image_Management", "Import", nullptr));
        import_Button_Label->setText(QApplication::translate("image_Management", "Import", nullptr));
        delete_Button_Label->setText(QApplication::translate("image_Management", "Delete", nullptr));
        menuFile->setTitle(QApplication::translate("image_Management", "File", nullptr));
        menuImages->setTitle(QApplication::translate("image_Management", "Images", nullptr));
    } // retranslateUi

};

namespace Ui {
    class image_Management: public Ui_image_Management {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_IMAGE_MANAGEMENT_H
