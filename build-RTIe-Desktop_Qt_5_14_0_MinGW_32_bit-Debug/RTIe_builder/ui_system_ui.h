/********************************************************************************
** Form generated from reading UI file 'system_ui.ui'
**
** Created by: Qt User Interface Compiler version 5.14.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SYSTEM_UI_H
#define UI_SYSTEM_UI_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

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
    QWidget *centralwidget;
    QGridLayout *gridLayout;
    QStackedWidget *stackedWidget;
    QWidget *page1;
    QGridLayout *gridLayout_2;
    QLabel *image_Preview;
    QPushButton *import_btn;
    QPushButton *delete_Btn;
    QHBoxLayout *horizontalLayout;
    QListWidget *listWidget;
    QPushButton *image_Management_Btn;
    QPushButton *marble_Detection_Btn;
    QPushButton *export_2;
    QWidget *page2;
    QGridLayout *gridLayout_4;
    QLabel *label_3;
    QListWidget *listWidget_3;
    QPushButton *btn1;
    QPushButton *btn3;
    QWidget *page3;
    QGridLayout *gridLayout_5;
    QLabel *label_4;
    QListWidget *listWidget_4;
    QPushButton *btn2_2;
    QPushButton *btn4;
    QWidget *page4;
    QGridLayout *gridLayout_6;
    QLabel *label_5;
    QListWidget *listWidget_5;
    QPushButton *btn3_2;
    QPushButton *btn5_2;
    QWidget *page5;
    QGridLayout *gridLayout_3;
    QLabel *label_6;
    QPushButton *btn4_2;
    QPushButton *btn1_2;
    QMenuBar *menubar;
    QMenu *menuFile;
    QMenu *menuEdit;
    QMenu *menuView;
    QMenu *menuLanguage;
    QMenu *menuHelp;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *system_Ui)
    {
        if (system_Ui->objectName().isEmpty())
            system_Ui->setObjectName(QString::fromUtf8("system_Ui"));
        system_Ui->resize(925, 697);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/rec/img/icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        system_Ui->setWindowIcon(icon);
        action_New_Project = new QAction(system_Ui);
        action_New_Project->setObjectName(QString::fromUtf8("action_New_Project"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/rec/img/new.png"), QSize(), QIcon::Normal, QIcon::Off);
        action_New_Project->setIcon(icon1);
        action_Open_Project = new QAction(system_Ui);
        action_Open_Project->setObjectName(QString::fromUtf8("action_Open_Project"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/rec/img/open.png"), QSize(), QIcon::Normal, QIcon::Off);
        action_Open_Project->setIcon(icon2);
        action_Save = new QAction(system_Ui);
        action_Save->setObjectName(QString::fromUtf8("action_Save"));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/rec/img/save.png"), QSize(), QIcon::Normal, QIcon::Off);
        action_Save->setIcon(icon3);
        action_Save_As = new QAction(system_Ui);
        action_Save_As->setObjectName(QString::fromUtf8("action_Save_As"));
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/rec/img/save_as.png"), QSize(), QIcon::Normal, QIcon::Off);
        action_Save_As->setIcon(icon4);
        action_Close = new QAction(system_Ui);
        action_Close->setObjectName(QString::fromUtf8("action_Close"));
        QIcon icon5;
        icon5.addFile(QString::fromUtf8(":/rec/img/close.png"), QSize(), QIcon::Normal, QIcon::Off);
        action_Close->setIcon(icon5);
        action_Exit = new QAction(system_Ui);
        action_Exit->setObjectName(QString::fromUtf8("action_Exit"));
        QIcon icon6;
        icon6.addFile(QString::fromUtf8(":/rec/img/exit.png"), QSize(), QIcon::Normal, QIcon::Off);
        action_Exit->setIcon(icon6);
        action_Undo = new QAction(system_Ui);
        action_Undo->setObjectName(QString::fromUtf8("action_Undo"));
        QIcon icon7;
        icon7.addFile(QString::fromUtf8(":/rec/img/undo.png"), QSize(), QIcon::Normal, QIcon::Off);
        action_Undo->setIcon(icon7);
        action_Redo = new QAction(system_Ui);
        action_Redo->setObjectName(QString::fromUtf8("action_Redo"));
        QIcon icon8;
        icon8.addFile(QString::fromUtf8(":/rec/img/redo.png"), QSize(), QIcon::Normal, QIcon::Off);
        action_Redo->setIcon(icon8);
        action_Cut = new QAction(system_Ui);
        action_Cut->setObjectName(QString::fromUtf8("action_Cut"));
        QIcon icon9;
        icon9.addFile(QString::fromUtf8(":/rec/img/cut.png"), QSize(), QIcon::Normal, QIcon::Off);
        action_Cut->setIcon(icon9);
        action_Copy = new QAction(system_Ui);
        action_Copy->setObjectName(QString::fromUtf8("action_Copy"));
        QIcon icon10;
        icon10.addFile(QString::fromUtf8(":/rec/img/copy.png"), QSize(), QIcon::Normal, QIcon::Off);
        action_Copy->setIcon(icon10);
        action_Paste = new QAction(system_Ui);
        action_Paste->setObjectName(QString::fromUtf8("action_Paste"));
        QIcon icon11;
        icon11.addFile(QString::fromUtf8(":/rec/img/paste.png"), QSize(), QIcon::Normal, QIcon::Off);
        action_Paste->setIcon(icon11);
        action_Clear = new QAction(system_Ui);
        action_Clear->setObjectName(QString::fromUtf8("action_Clear"));
        actionImport = new QAction(system_Ui);
        actionImport->setObjectName(QString::fromUtf8("actionImport"));
        actionExport = new QAction(system_Ui);
        actionExport->setObjectName(QString::fromUtf8("actionExport"));
        centralwidget = new QWidget(system_Ui);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        gridLayout = new QGridLayout(centralwidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        stackedWidget = new QStackedWidget(centralwidget);
        stackedWidget->setObjectName(QString::fromUtf8("stackedWidget"));
        page1 = new QWidget();
        page1->setObjectName(QString::fromUtf8("page1"));
        gridLayout_2 = new QGridLayout(page1);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        image_Preview = new QLabel(page1);
        image_Preview->setObjectName(QString::fromUtf8("image_Preview"));
        QFont font;
        font.setPointSize(48);
        font.setBold(true);
        font.setWeight(75);
        image_Preview->setFont(font);
        image_Preview->setFrameShape(QFrame::StyledPanel);
        image_Preview->setFrameShadow(QFrame::Sunken);
        image_Preview->setLineWidth(25);

        gridLayout_2->addWidget(image_Preview, 1, 0, 1, 1);

        import_btn = new QPushButton(page1);
        import_btn->setObjectName(QString::fromUtf8("import_btn"));

        gridLayout_2->addWidget(import_btn, 0, 1, 1, 1);

        delete_Btn = new QPushButton(page1);
        delete_Btn->setObjectName(QString::fromUtf8("delete_Btn"));

        gridLayout_2->addWidget(delete_Btn, 0, 2, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));

        gridLayout_2->addLayout(horizontalLayout, 0, 0, 1, 1);

        listWidget = new QListWidget(page1);
        listWidget->setObjectName(QString::fromUtf8("listWidget"));

        gridLayout_2->addWidget(listWidget, 1, 1, 1, 2);

        image_Management_Btn = new QPushButton(page1);
        image_Management_Btn->setObjectName(QString::fromUtf8("image_Management_Btn"));
        image_Management_Btn->setEnabled(false);
        image_Management_Btn->setCheckable(false);
        image_Management_Btn->setFlat(false);

        gridLayout_2->addWidget(image_Management_Btn, 2, 0, 1, 1);

        marble_Detection_Btn = new QPushButton(page1);
        marble_Detection_Btn->setObjectName(QString::fromUtf8("marble_Detection_Btn"));

        gridLayout_2->addWidget(marble_Detection_Btn, 2, 1, 1, 1);

        export_2 = new QPushButton(page1);
        export_2->setObjectName(QString::fromUtf8("export_2"));

        gridLayout_2->addWidget(export_2, 2, 2, 1, 1);

        stackedWidget->addWidget(page1);
        page2 = new QWidget();
        page2->setObjectName(QString::fromUtf8("page2"));
        gridLayout_4 = new QGridLayout(page2);
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        label_3 = new QLabel(page2);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setFont(font);

        gridLayout_4->addWidget(label_3, 0, 0, 1, 1);

        listWidget_3 = new QListWidget(page2);
        listWidget_3->setObjectName(QString::fromUtf8("listWidget_3"));

        gridLayout_4->addWidget(listWidget_3, 0, 1, 1, 2);

        btn1 = new QPushButton(page2);
        btn1->setObjectName(QString::fromUtf8("btn1"));

        gridLayout_4->addWidget(btn1, 1, 1, 1, 1);

        btn3 = new QPushButton(page2);
        btn3->setObjectName(QString::fromUtf8("btn3"));

        gridLayout_4->addWidget(btn3, 1, 2, 1, 1);

        stackedWidget->addWidget(page2);
        page3 = new QWidget();
        page3->setObjectName(QString::fromUtf8("page3"));
        gridLayout_5 = new QGridLayout(page3);
        gridLayout_5->setObjectName(QString::fromUtf8("gridLayout_5"));
        label_4 = new QLabel(page3);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setFont(font);

        gridLayout_5->addWidget(label_4, 0, 0, 1, 1);

        listWidget_4 = new QListWidget(page3);
        listWidget_4->setObjectName(QString::fromUtf8("listWidget_4"));

        gridLayout_5->addWidget(listWidget_4, 0, 1, 1, 2);

        btn2_2 = new QPushButton(page3);
        btn2_2->setObjectName(QString::fromUtf8("btn2_2"));

        gridLayout_5->addWidget(btn2_2, 1, 1, 1, 1);

        btn4 = new QPushButton(page3);
        btn4->setObjectName(QString::fromUtf8("btn4"));

        gridLayout_5->addWidget(btn4, 1, 2, 1, 1);

        stackedWidget->addWidget(page3);
        page4 = new QWidget();
        page4->setObjectName(QString::fromUtf8("page4"));
        gridLayout_6 = new QGridLayout(page4);
        gridLayout_6->setObjectName(QString::fromUtf8("gridLayout_6"));
        label_5 = new QLabel(page4);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setFont(font);

        gridLayout_6->addWidget(label_5, 0, 0, 1, 1);

        listWidget_5 = new QListWidget(page4);
        listWidget_5->setObjectName(QString::fromUtf8("listWidget_5"));

        gridLayout_6->addWidget(listWidget_5, 0, 1, 1, 2);

        btn3_2 = new QPushButton(page4);
        btn3_2->setObjectName(QString::fromUtf8("btn3_2"));

        gridLayout_6->addWidget(btn3_2, 1, 1, 1, 1);

        btn5_2 = new QPushButton(page4);
        btn5_2->setObjectName(QString::fromUtf8("btn5_2"));

        gridLayout_6->addWidget(btn5_2, 1, 2, 1, 1);

        stackedWidget->addWidget(page4);
        page5 = new QWidget();
        page5->setObjectName(QString::fromUtf8("page5"));
        gridLayout_3 = new QGridLayout(page5);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        label_6 = new QLabel(page5);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setFont(font);

        gridLayout_3->addWidget(label_6, 0, 0, 1, 1);

        btn4_2 = new QPushButton(page5);
        btn4_2->setObjectName(QString::fromUtf8("btn4_2"));

        gridLayout_3->addWidget(btn4_2, 1, 1, 1, 1);

        btn1_2 = new QPushButton(page5);
        btn1_2->setObjectName(QString::fromUtf8("btn1_2"));

        gridLayout_3->addWidget(btn1_2, 1, 2, 1, 1);

        stackedWidget->addWidget(page5);

        gridLayout->addWidget(stackedWidget, 0, 0, 1, 1);

        system_Ui->setCentralWidget(centralwidget);
        menubar = new QMenuBar(system_Ui);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 925, 22));
        menuFile = new QMenu(menubar);
        menuFile->setObjectName(QString::fromUtf8("menuFile"));
        menuEdit = new QMenu(menubar);
        menuEdit->setObjectName(QString::fromUtf8("menuEdit"));
        menuView = new QMenu(menubar);
        menuView->setObjectName(QString::fromUtf8("menuView"));
        menuLanguage = new QMenu(menubar);
        menuLanguage->setObjectName(QString::fromUtf8("menuLanguage"));
        menuHelp = new QMenu(menubar);
        menuHelp->setObjectName(QString::fromUtf8("menuHelp"));
        system_Ui->setMenuBar(menubar);
        statusbar = new QStatusBar(system_Ui);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        system_Ui->setStatusBar(statusbar);

        menubar->addAction(menuFile->menuAction());
        menubar->addAction(menuEdit->menuAction());
        menubar->addAction(menuView->menuAction());
        menubar->addAction(menuLanguage->menuAction());
        menubar->addAction(menuHelp->menuAction());
        menuFile->addAction(action_New_Project);
        menuFile->addAction(action_Open_Project);
        menuFile->addSeparator();
        menuFile->addAction(action_Save);
        menuFile->addAction(action_Save_As);
        menuFile->addAction(action_Close);
        menuFile->addSeparator();
        menuFile->addAction(actionImport);
        menuFile->addSeparator();
        menuFile->addAction(action_Exit);
        menuEdit->addAction(action_Undo);
        menuEdit->addAction(action_Redo);
        menuEdit->addSeparator();
        menuEdit->addAction(action_Cut);
        menuEdit->addAction(action_Copy);
        menuEdit->addAction(action_Paste);
        menuEdit->addAction(action_Clear);

        retranslateUi(system_Ui);

        stackedWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(system_Ui);
    } // setupUi

    void retranslateUi(QMainWindow *system_Ui)
    {
        system_Ui->setWindowTitle(QCoreApplication::translate("system_Ui", "RTI Builder", nullptr));
        action_New_Project->setText(QCoreApplication::translate("system_Ui", "New", nullptr));
#if QT_CONFIG(shortcut)
        action_New_Project->setShortcut(QCoreApplication::translate("system_Ui", "Ctrl+N", nullptr));
#endif // QT_CONFIG(shortcut)
        action_Open_Project->setText(QCoreApplication::translate("system_Ui", "Open ", nullptr));
#if QT_CONFIG(shortcut)
        action_Open_Project->setShortcut(QCoreApplication::translate("system_Ui", "Ctrl+O", nullptr));
#endif // QT_CONFIG(shortcut)
        action_Save->setText(QCoreApplication::translate("system_Ui", "Save", nullptr));
#if QT_CONFIG(shortcut)
        action_Save->setShortcut(QCoreApplication::translate("system_Ui", "Ctrl+S", nullptr));
#endif // QT_CONFIG(shortcut)
        action_Save_As->setText(QCoreApplication::translate("system_Ui", "Save As", nullptr));
#if QT_CONFIG(shortcut)
        action_Save_As->setShortcut(QCoreApplication::translate("system_Ui", "Ctrl+Shift+S", nullptr));
#endif // QT_CONFIG(shortcut)
        action_Close->setText(QCoreApplication::translate("system_Ui", "Close", nullptr));
        action_Exit->setText(QCoreApplication::translate("system_Ui", "Exit", nullptr));
#if QT_CONFIG(shortcut)
        action_Exit->setShortcut(QCoreApplication::translate("system_Ui", "Ctrl+Shift+X", nullptr));
#endif // QT_CONFIG(shortcut)
        action_Undo->setText(QCoreApplication::translate("system_Ui", "Undo", nullptr));
#if QT_CONFIG(shortcut)
        action_Undo->setShortcut(QCoreApplication::translate("system_Ui", "Ctrl+Z", nullptr));
#endif // QT_CONFIG(shortcut)
        action_Redo->setText(QCoreApplication::translate("system_Ui", "Redo", nullptr));
#if QT_CONFIG(shortcut)
        action_Redo->setShortcut(QCoreApplication::translate("system_Ui", "Ctrl+Y", nullptr));
#endif // QT_CONFIG(shortcut)
        action_Cut->setText(QCoreApplication::translate("system_Ui", "Cut", nullptr));
#if QT_CONFIG(shortcut)
        action_Cut->setShortcut(QCoreApplication::translate("system_Ui", "Ctrl+X", nullptr));
#endif // QT_CONFIG(shortcut)
        action_Copy->setText(QCoreApplication::translate("system_Ui", "Copy", nullptr));
#if QT_CONFIG(shortcut)
        action_Copy->setShortcut(QCoreApplication::translate("system_Ui", "Ctrl+C", nullptr));
#endif // QT_CONFIG(shortcut)
        action_Paste->setText(QCoreApplication::translate("system_Ui", "Paste", nullptr));
#if QT_CONFIG(shortcut)
        action_Paste->setShortcut(QCoreApplication::translate("system_Ui", "Ctrl+V", nullptr));
#endif // QT_CONFIG(shortcut)
        action_Clear->setText(QCoreApplication::translate("system_Ui", "Clear", nullptr));
#if QT_CONFIG(shortcut)
        action_Clear->setShortcut(QCoreApplication::translate("system_Ui", "Ctrl+Shift+C", nullptr));
#endif // QT_CONFIG(shortcut)
        actionImport->setText(QCoreApplication::translate("system_Ui", "Import", nullptr));
        actionExport->setText(QCoreApplication::translate("system_Ui", "Export", nullptr));
        image_Preview->setText(QString());
        import_btn->setText(QCoreApplication::translate("system_Ui", "Import", nullptr));
        delete_Btn->setText(QCoreApplication::translate("system_Ui", "Delete", nullptr));
        image_Management_Btn->setText(QCoreApplication::translate("system_Ui", "Image Management", nullptr));
        marble_Detection_Btn->setText(QCoreApplication::translate("system_Ui", "Marble Detection", nullptr));
        export_2->setText(QCoreApplication::translate("system_Ui", "Export", nullptr));
        label_3->setText(QCoreApplication::translate("system_Ui", "PAGE 2", nullptr));
        btn1->setText(QCoreApplication::translate("system_Ui", "< Prev", nullptr));
        btn3->setText(QCoreApplication::translate("system_Ui", "Next >", nullptr));
        label_4->setText(QCoreApplication::translate("system_Ui", "PAGE 3", nullptr));
        btn2_2->setText(QCoreApplication::translate("system_Ui", "< Prev", nullptr));
        btn4->setText(QCoreApplication::translate("system_Ui", "Next >", nullptr));
        label_5->setText(QCoreApplication::translate("system_Ui", "PAGE 4", nullptr));
        btn3_2->setText(QCoreApplication::translate("system_Ui", "< Prev", nullptr));
        btn5_2->setText(QCoreApplication::translate("system_Ui", "Next >", nullptr));
        label_6->setText(QCoreApplication::translate("system_Ui", "PAGE 5", nullptr));
        btn4_2->setText(QCoreApplication::translate("system_Ui", "< Prev", nullptr));
        btn1_2->setText(QCoreApplication::translate("system_Ui", "Next >", nullptr));
        menuFile->setTitle(QCoreApplication::translate("system_Ui", "Project", nullptr));
        menuEdit->setTitle(QCoreApplication::translate("system_Ui", "Edit", nullptr));
        menuView->setTitle(QCoreApplication::translate("system_Ui", "View", nullptr));
        menuLanguage->setTitle(QCoreApplication::translate("system_Ui", "Language", nullptr));
        menuHelp->setTitle(QCoreApplication::translate("system_Ui", "Help", nullptr));
    } // retranslateUi

};

namespace Ui {
    class system_Ui: public Ui_system_Ui {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SYSTEM_UI_H
