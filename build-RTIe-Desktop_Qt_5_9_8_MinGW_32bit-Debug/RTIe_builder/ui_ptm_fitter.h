/********************************************************************************
** Form generated from reading UI file 'ptm_fitter.ui'
**
** Created by: Qt User Interface Compiler version 5.9.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PTM_FITTER_H
#define UI_PTM_FITTER_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ptm_fitter
{
public:
    QWidget *centralwidget;
    QPushButton *pushButton;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QLabel *label_7;
    QPushButton *pushButton_2;
    QRadioButton *radioButton;
    QRadioButton *radioButton_2;
    QTextBrowser *textBrowser;
    QLabel *label_8;
    QLineEdit *lineEdit;
    QPushButton *pushButton_3;
    QLabel *label_9;
    QLabel *label_10;
    QLabel *output_File_Name;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *ptm_fitter)
    {
        if (ptm_fitter->objectName().isEmpty())
            ptm_fitter->setObjectName(QStringLiteral("ptm_fitter"));
        ptm_fitter->resize(800, 600);
        centralwidget = new QWidget(ptm_fitter);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(580, 490, 93, 28));
        label = new QLabel(centralwidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(30, 30, 56, 16));
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(30, 90, 141, 16));
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(30, 260, 91, 16));
        label_4 = new QLabel(centralwidget);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(30, 120, 71, 16));
        label_5 = new QLabel(centralwidget);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(30, 150, 56, 16));
        label_6 = new QLabel(centralwidget);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(30, 180, 56, 16));
        label_7 = new QLabel(centralwidget);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(30, 230, 111, 16));
        pushButton_2 = new QPushButton(centralwidget);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setEnabled(true);
        pushButton_2->setGeometry(QRect(690, 490, 93, 28));
        radioButton = new QRadioButton(centralwidget);
        radioButton->setObjectName(QStringLiteral("radioButton"));
        radioButton->setGeometry(QRect(40, 50, 97, 20));
        radioButton_2 = new QRadioButton(centralwidget);
        radioButton_2->setObjectName(QStringLiteral("radioButton_2"));
        radioButton_2->setEnabled(false);
        radioButton_2->setGeometry(QRect(170, 50, 97, 20));
        textBrowser = new QTextBrowser(centralwidget);
        textBrowser->setObjectName(QStringLiteral("textBrowser"));
        textBrowser->setGeometry(QRect(530, 30, 256, 371));
        label_8 = new QLabel(centralwidget);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setGeometry(QRect(530, 10, 131, 16));
        lineEdit = new QLineEdit(centralwidget);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setGeometry(QRect(180, 90, 211, 21));
        pushButton_3 = new QPushButton(centralwidget);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        pushButton_3->setGeometry(QRect(410, 90, 51, 28));
        label_9 = new QLabel(centralwidget);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setGeometry(QRect(90, 150, 56, 16));
        label_10 = new QLabel(centralwidget);
        label_10->setObjectName(QStringLiteral("label_10"));
        label_10->setGeometry(QRect(90, 180, 56, 16));
        output_File_Name = new QLabel(centralwidget);
        output_File_Name->setObjectName(QStringLiteral("output_File_Name"));
        output_File_Name->setGeometry(QRect(160, 230, 56, 16));
        output_File_Name->setLineWidth(8);
        ptm_fitter->setCentralWidget(centralwidget);
        menubar = new QMenuBar(ptm_fitter);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 26));
        ptm_fitter->setMenuBar(menubar);
        statusbar = new QStatusBar(ptm_fitter);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        ptm_fitter->setStatusBar(statusbar);

        retranslateUi(ptm_fitter);

        QMetaObject::connectSlotsByName(ptm_fitter);
    } // setupUi

    void retranslateUi(QMainWindow *ptm_fitter)
    {
        ptm_fitter->setWindowTitle(QApplication::translate("ptm_fitter", "ptm_fitter", Q_NULLPTR));
        pushButton->setText(QApplication::translate("ptm_fitter", "Generate", Q_NULLPTR));
        label->setText(QApplication::translate("ptm_fitter", "Data", Q_NULLPTR));
        label_2->setText(QApplication::translate("ptm_fitter", "PTM FITTER Location:", Q_NULLPTR));
        label_3->setText(QApplication::translate("ptm_fitter", "Select Sphere", Q_NULLPTR));
        label_4->setText(QApplication::translate("ptm_fitter", "Actual Size:", Q_NULLPTR));
        label_5->setText(QApplication::translate("ptm_fitter", "Width:", Q_NULLPTR));
        label_6->setText(QApplication::translate("ptm_fitter", "Height", Q_NULLPTR));
        label_7->setText(QApplication::translate("ptm_fitter", "OutputFile Name:", Q_NULLPTR));
        pushButton_2->setText(QApplication::translate("ptm_fitter", "Cancel", Q_NULLPTR));
        radioButton->setText(QApplication::translate("ptm_fitter", "PTM FITTER", Q_NULLPTR));
        radioButton_2->setText(QApplication::translate("ptm_fitter", "HSH FITTER", Q_NULLPTR));
        textBrowser->setHtml(QApplication::translate("ptm_fitter", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:7.8pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'MS Shell Dlg 2';\">Example Image:</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'MS Shell Dlg 2';\">-&gt; W: 1234</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'MS Shell Dlg 2';\">-&gt;H: 345</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; mar"
                        "gin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'MS Shell Dlg 2';\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'MS Shell Dlg 2';\">Parameters Read Sucessfully</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'MS Shell Dlg 2';\">----------------------------------</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'MS Shell Dlg 2';\">PTM Matrix: </span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'MS Shell Dlg 2';\">-&gt; Rows - 4</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; t"
                        "ext-indent:0px;\"><span style=\" font-family:'MS Shell Dlg 2';\">-&gt; Columns - 32</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'MS Shell Dlg 2';\">-&gt; Number of Threads - 4</span></p></body></html>", Q_NULLPTR));
        label_8->setText(QApplication::translate("ptm_fitter", "FITTER Information", Q_NULLPTR));
        pushButton_3->setText(QApplication::translate("ptm_fitter", "...", Q_NULLPTR));
        label_9->setText(QApplication::translate("ptm_fitter", "1234", Q_NULLPTR));
        label_10->setText(QApplication::translate("ptm_fitter", "123", Q_NULLPTR));
        output_File_Name->setText(QApplication::translate("ptm_fitter", "prev", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class ptm_fitter: public Ui_ptm_fitter {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PTM_FITTER_H
