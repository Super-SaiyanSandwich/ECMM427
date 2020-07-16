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
    QAction *action_New_Project;
    QAction *action_Open_Project;
    QAction *action_Save;
    QAction *action_Save_As;
    QAction *action_Close;
    QAction *action_Exit;
    QAction *action_Undo;
    QAction *action_Redo;
    QAction *action_Cut;
    QAction *action_Copy;
    QAction *action_Paste;
    QAction *action_Clear;
    QAction *actionImport;
    QAction *actionExport;
    QAction *actionEnglish;
    QAction *actionFrench;
    QAction *actionGerman;
    QAction *actionKorean;
    QAction *actionGerman_2;
    QAction *actionMandarin;
    QAction *actionHindi;
    QAction *actionNew_Project;
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
    QMenu *menuEdit;
    QMenu *menuView;
    QMenu *menuLanguage;
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
        action_New_Project = new QAction(system_Ui);
        action_New_Project->setObjectName(QStringLiteral("action_New_Project"));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/rec/img/new.png"), QSize(), QIcon::Normal, QIcon::Off);
        action_New_Project->setIcon(icon1);
        action_Open_Project = new QAction(system_Ui);
        action_Open_Project->setObjectName(QStringLiteral("action_Open_Project"));
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/rec/img/open.png"), QSize(), QIcon::Normal, QIcon::Off);
        action_Open_Project->setIcon(icon2);
        action_Save = new QAction(system_Ui);
        action_Save->setObjectName(QStringLiteral("action_Save"));
        QIcon icon3;
        icon3.addFile(QStringLiteral(":/rec/img/save.png"), QSize(), QIcon::Normal, QIcon::Off);
        action_Save->setIcon(icon3);
        action_Save_As = new QAction(system_Ui);
        action_Save_As->setObjectName(QStringLiteral("action_Save_As"));
        QIcon icon4;
        icon4.addFile(QStringLiteral(":/rec/img/save_as.png"), QSize(), QIcon::Normal, QIcon::Off);
        action_Save_As->setIcon(icon4);
        action_Close = new QAction(system_Ui);
        action_Close->setObjectName(QStringLiteral("action_Close"));
        QIcon icon5;
        icon5.addFile(QStringLiteral(":/rec/img/close.png"), QSize(), QIcon::Normal, QIcon::Off);
        action_Close->setIcon(icon5);
        action_Exit = new QAction(system_Ui);
        action_Exit->setObjectName(QStringLiteral("action_Exit"));
        QIcon icon6;
        icon6.addFile(QStringLiteral(":/rec/img/exit.png"), QSize(), QIcon::Normal, QIcon::Off);
        action_Exit->setIcon(icon6);
        action_Undo = new QAction(system_Ui);
        action_Undo->setObjectName(QStringLiteral("action_Undo"));
        QIcon icon7;
        icon7.addFile(QStringLiteral(":/rec/img/undo.png"), QSize(), QIcon::Normal, QIcon::Off);
        action_Undo->setIcon(icon7);
        action_Redo = new QAction(system_Ui);
        action_Redo->setObjectName(QStringLiteral("action_Redo"));
        QIcon icon8;
        icon8.addFile(QStringLiteral(":/rec/img/redo.png"), QSize(), QIcon::Normal, QIcon::Off);
        action_Redo->setIcon(icon8);
        action_Cut = new QAction(system_Ui);
        action_Cut->setObjectName(QStringLiteral("action_Cut"));
        QIcon icon9;
        icon9.addFile(QStringLiteral(":/rec/img/cut.png"), QSize(), QIcon::Normal, QIcon::Off);
        action_Cut->setIcon(icon9);
        action_Copy = new QAction(system_Ui);
        action_Copy->setObjectName(QStringLiteral("action_Copy"));
        QIcon icon10;
        icon10.addFile(QStringLiteral(":/rec/img/copy.png"), QSize(), QIcon::Normal, QIcon::Off);
        action_Copy->setIcon(icon10);
        action_Paste = new QAction(system_Ui);
        action_Paste->setObjectName(QStringLiteral("action_Paste"));
        QIcon icon11;
        icon11.addFile(QStringLiteral(":/rec/img/paste.png"), QSize(), QIcon::Normal, QIcon::Off);
        action_Paste->setIcon(icon11);
        action_Clear = new QAction(system_Ui);
        action_Clear->setObjectName(QStringLiteral("action_Clear"));
        actionImport = new QAction(system_Ui);
        actionImport->setObjectName(QStringLiteral("actionImport"));
        actionExport = new QAction(system_Ui);
        actionExport->setObjectName(QStringLiteral("actionExport"));
        actionEnglish = new QAction(system_Ui);
        actionEnglish->setObjectName(QStringLiteral("actionEnglish"));
        actionFrench = new QAction(system_Ui);
        actionFrench->setObjectName(QStringLiteral("actionFrench"));
        actionGerman = new QAction(system_Ui);
        actionGerman->setObjectName(QStringLiteral("actionGerman"));
        actionKorean = new QAction(system_Ui);
        actionKorean->setObjectName(QStringLiteral("actionKorean"));
        actionGerman_2 = new QAction(system_Ui);
        actionGerman_2->setObjectName(QStringLiteral("actionGerman_2"));
        actionMandarin = new QAction(system_Ui);
        actionMandarin->setObjectName(QStringLiteral("actionMandarin"));
        actionHindi = new QAction(system_Ui);
        actionHindi->setObjectName(QStringLiteral("actionHindi"));
        actionNew_Project = new QAction(system_Ui);
        actionNew_Project->setObjectName(QStringLiteral("actionNew_Project"));
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
        menuEdit = new QMenu(menubar);
        menuEdit->setObjectName(QStringLiteral("menuEdit"));
        menuView = new QMenu(menubar);
        menuView->setObjectName(QStringLiteral("menuView"));
        menuLanguage = new QMenu(menubar);
        menuLanguage->setObjectName(QStringLiteral("menuLanguage"));
        menuHelp = new QMenu(menubar);
        menuHelp->setObjectName(QStringLiteral("menuHelp"));
        menuFile = new QMenu(menubar);
        menuFile->setObjectName(QStringLiteral("menuFile"));
        system_Ui->setMenuBar(menubar);
        statusbar = new QStatusBar(system_Ui);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        system_Ui->setStatusBar(statusbar);

        menubar->addAction(menuFile->menuAction());
        menubar->addAction(menuEdit->menuAction());
        menubar->addAction(menuView->menuAction());
        menubar->addAction(menuLanguage->menuAction());
        menubar->addAction(menuHelp->menuAction());
        menuEdit->addAction(action_Undo);
        menuEdit->addAction(action_Redo);
        menuEdit->addSeparator();
        menuEdit->addAction(action_Cut);
        menuEdit->addAction(action_Copy);
        menuEdit->addAction(action_Paste);
        menuEdit->addAction(action_Clear);
        menuLanguage->addAction(actionEnglish);
        menuLanguage->addAction(actionFrench);
        menuLanguage->addAction(actionGerman);
        menuLanguage->addAction(actionGerman_2);
        menuLanguage->addAction(actionKorean);
        menuLanguage->addAction(actionMandarin);
        menuLanguage->addAction(actionHindi);
        menuFile->addAction(actionNew_Project);

        retranslateUi(system_Ui);

        stackedWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(system_Ui);
    } // setupUi

    void retranslateUi(QMainWindow *system_Ui)
    {
        system_Ui->setWindowTitle(QApplication::translate("system_Ui", "RTI Builder", Q_NULLPTR));
        action_New_Project->setText(QApplication::translate("system_Ui", "New", Q_NULLPTR));
#ifndef QT_NO_SHORTCUT
        action_New_Project->setShortcut(QApplication::translate("system_Ui", "Ctrl+N", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
        action_Open_Project->setText(QApplication::translate("system_Ui", "Open ", Q_NULLPTR));
#ifndef QT_NO_SHORTCUT
        action_Open_Project->setShortcut(QApplication::translate("system_Ui", "Ctrl+O", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
        action_Save->setText(QApplication::translate("system_Ui", "Save", Q_NULLPTR));
#ifndef QT_NO_SHORTCUT
        action_Save->setShortcut(QApplication::translate("system_Ui", "Ctrl+S", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
        action_Save_As->setText(QApplication::translate("system_Ui", "Save As", Q_NULLPTR));
#ifndef QT_NO_SHORTCUT
        action_Save_As->setShortcut(QApplication::translate("system_Ui", "Ctrl+Shift+S", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
        action_Close->setText(QApplication::translate("system_Ui", "Close", Q_NULLPTR));
        action_Exit->setText(QApplication::translate("system_Ui", "Exit", Q_NULLPTR));
#ifndef QT_NO_SHORTCUT
        action_Exit->setShortcut(QApplication::translate("system_Ui", "Ctrl+Shift+X", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
        action_Undo->setText(QApplication::translate("system_Ui", "Undo", Q_NULLPTR));
#ifndef QT_NO_SHORTCUT
        action_Undo->setShortcut(QApplication::translate("system_Ui", "Ctrl+Z", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
        action_Redo->setText(QApplication::translate("system_Ui", "Redo", Q_NULLPTR));
#ifndef QT_NO_SHORTCUT
        action_Redo->setShortcut(QApplication::translate("system_Ui", "Ctrl+Y", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
        action_Cut->setText(QApplication::translate("system_Ui", "Cut", Q_NULLPTR));
#ifndef QT_NO_SHORTCUT
        action_Cut->setShortcut(QApplication::translate("system_Ui", "Ctrl+X", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
        action_Copy->setText(QApplication::translate("system_Ui", "Copy", Q_NULLPTR));
#ifndef QT_NO_SHORTCUT
        action_Copy->setShortcut(QApplication::translate("system_Ui", "Ctrl+C", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
        action_Paste->setText(QApplication::translate("system_Ui", "Paste", Q_NULLPTR));
#ifndef QT_NO_SHORTCUT
        action_Paste->setShortcut(QApplication::translate("system_Ui", "Ctrl+V", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
        action_Clear->setText(QApplication::translate("system_Ui", "Clear", Q_NULLPTR));
#ifndef QT_NO_SHORTCUT
        action_Clear->setShortcut(QApplication::translate("system_Ui", "Ctrl+Shift+C", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
        actionImport->setText(QApplication::translate("system_Ui", "Import", Q_NULLPTR));
        actionExport->setText(QApplication::translate("system_Ui", "Export", Q_NULLPTR));
        actionEnglish->setText(QApplication::translate("system_Ui", "English", Q_NULLPTR));
        actionFrench->setText(QApplication::translate("system_Ui", "French", Q_NULLPTR));
        actionGerman->setText(QApplication::translate("system_Ui", "Spanish", Q_NULLPTR));
        actionKorean->setText(QApplication::translate("system_Ui", "Korean", Q_NULLPTR));
        actionGerman_2->setText(QApplication::translate("system_Ui", "German", Q_NULLPTR));
        actionMandarin->setText(QApplication::translate("system_Ui", "Mandarin", Q_NULLPTR));
        actionHindi->setText(QApplication::translate("system_Ui", "Hindi", Q_NULLPTR));
        actionNew_Project->setText(QApplication::translate("system_Ui", "New Project", Q_NULLPTR));
        image_Management_Btn->setText(QApplication::translate("system_Ui", "Image Management", Q_NULLPTR));
        marble_Detection_Btn->setText(QApplication::translate("system_Ui", "Marble Detection", Q_NULLPTR));
        remove_Marble_Btn->setText(QApplication::translate("system_Ui", "Crop Marble from Images", Q_NULLPTR));
        export_Btn->setText(QApplication::translate("system_Ui", "Export", Q_NULLPTR));
        menuEdit->setTitle(QApplication::translate("system_Ui", "Edit", Q_NULLPTR));
        menuView->setTitle(QApplication::translate("system_Ui", "View", Q_NULLPTR));
        menuLanguage->setTitle(QApplication::translate("system_Ui", "Language", Q_NULLPTR));
        menuHelp->setTitle(QApplication::translate("system_Ui", "Help", Q_NULLPTR));
        menuFile->setTitle(QApplication::translate("system_Ui", "File", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class system_Ui: public Ui_system_Ui {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SYSTEM_UI_H
