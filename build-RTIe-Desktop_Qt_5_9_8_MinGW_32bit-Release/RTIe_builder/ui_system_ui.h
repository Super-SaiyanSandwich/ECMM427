/********************************************************************************
** Form generated from reading UI file 'system_ui.ui'
**
** Created by: Qt User Interface Compiler version 5.9.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SYSTEM_UI_H
#define UI_SYSTEM_UI_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "import_Widget.h"

QT_BEGIN_NAMESPACE

class Ui_system_Ui
{
public:
    QAction *action_New_Project_2;
    QAction *action_Open_Project_2;
    QAction *action_Exit_2;
    QAction *actionRtiEx_Wiki;
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout;
    QStackedWidget *stackedWidget;
    import_Widget *import_Page;
    QVBoxLayout *verticalLayout_4;
    QWidget *button_Widget;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_9;
    QPushButton *image_Management_Btn;
    QPushButton *marble_Detection_Btn;
    QPushButton *remove_Marble_Btn;
    QPushButton *export_Btn;
    QMenuBar *menubar;
    QMenu *menuHelp;
    QMenu *menuFile;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *system_Ui)
    {
        if (system_Ui->objectName().isEmpty())
            system_Ui->setObjectName(QStringLiteral("system_Ui"));
        system_Ui->resize(1090, 949);
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(system_Ui->sizePolicy().hasHeightForWidth());
        system_Ui->setSizePolicy(sizePolicy);
        system_Ui->setMinimumSize(QSize(0, 900));
        QIcon icon;
        icon.addFile(QStringLiteral(":/rec/img/icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        system_Ui->setWindowIcon(icon);
        action_New_Project_2 = new QAction(system_Ui);
        action_New_Project_2->setObjectName(QStringLiteral("action_New_Project_2"));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/new.png"), QSize(), QIcon::Normal, QIcon::Off);
        action_New_Project_2->setIcon(icon1);
        action_Open_Project_2 = new QAction(system_Ui);
        action_Open_Project_2->setObjectName(QStringLiteral("action_Open_Project_2"));
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/open.png"), QSize(), QIcon::Normal, QIcon::Off);
        action_Open_Project_2->setIcon(icon2);
        action_Exit_2 = new QAction(system_Ui);
        action_Exit_2->setObjectName(QStringLiteral("action_Exit_2"));
        QIcon icon3;
        icon3.addFile(QStringLiteral(":/Exit.png"), QSize(), QIcon::Normal, QIcon::Off);
        action_Exit_2->setIcon(icon3);
        actionRtiEx_Wiki = new QAction(system_Ui);
        actionRtiEx_Wiki->setObjectName(QStringLiteral("actionRtiEx_Wiki"));
        centralwidget = new QWidget(system_Ui);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        QSizePolicy sizePolicy1(QSizePolicy::Maximum, QSizePolicy::Maximum);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(centralwidget->sizePolicy().hasHeightForWidth());
        centralwidget->setSizePolicy(sizePolicy1);
        centralwidget->setMaximumSize(QSize(20000, 20000));
        verticalLayout = new QVBoxLayout(centralwidget);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        stackedWidget = new QStackedWidget(centralwidget);
        stackedWidget->setObjectName(QStringLiteral("stackedWidget"));
        stackedWidget->setEnabled(true);
        QSizePolicy sizePolicy2(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy2.setHorizontalStretch(100);
        sizePolicy2.setVerticalStretch(100);
        sizePolicy2.setHeightForWidth(stackedWidget->sizePolicy().hasHeightForWidth());
        stackedWidget->setSizePolicy(sizePolicy2);
        stackedWidget->setAutoFillBackground(false);
        stackedWidget->setLineWidth(14);
        import_Page = new import_Widget();
        import_Page->setObjectName(QStringLiteral("import_Page"));
        sizePolicy.setHeightForWidth(import_Page->sizePolicy().hasHeightForWidth());
        import_Page->setSizePolicy(sizePolicy);
        verticalLayout_4 = new QVBoxLayout(import_Page);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        stackedWidget->addWidget(import_Page);

        verticalLayout->addWidget(stackedWidget);

        button_Widget = new QWidget(centralwidget);
        button_Widget->setObjectName(QStringLiteral("button_Widget"));
        QSizePolicy sizePolicy3(QSizePolicy::Preferred, QSizePolicy::Expanding);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(button_Widget->sizePolicy().hasHeightForWidth());
        button_Widget->setSizePolicy(sizePolicy3);
        button_Widget->setMaximumSize(QSize(16777213, 60));
        verticalLayout_2 = new QVBoxLayout(button_Widget);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setObjectName(QStringLiteral("horizontalLayout_9"));
        image_Management_Btn = new QPushButton(button_Widget);
        image_Management_Btn->setObjectName(QStringLiteral("image_Management_Btn"));
        image_Management_Btn->setEnabled(false);
        QSizePolicy sizePolicy4(QSizePolicy::MinimumExpanding, QSizePolicy::MinimumExpanding);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(image_Management_Btn->sizePolicy().hasHeightForWidth());
        image_Management_Btn->setSizePolicy(sizePolicy4);
        image_Management_Btn->setCheckable(false);
        image_Management_Btn->setFlat(false);

        horizontalLayout_9->addWidget(image_Management_Btn);

        marble_Detection_Btn = new QPushButton(button_Widget);
        marble_Detection_Btn->setObjectName(QStringLiteral("marble_Detection_Btn"));
        sizePolicy4.setHeightForWidth(marble_Detection_Btn->sizePolicy().hasHeightForWidth());
        marble_Detection_Btn->setSizePolicy(sizePolicy4);

        horizontalLayout_9->addWidget(marble_Detection_Btn);

        remove_Marble_Btn = new QPushButton(button_Widget);
        remove_Marble_Btn->setObjectName(QStringLiteral("remove_Marble_Btn"));
        sizePolicy4.setHeightForWidth(remove_Marble_Btn->sizePolicy().hasHeightForWidth());
        remove_Marble_Btn->setSizePolicy(sizePolicy4);

        horizontalLayout_9->addWidget(remove_Marble_Btn);

        export_Btn = new QPushButton(button_Widget);
        export_Btn->setObjectName(QStringLiteral("export_Btn"));
        sizePolicy4.setHeightForWidth(export_Btn->sizePolicy().hasHeightForWidth());
        export_Btn->setSizePolicy(sizePolicy4);

        horizontalLayout_9->addWidget(export_Btn);


        verticalLayout_2->addLayout(horizontalLayout_9);


        verticalLayout->addWidget(button_Widget);

        system_Ui->setCentralWidget(centralwidget);
        menubar = new QMenuBar(system_Ui);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 1090, 21));
        menuHelp = new QMenu(menubar);
        menuHelp->setObjectName(QStringLiteral("menuHelp"));
        menuHelp->setTearOffEnabled(true);
        menuFile = new QMenu(menubar);
        menuFile->setObjectName(QStringLiteral("menuFile"));
        menuFile->setTearOffEnabled(true);
        system_Ui->setMenuBar(menubar);
        statusbar = new QStatusBar(system_Ui);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        system_Ui->setStatusBar(statusbar);

        menubar->addAction(menuFile->menuAction());
        menubar->addAction(menuHelp->menuAction());
        menuHelp->addAction(actionRtiEx_Wiki);
        menuFile->addAction(action_New_Project_2);
        menuFile->addAction(action_Open_Project_2);
        menuFile->addSeparator();
        menuFile->addAction(action_Exit_2);

        retranslateUi(system_Ui);

        stackedWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(system_Ui);
    } // setupUi

    void retranslateUi(QMainWindow *system_Ui)
    {
        system_Ui->setWindowTitle(QApplication::translate("system_Ui", "RTI Builder", Q_NULLPTR));
        action_New_Project_2->setText(QApplication::translate("system_Ui", "New Project", Q_NULLPTR));
#ifndef QT_NO_SHORTCUT
        action_New_Project_2->setShortcut(QApplication::translate("system_Ui", "Ctrl+N", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
        action_Open_Project_2->setText(QApplication::translate("system_Ui", "Open Project", Q_NULLPTR));
#ifndef QT_NO_SHORTCUT
        action_Open_Project_2->setShortcut(QApplication::translate("system_Ui", "Ctrl+O", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
        action_Exit_2->setText(QApplication::translate("system_Ui", "Exit", Q_NULLPTR));
#ifndef QT_NO_SHORTCUT
        action_Exit_2->setShortcut(QApplication::translate("system_Ui", "Ctrl+Shift+X", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
        actionRtiEx_Wiki->setText(QApplication::translate("system_Ui", "Help Forum", Q_NULLPTR));
        image_Management_Btn->setText(QApplication::translate("system_Ui", "Image Management", Q_NULLPTR));
        marble_Detection_Btn->setText(QApplication::translate("system_Ui", "Marble Detection", Q_NULLPTR));
        remove_Marble_Btn->setText(QApplication::translate("system_Ui", "Crop Marble from Images", Q_NULLPTR));
        export_Btn->setText(QApplication::translate("system_Ui", "Export", Q_NULLPTR));
        menuHelp->setTitle(QApplication::translate("system_Ui", "Help", Q_NULLPTR));
        menuFile->setTitle(QApplication::translate("system_Ui", "File", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class system_Ui: public Ui_system_Ui {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SYSTEM_UI_H
