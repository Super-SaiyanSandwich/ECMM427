/********************************************************************************
** Form generated from reading UI file 'stackedexample.ui'
**
** Created by: Qt User Interface Compiler version 5.14.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_STACKEDEXAMPLE_H
#define UI_STACKEDEXAMPLE_H

#include <QtCore/QVariant>
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

class Ui_stackedExample
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
    QWidget *centralwidget;
    QStackedWidget *stackedWidget;
    QWidget *page;
    QGridLayout *gridLayout_8;
    QGridLayout *gridLayout_2;
    QLabel *label;
    QListWidget *listWidget;
    QHBoxLayout *horizontalLayout_6;
    QPushButton *btn_page5;
    QPushButton *btn_page2;
    QWidget *page_2;
    QGridLayout *gridLayout_3;
    QLabel *label_2;
    QGridLayout *gridLayout_4;
    QPushButton *btn_page1;
    QPushButton *btn_page3;
    QListWidget *listWidget_4;
    QWidget *page_3;
    QGridLayout *gridLayout_7;
    QLabel *label_3;
    QHBoxLayout *horizontalLayout;
    QPushButton *btn_page2_2;
    QPushButton *btn_page4;
    QListWidget *listWidget_2;
    QWidget *page_4;
    QGridLayout *gridLayout_5;
    QLabel *label_4;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *btn_page3_2;
    QPushButton *btn_page5_2;
    QListWidget *listWidget_3;
    QWidget *page_5;
    QGridLayout *gridLayout_6;
    QLabel *label_5;
    QHBoxLayout *horizontalLayout_3;
    QPushButton *btn_page4_2;
    QPushButton *btn_page1_2;
    QMenuBar *menubar;
    QMenu *menu1;
    QMenu *menu2;
    QMenu *menu3;
    QMenu *menu4;
    QMenu *menuHelp;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *stackedExample)
    {
        if (stackedExample->objectName().isEmpty())
            stackedExample->setObjectName(QString::fromUtf8("stackedExample"));
        stackedExample->resize(936, 626);
        action_New_Project = new QAction(stackedExample);
        action_New_Project->setObjectName(QString::fromUtf8("action_New_Project"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/rec/img/new.png"), QSize(), QIcon::Normal, QIcon::Off);
        action_New_Project->setIcon(icon);
        action_Open_Project = new QAction(stackedExample);
        action_Open_Project->setObjectName(QString::fromUtf8("action_Open_Project"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/rec/img/open.png"), QSize(), QIcon::Normal, QIcon::Off);
        action_Open_Project->setIcon(icon1);
        action_Save = new QAction(stackedExample);
        action_Save->setObjectName(QString::fromUtf8("action_Save"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/rec/img/save.png"), QSize(), QIcon::Normal, QIcon::Off);
        action_Save->setIcon(icon2);
        action_Save_As = new QAction(stackedExample);
        action_Save_As->setObjectName(QString::fromUtf8("action_Save_As"));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/rec/img/save_as.png"), QSize(), QIcon::Normal, QIcon::Off);
        action_Save_As->setIcon(icon3);
        action_Close = new QAction(stackedExample);
        action_Close->setObjectName(QString::fromUtf8("action_Close"));
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/rec/img/close.png"), QSize(), QIcon::Normal, QIcon::Off);
        action_Close->setIcon(icon4);
        action_Exit = new QAction(stackedExample);
        action_Exit->setObjectName(QString::fromUtf8("action_Exit"));
        QIcon icon5;
        icon5.addFile(QString::fromUtf8(":/rec/img/exit.png"), QSize(), QIcon::Normal, QIcon::Off);
        action_Exit->setIcon(icon5);
        action_Undo = new QAction(stackedExample);
        action_Undo->setObjectName(QString::fromUtf8("action_Undo"));
        QIcon icon6;
        icon6.addFile(QString::fromUtf8(":/rec/img/undo.png"), QSize(), QIcon::Normal, QIcon::Off);
        action_Undo->setIcon(icon6);
        action_Redo = new QAction(stackedExample);
        action_Redo->setObjectName(QString::fromUtf8("action_Redo"));
        QIcon icon7;
        icon7.addFile(QString::fromUtf8(":/rec/img/redo.png"), QSize(), QIcon::Normal, QIcon::Off);
        action_Redo->setIcon(icon7);
        action_Cut = new QAction(stackedExample);
        action_Cut->setObjectName(QString::fromUtf8("action_Cut"));
        QIcon icon8;
        icon8.addFile(QString::fromUtf8(":/rec/img/cut.png"), QSize(), QIcon::Normal, QIcon::Off);
        action_Cut->setIcon(icon8);
        action_Copy = new QAction(stackedExample);
        action_Copy->setObjectName(QString::fromUtf8("action_Copy"));
        QIcon icon9;
        icon9.addFile(QString::fromUtf8(":/rec/img/copy.png"), QSize(), QIcon::Normal, QIcon::Off);
        action_Copy->setIcon(icon9);
        action_Paste = new QAction(stackedExample);
        action_Paste->setObjectName(QString::fromUtf8("action_Paste"));
        QIcon icon10;
        icon10.addFile(QString::fromUtf8(":/rec/img/paste.png"), QSize(), QIcon::Normal, QIcon::Off);
        action_Paste->setIcon(icon10);
        action_Clear = new QAction(stackedExample);
        action_Clear->setObjectName(QString::fromUtf8("action_Clear"));
        centralwidget = new QWidget(stackedExample);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        stackedWidget = new QStackedWidget(centralwidget);
        stackedWidget->setObjectName(QString::fromUtf8("stackedWidget"));
        stackedWidget->setGeometry(QRect(0, 0, 931, 601));
        page = new QWidget();
        page->setObjectName(QString::fromUtf8("page"));
        gridLayout_8 = new QGridLayout(page);
        gridLayout_8->setObjectName(QString::fromUtf8("gridLayout_8"));
        gridLayout_2 = new QGridLayout();
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        label = new QLabel(page);
        label->setObjectName(QString::fromUtf8("label"));
        QFont font;
        font.setPointSize(48);
        font.setBold(true);
        font.setWeight(75);
        label->setFont(font);

        gridLayout_2->addWidget(label, 0, 0, 1, 1);

        listWidget = new QListWidget(page);
        listWidget->setObjectName(QString::fromUtf8("listWidget"));

        gridLayout_2->addWidget(listWidget, 0, 1, 1, 1);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        btn_page5 = new QPushButton(page);
        btn_page5->setObjectName(QString::fromUtf8("btn_page5"));

        horizontalLayout_6->addWidget(btn_page5);

        btn_page2 = new QPushButton(page);
        btn_page2->setObjectName(QString::fromUtf8("btn_page2"));

        horizontalLayout_6->addWidget(btn_page2);


        gridLayout_2->addLayout(horizontalLayout_6, 1, 1, 1, 1);


        gridLayout_8->addLayout(gridLayout_2, 0, 0, 2, 2);

        stackedWidget->addWidget(page);
        page_2 = new QWidget();
        page_2->setObjectName(QString::fromUtf8("page_2"));
        gridLayout_3 = new QGridLayout(page_2);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        label_2 = new QLabel(page_2);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setFont(font);

        gridLayout_3->addWidget(label_2, 0, 0, 1, 1);

        gridLayout_4 = new QGridLayout();
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        btn_page1 = new QPushButton(page_2);
        btn_page1->setObjectName(QString::fromUtf8("btn_page1"));

        gridLayout_4->addWidget(btn_page1, 0, 0, 1, 1);

        btn_page3 = new QPushButton(page_2);
        btn_page3->setObjectName(QString::fromUtf8("btn_page3"));

        gridLayout_4->addWidget(btn_page3, 0, 1, 1, 1);


        gridLayout_3->addLayout(gridLayout_4, 1, 1, 1, 1);

        listWidget_4 = new QListWidget(page_2);
        listWidget_4->setObjectName(QString::fromUtf8("listWidget_4"));

        gridLayout_3->addWidget(listWidget_4, 0, 1, 1, 1);

        stackedWidget->addWidget(page_2);
        page_3 = new QWidget();
        page_3->setObjectName(QString::fromUtf8("page_3"));
        gridLayout_7 = new QGridLayout(page_3);
        gridLayout_7->setObjectName(QString::fromUtf8("gridLayout_7"));
        label_3 = new QLabel(page_3);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setFont(font);

        gridLayout_7->addWidget(label_3, 0, 0, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        btn_page2_2 = new QPushButton(page_3);
        btn_page2_2->setObjectName(QString::fromUtf8("btn_page2_2"));

        horizontalLayout->addWidget(btn_page2_2);

        btn_page4 = new QPushButton(page_3);
        btn_page4->setObjectName(QString::fromUtf8("btn_page4"));

        horizontalLayout->addWidget(btn_page4);


        gridLayout_7->addLayout(horizontalLayout, 1, 1, 1, 1);

        listWidget_2 = new QListWidget(page_3);
        listWidget_2->setObjectName(QString::fromUtf8("listWidget_2"));

        gridLayout_7->addWidget(listWidget_2, 0, 1, 1, 1);

        stackedWidget->addWidget(page_3);
        page_4 = new QWidget();
        page_4->setObjectName(QString::fromUtf8("page_4"));
        gridLayout_5 = new QGridLayout(page_4);
        gridLayout_5->setObjectName(QString::fromUtf8("gridLayout_5"));
        label_4 = new QLabel(page_4);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setFont(font);

        gridLayout_5->addWidget(label_4, 0, 0, 1, 1);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        btn_page3_2 = new QPushButton(page_4);
        btn_page3_2->setObjectName(QString::fromUtf8("btn_page3_2"));

        horizontalLayout_2->addWidget(btn_page3_2);

        btn_page5_2 = new QPushButton(page_4);
        btn_page5_2->setObjectName(QString::fromUtf8("btn_page5_2"));

        horizontalLayout_2->addWidget(btn_page5_2);


        gridLayout_5->addLayout(horizontalLayout_2, 1, 1, 1, 1);

        listWidget_3 = new QListWidget(page_4);
        listWidget_3->setObjectName(QString::fromUtf8("listWidget_3"));

        gridLayout_5->addWidget(listWidget_3, 0, 1, 1, 1);

        stackedWidget->addWidget(page_4);
        page_5 = new QWidget();
        page_5->setObjectName(QString::fromUtf8("page_5"));
        gridLayout_6 = new QGridLayout(page_5);
        gridLayout_6->setObjectName(QString::fromUtf8("gridLayout_6"));
        label_5 = new QLabel(page_5);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setFont(font);

        gridLayout_6->addWidget(label_5, 0, 0, 1, 1);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        btn_page4_2 = new QPushButton(page_5);
        btn_page4_2->setObjectName(QString::fromUtf8("btn_page4_2"));

        horizontalLayout_3->addWidget(btn_page4_2);

        btn_page1_2 = new QPushButton(page_5);
        btn_page1_2->setObjectName(QString::fromUtf8("btn_page1_2"));

        horizontalLayout_3->addWidget(btn_page1_2);


        gridLayout_6->addLayout(horizontalLayout_3, 1, 1, 1, 1);

        stackedWidget->addWidget(page_5);
        stackedExample->setCentralWidget(centralwidget);
        menubar = new QMenuBar(stackedExample);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 936, 22));
        menu1 = new QMenu(menubar);
        menu1->setObjectName(QString::fromUtf8("menu1"));
        menu2 = new QMenu(menubar);
        menu2->setObjectName(QString::fromUtf8("menu2"));
        menu3 = new QMenu(menubar);
        menu3->setObjectName(QString::fromUtf8("menu3"));
        menu4 = new QMenu(menubar);
        menu4->setObjectName(QString::fromUtf8("menu4"));
        menuHelp = new QMenu(menubar);
        menuHelp->setObjectName(QString::fromUtf8("menuHelp"));
        stackedExample->setMenuBar(menubar);
        statusBar = new QStatusBar(stackedExample);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        stackedExample->setStatusBar(statusBar);

        menubar->addAction(menu1->menuAction());
        menubar->addAction(menu2->menuAction());
        menubar->addAction(menu3->menuAction());
        menubar->addAction(menu4->menuAction());
        menubar->addAction(menuHelp->menuAction());
        menu1->addAction(action_New_Project);
        menu1->addAction(action_Open_Project);
        menu1->addSeparator();
        menu1->addAction(action_Save);
        menu1->addAction(action_Save_As);
        menu1->addAction(action_Close);
        menu1->addSeparator();
        menu1->addAction(action_Exit);
        menu2->addAction(action_Undo);
        menu2->addAction(action_Redo);
        menu2->addSeparator();
        menu2->addAction(action_Cut);
        menu2->addAction(action_Copy);
        menu2->addAction(action_Paste);
        menu2->addAction(action_Clear);

        retranslateUi(stackedExample);

        stackedWidget->setCurrentIndex(3);


        QMetaObject::connectSlotsByName(stackedExample);
    } // setupUi

    void retranslateUi(QMainWindow *stackedExample)
    {
        stackedExample->setWindowTitle(QCoreApplication::translate("stackedExample", "stackedExample", nullptr));
        action_New_Project->setText(QCoreApplication::translate("stackedExample", "New Project", nullptr));
#if QT_CONFIG(shortcut)
        action_New_Project->setShortcut(QCoreApplication::translate("stackedExample", "Ctrl+N", nullptr));
#endif // QT_CONFIG(shortcut)
        action_Open_Project->setText(QCoreApplication::translate("stackedExample", "Open Project", nullptr));
#if QT_CONFIG(shortcut)
        action_Open_Project->setShortcut(QCoreApplication::translate("stackedExample", "Ctrl+O", nullptr));
#endif // QT_CONFIG(shortcut)
        action_Save->setText(QCoreApplication::translate("stackedExample", "Save", nullptr));
#if QT_CONFIG(shortcut)
        action_Save->setShortcut(QCoreApplication::translate("stackedExample", "Ctrl+S", nullptr));
#endif // QT_CONFIG(shortcut)
        action_Save_As->setText(QCoreApplication::translate("stackedExample", "Save As", nullptr));
#if QT_CONFIG(shortcut)
        action_Save_As->setShortcut(QCoreApplication::translate("stackedExample", "Ctrl+Shift+S", nullptr));
#endif // QT_CONFIG(shortcut)
        action_Close->setText(QCoreApplication::translate("stackedExample", "Close", nullptr));
        action_Exit->setText(QCoreApplication::translate("stackedExample", "Exit", nullptr));
#if QT_CONFIG(shortcut)
        action_Exit->setShortcut(QCoreApplication::translate("stackedExample", "Ctrl+Shift+X", nullptr));
#endif // QT_CONFIG(shortcut)
        action_Undo->setText(QCoreApplication::translate("stackedExample", "Undo", nullptr));
#if QT_CONFIG(shortcut)
        action_Undo->setShortcut(QCoreApplication::translate("stackedExample", "Ctrl+Z", nullptr));
#endif // QT_CONFIG(shortcut)
        action_Redo->setText(QCoreApplication::translate("stackedExample", "Redo", nullptr));
#if QT_CONFIG(shortcut)
        action_Redo->setShortcut(QCoreApplication::translate("stackedExample", "Ctrl+Y", nullptr));
#endif // QT_CONFIG(shortcut)
        action_Cut->setText(QCoreApplication::translate("stackedExample", "Cut", nullptr));
#if QT_CONFIG(shortcut)
        action_Cut->setShortcut(QCoreApplication::translate("stackedExample", "Ctrl+X", nullptr));
#endif // QT_CONFIG(shortcut)
        action_Copy->setText(QCoreApplication::translate("stackedExample", "Copy", nullptr));
#if QT_CONFIG(shortcut)
        action_Copy->setShortcut(QCoreApplication::translate("stackedExample", "Ctrl+C", nullptr));
#endif // QT_CONFIG(shortcut)
        action_Paste->setText(QCoreApplication::translate("stackedExample", "Paste", nullptr));
#if QT_CONFIG(shortcut)
        action_Paste->setShortcut(QCoreApplication::translate("stackedExample", "Ctrl+V", nullptr));
#endif // QT_CONFIG(shortcut)
        action_Clear->setText(QCoreApplication::translate("stackedExample", "Clear", nullptr));
#if QT_CONFIG(shortcut)
        action_Clear->setShortcut(QCoreApplication::translate("stackedExample", "Ctrl+Shift+C", nullptr));
#endif // QT_CONFIG(shortcut)
        label->setText(QCoreApplication::translate("stackedExample", "Page 1", nullptr));
        btn_page5->setText(QCoreApplication::translate("stackedExample", "< Back", nullptr));
        btn_page2->setText(QCoreApplication::translate("stackedExample", "Next >", nullptr));
        label_2->setText(QCoreApplication::translate("stackedExample", "Page 2", nullptr));
        btn_page1->setText(QCoreApplication::translate("stackedExample", "< Back", nullptr));
        btn_page3->setText(QCoreApplication::translate("stackedExample", "Next >", nullptr));
        label_3->setText(QCoreApplication::translate("stackedExample", "Page 3", nullptr));
        btn_page2_2->setText(QCoreApplication::translate("stackedExample", "< Back", nullptr));
        btn_page4->setText(QCoreApplication::translate("stackedExample", "Next >", nullptr));
        label_4->setText(QCoreApplication::translate("stackedExample", "Page 4", nullptr));
        btn_page3_2->setText(QCoreApplication::translate("stackedExample", "< Back", nullptr));
        btn_page5_2->setText(QCoreApplication::translate("stackedExample", "Next >", nullptr));
        label_5->setText(QCoreApplication::translate("stackedExample", "Page 5", nullptr));
        btn_page4_2->setText(QCoreApplication::translate("stackedExample", "< Back", nullptr));
        btn_page1_2->setText(QCoreApplication::translate("stackedExample", "Next >", nullptr));
        menu1->setTitle(QCoreApplication::translate("stackedExample", "File", nullptr));
        menu2->setTitle(QCoreApplication::translate("stackedExample", "Edit", nullptr));
        menu3->setTitle(QCoreApplication::translate("stackedExample", "View", nullptr));
        menu4->setTitle(QCoreApplication::translate("stackedExample", "Language", nullptr));
        menuHelp->setTitle(QCoreApplication::translate("stackedExample", "Help", nullptr));
    } // retranslateUi

};

namespace Ui {
    class stackedExample: public Ui_stackedExample {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_STACKEDEXAMPLE_H
