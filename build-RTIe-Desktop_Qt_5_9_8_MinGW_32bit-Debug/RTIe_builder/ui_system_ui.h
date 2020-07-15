/********************************************************************************
** Form generated from reading UI file 'system_ui.ui'
**
** Created by: Qt User Interface Compiler version 5.9.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SYSTEM_UI_H
#define UI_SYSTEM_UI_H

#include <QtCore/QLocale>
#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSplitter>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "crop_Widget.h"
#include "import_Widget.h"
#include "marble_widget.h"

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
    QVBoxLayout *verticalLayout_19;
    QStackedWidget *stackedWidget;
    QWidget *import_Page;
    QVBoxLayout *verticalLayout_4;
    import_Widget *system_import_widget;
    QWidget *widget_2;
    QVBoxLayout *verticalLayout_5;
    QHBoxLayout *horizontalLayout_9;
    QPushButton *image_Management_Btn;
    QPushButton *marble_Detection_Btn;
    QPushButton *remove_Marble_Btn;
    QPushButton *export_Btn;
    QWidget *marblePage;
    QVBoxLayout *verticalLayout_20;
    marble_Widget *system_marble_widget;
    QWidget *widget_6;
    QVBoxLayout *verticalLayout_6;
    QHBoxLayout *horizontalLayout_11;
    QPushButton *image_Management_Btn_2;
    QPushButton *marble_Detection_Btn_2;
    QPushButton *remove_Marble_Btn_2;
    QPushButton *export_Btn_2;
    QWidget *page3;
    QVBoxLayout *verticalLayout_13;
    crop_Widget *system_crop_widget;
    QWidget *widget_4;
    QHBoxLayout *horizontalLayout_2;
    QHBoxLayout *horizontalLayout_7;
    QPushButton *image_Management_Btn_3;
    QPushButton *marble_Detection_Btn_3;
    QPushButton *remove_Marble_Btn_3;
    QPushButton *export_Btn_3;
    QWidget *page4;
    QVBoxLayout *verticalLayout_18;
    QHBoxLayout *horizontalLayout_5;
    QVBoxLayout *verticalLayout_16;
    QLabel *label_18;
    QLabel *image_Name;
    QLabel *image_Label_3;
    QVBoxLayout *verticalLayout_15;
    QHBoxLayout *cycle_Layout;
    QPushButton *previous_Image_Btn;
    QPushButton *next_Image_Btn;
    QSpacerItem *verticalSpacer_3;
    QVBoxLayout *verticalLayout_14;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_16;
    QHBoxLayout *fitter_Type_Layout;
    QRadioButton *ptm_Fitter;
    QRadioButton *hsh_Fitter;
    QSpacerItem *horizontalSpacer_2;
    QSpacerItem *verticalSpacer_2;
    QVBoxLayout *options_Layout;
    QVBoxLayout *locations_Layout;
    QHBoxLayout *lp_Layout;
    QLabel *label_26;
    QLabel *temp;
    QPushButton *lp_Location;
    QHBoxLayout *fitter_Location_layout;
    QLabel *label_15;
    QLabel *fitter_Placeholder;
    QPushButton *fitter_Location;
    QHBoxLayout *output_Layout;
    QLabel *label_20;
    QLabel *output_Placeholder;
    QPushButton *output_Location;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *lower_Options;
    QGridLayout *size_Layout;
    QLabel *label_22;
    QLabel *label_24;
    QLabel *label_25;
    QCheckBox *resize_Checkbox;
    QLineEdit *width_Measurement;
    QLineEdit *height_Measurement;
    QSpacerItem *horizontalSpacer;
    QVBoxLayout *option_Layout;
    QHBoxLayout *hsh_Layout;
    QLabel *label_27;
    QComboBox *hsh_Order;
    QHBoxLayout *ptm_layout;
    QLabel *label_38;
    QComboBox *ptm_Luminance;
    QSpacerItem *horizontalSpacer_6;
    QVBoxLayout *verticalLayout_17;
    QSplitter *splitter_2;
    QLabel *label_14;
    QTextBrowser *fitter_Info;
    QProgressBar *progress_Bar;
    QLabel *status;
    QHBoxLayout *generate_and_cancel;
    QSpacerItem *horizontalSpacer_3;
    QPushButton *generate_Btn;
    QSpacerItem *horizontalSpacer_5;
    QPushButton *cancel_fitter_Btn;
    QSpacerItem *horizontalSpacer_4;
    QWidget *widget_5;
    QHBoxLayout *horizontalLayout_8;
    QHBoxLayout *horizontalLayout_10;
    QPushButton *image_Management_Btn_4;
    QPushButton *marble_Detection_Btn_4;
    QPushButton *remove_Marble_Btn_4;
    QPushButton *export_Btn_4;
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
        verticalLayout_19 = new QVBoxLayout(centralwidget);
        verticalLayout_19->setObjectName(QStringLiteral("verticalLayout_19"));
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
        import_Page = new QWidget();
        import_Page->setObjectName(QStringLiteral("import_Page"));
        sizePolicy.setHeightForWidth(import_Page->sizePolicy().hasHeightForWidth());
        import_Page->setSizePolicy(sizePolicy);
        verticalLayout_4 = new QVBoxLayout(import_Page);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        system_import_widget = new import_Widget(import_Page);
        system_import_widget->setObjectName(QStringLiteral("system_import_widget"));

        verticalLayout_4->addWidget(system_import_widget);

        widget_2 = new QWidget(import_Page);
        widget_2->setObjectName(QStringLiteral("widget_2"));
        QSizePolicy sizePolicy3(QSizePolicy::MinimumExpanding, QSizePolicy::Expanding);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(widget_2->sizePolicy().hasHeightForWidth());
        widget_2->setSizePolicy(sizePolicy3);
        widget_2->setMaximumSize(QSize(16777215, 60));
        verticalLayout_5 = new QVBoxLayout(widget_2);
        verticalLayout_5->setObjectName(QStringLiteral("verticalLayout_5"));
        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setObjectName(QStringLiteral("horizontalLayout_9"));
        image_Management_Btn = new QPushButton(widget_2);
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

        marble_Detection_Btn = new QPushButton(widget_2);
        marble_Detection_Btn->setObjectName(QStringLiteral("marble_Detection_Btn"));
        sizePolicy4.setHeightForWidth(marble_Detection_Btn->sizePolicy().hasHeightForWidth());
        marble_Detection_Btn->setSizePolicy(sizePolicy4);

        horizontalLayout_9->addWidget(marble_Detection_Btn);

        remove_Marble_Btn = new QPushButton(widget_2);
        remove_Marble_Btn->setObjectName(QStringLiteral("remove_Marble_Btn"));
        sizePolicy4.setHeightForWidth(remove_Marble_Btn->sizePolicy().hasHeightForWidth());
        remove_Marble_Btn->setSizePolicy(sizePolicy4);

        horizontalLayout_9->addWidget(remove_Marble_Btn);

        export_Btn = new QPushButton(widget_2);
        export_Btn->setObjectName(QStringLiteral("export_Btn"));
        sizePolicy4.setHeightForWidth(export_Btn->sizePolicy().hasHeightForWidth());
        export_Btn->setSizePolicy(sizePolicy4);

        horizontalLayout_9->addWidget(export_Btn);


        verticalLayout_5->addLayout(horizontalLayout_9);


        verticalLayout_4->addWidget(widget_2);

        stackedWidget->addWidget(import_Page);
        marblePage = new QWidget();
        marblePage->setObjectName(QStringLiteral("marblePage"));
        sizePolicy.setHeightForWidth(marblePage->sizePolicy().hasHeightForWidth());
        marblePage->setSizePolicy(sizePolicy);
        verticalLayout_20 = new QVBoxLayout(marblePage);
        verticalLayout_20->setObjectName(QStringLiteral("verticalLayout_20"));
        system_marble_widget = new marble_Widget(marblePage);
        system_marble_widget->setObjectName(QStringLiteral("system_marble_widget"));
        sizePolicy.setHeightForWidth(system_marble_widget->sizePolicy().hasHeightForWidth());
        system_marble_widget->setSizePolicy(sizePolicy);

        verticalLayout_20->addWidget(system_marble_widget);

        widget_6 = new QWidget(marblePage);
        widget_6->setObjectName(QStringLiteral("widget_6"));
        QSizePolicy sizePolicy5(QSizePolicy::Preferred, QSizePolicy::Expanding);
        sizePolicy5.setHorizontalStretch(0);
        sizePolicy5.setVerticalStretch(0);
        sizePolicy5.setHeightForWidth(widget_6->sizePolicy().hasHeightForWidth());
        widget_6->setSizePolicy(sizePolicy5);
        widget_6->setMaximumSize(QSize(16777215, 60));
        verticalLayout_6 = new QVBoxLayout(widget_6);
        verticalLayout_6->setObjectName(QStringLiteral("verticalLayout_6"));
        horizontalLayout_11 = new QHBoxLayout();
        horizontalLayout_11->setObjectName(QStringLiteral("horizontalLayout_11"));
        image_Management_Btn_2 = new QPushButton(widget_6);
        image_Management_Btn_2->setObjectName(QStringLiteral("image_Management_Btn_2"));
        image_Management_Btn_2->setEnabled(false);
        sizePolicy4.setHeightForWidth(image_Management_Btn_2->sizePolicy().hasHeightForWidth());
        image_Management_Btn_2->setSizePolicy(sizePolicy4);
        image_Management_Btn_2->setCheckable(false);
        image_Management_Btn_2->setFlat(false);

        horizontalLayout_11->addWidget(image_Management_Btn_2);

        marble_Detection_Btn_2 = new QPushButton(widget_6);
        marble_Detection_Btn_2->setObjectName(QStringLiteral("marble_Detection_Btn_2"));
        marble_Detection_Btn_2->setEnabled(false);
        sizePolicy4.setHeightForWidth(marble_Detection_Btn_2->sizePolicy().hasHeightForWidth());
        marble_Detection_Btn_2->setSizePolicy(sizePolicy4);

        horizontalLayout_11->addWidget(marble_Detection_Btn_2);

        remove_Marble_Btn_2 = new QPushButton(widget_6);
        remove_Marble_Btn_2->setObjectName(QStringLiteral("remove_Marble_Btn_2"));
        sizePolicy4.setHeightForWidth(remove_Marble_Btn_2->sizePolicy().hasHeightForWidth());
        remove_Marble_Btn_2->setSizePolicy(sizePolicy4);

        horizontalLayout_11->addWidget(remove_Marble_Btn_2);

        export_Btn_2 = new QPushButton(widget_6);
        export_Btn_2->setObjectName(QStringLiteral("export_Btn_2"));
        sizePolicy4.setHeightForWidth(export_Btn_2->sizePolicy().hasHeightForWidth());
        export_Btn_2->setSizePolicy(sizePolicy4);

        horizontalLayout_11->addWidget(export_Btn_2);


        verticalLayout_6->addLayout(horizontalLayout_11);


        verticalLayout_20->addWidget(widget_6);

        stackedWidget->addWidget(marblePage);
        page3 = new QWidget();
        page3->setObjectName(QStringLiteral("page3"));
        sizePolicy.setHeightForWidth(page3->sizePolicy().hasHeightForWidth());
        page3->setSizePolicy(sizePolicy);
        verticalLayout_13 = new QVBoxLayout(page3);
        verticalLayout_13->setObjectName(QStringLiteral("verticalLayout_13"));
        system_crop_widget = new crop_Widget(page3);
        system_crop_widget->setObjectName(QStringLiteral("system_crop_widget"));

        verticalLayout_13->addWidget(system_crop_widget);

        widget_4 = new QWidget(page3);
        widget_4->setObjectName(QStringLiteral("widget_4"));
        sizePolicy5.setHeightForWidth(widget_4->sizePolicy().hasHeightForWidth());
        widget_4->setSizePolicy(sizePolicy5);
        widget_4->setMaximumSize(QSize(16777215, 60));
        horizontalLayout_2 = new QHBoxLayout(widget_4);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName(QStringLiteral("horizontalLayout_7"));
        horizontalLayout_7->setSizeConstraint(QLayout::SetMaximumSize);
        image_Management_Btn_3 = new QPushButton(widget_4);
        image_Management_Btn_3->setObjectName(QStringLiteral("image_Management_Btn_3"));
        image_Management_Btn_3->setEnabled(true);
        sizePolicy4.setHeightForWidth(image_Management_Btn_3->sizePolicy().hasHeightForWidth());
        image_Management_Btn_3->setSizePolicy(sizePolicy4);
        image_Management_Btn_3->setCheckable(false);
        image_Management_Btn_3->setFlat(false);

        horizontalLayout_7->addWidget(image_Management_Btn_3);

        marble_Detection_Btn_3 = new QPushButton(widget_4);
        marble_Detection_Btn_3->setObjectName(QStringLiteral("marble_Detection_Btn_3"));
        sizePolicy4.setHeightForWidth(marble_Detection_Btn_3->sizePolicy().hasHeightForWidth());
        marble_Detection_Btn_3->setSizePolicy(sizePolicy4);

        horizontalLayout_7->addWidget(marble_Detection_Btn_3);

        remove_Marble_Btn_3 = new QPushButton(widget_4);
        remove_Marble_Btn_3->setObjectName(QStringLiteral("remove_Marble_Btn_3"));
        remove_Marble_Btn_3->setEnabled(false);
        sizePolicy4.setHeightForWidth(remove_Marble_Btn_3->sizePolicy().hasHeightForWidth());
        remove_Marble_Btn_3->setSizePolicy(sizePolicy4);

        horizontalLayout_7->addWidget(remove_Marble_Btn_3);

        export_Btn_3 = new QPushButton(widget_4);
        export_Btn_3->setObjectName(QStringLiteral("export_Btn_3"));
        sizePolicy4.setHeightForWidth(export_Btn_3->sizePolicy().hasHeightForWidth());
        export_Btn_3->setSizePolicy(sizePolicy4);

        horizontalLayout_7->addWidget(export_Btn_3);


        horizontalLayout_2->addLayout(horizontalLayout_7);


        verticalLayout_13->addWidget(widget_4);

        stackedWidget->addWidget(page3);
        page4 = new QWidget();
        page4->setObjectName(QStringLiteral("page4"));
        sizePolicy.setHeightForWidth(page4->sizePolicy().hasHeightForWidth());
        page4->setSizePolicy(sizePolicy);
        verticalLayout_18 = new QVBoxLayout(page4);
        verticalLayout_18->setObjectName(QStringLiteral("verticalLayout_18"));
        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        verticalLayout_16 = new QVBoxLayout();
        verticalLayout_16->setObjectName(QStringLiteral("verticalLayout_16"));
        label_18 = new QLabel(page4);
        label_18->setObjectName(QStringLiteral("label_18"));
        sizePolicy4.setHeightForWidth(label_18->sizePolicy().hasHeightForWidth());
        label_18->setSizePolicy(sizePolicy4);
        QFont font;
        font.setFamily(QStringLiteral("MS Shell Dlg 2"));
        font.setPointSize(12);
        font.setBold(true);
        font.setItalic(false);
        font.setWeight(75);
        font.setStrikeOut(false);
        font.setKerning(true);
        label_18->setFont(font);

        verticalLayout_16->addWidget(label_18);

        image_Name = new QLabel(page4);
        image_Name->setObjectName(QStringLiteral("image_Name"));
        QFont font1;
        font1.setPointSize(12);
        font1.setBold(true);
        font1.setItalic(true);
        font1.setWeight(75);
        image_Name->setFont(font1);
        image_Name->setAlignment(Qt::AlignCenter);

        verticalLayout_16->addWidget(image_Name);

        image_Label_3 = new QLabel(page4);
        image_Label_3->setObjectName(QStringLiteral("image_Label_3"));
        sizePolicy.setHeightForWidth(image_Label_3->sizePolicy().hasHeightForWidth());
        image_Label_3->setSizePolicy(sizePolicy);
        image_Label_3->setMinimumSize(QSize(300, 300));
        image_Label_3->setMaximumSize(QSize(600, 600));
        image_Label_3->setFrameShape(QFrame::Box);
        image_Label_3->setFrameShadow(QFrame::Plain);
        image_Label_3->setLineWidth(5);
        image_Label_3->setScaledContents(true);
        image_Label_3->setAlignment(Qt::AlignCenter);

        verticalLayout_16->addWidget(image_Label_3);

        verticalLayout_15 = new QVBoxLayout();
        verticalLayout_15->setObjectName(QStringLiteral("verticalLayout_15"));
        cycle_Layout = new QHBoxLayout();
        cycle_Layout->setObjectName(QStringLiteral("cycle_Layout"));
        previous_Image_Btn = new QPushButton(page4);
        previous_Image_Btn->setObjectName(QStringLiteral("previous_Image_Btn"));
        sizePolicy4.setHeightForWidth(previous_Image_Btn->sizePolicy().hasHeightForWidth());
        previous_Image_Btn->setSizePolicy(sizePolicy4);

        cycle_Layout->addWidget(previous_Image_Btn);

        next_Image_Btn = new QPushButton(page4);
        next_Image_Btn->setObjectName(QStringLiteral("next_Image_Btn"));
        next_Image_Btn->setEnabled(true);
        sizePolicy4.setHeightForWidth(next_Image_Btn->sizePolicy().hasHeightForWidth());
        next_Image_Btn->setSizePolicy(sizePolicy4);

        cycle_Layout->addWidget(next_Image_Btn);


        verticalLayout_15->addLayout(cycle_Layout);

        verticalSpacer_3 = new QSpacerItem(20, 2, QSizePolicy::Minimum, QSizePolicy::MinimumExpanding);

        verticalLayout_15->addItem(verticalSpacer_3);

        verticalLayout_14 = new QVBoxLayout();
        verticalLayout_14->setObjectName(QStringLiteral("verticalLayout_14"));
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        label_16 = new QLabel(page4);
        label_16->setObjectName(QStringLiteral("label_16"));
        sizePolicy4.setHeightForWidth(label_16->sizePolicy().hasHeightForWidth());
        label_16->setSizePolicy(sizePolicy4);
        label_16->setFont(font);

        horizontalLayout_3->addWidget(label_16);

        fitter_Type_Layout = new QHBoxLayout();
        fitter_Type_Layout->setObjectName(QStringLiteral("fitter_Type_Layout"));
        ptm_Fitter = new QRadioButton(page4);
        ptm_Fitter->setObjectName(QStringLiteral("ptm_Fitter"));
        ptm_Fitter->setEnabled(true);
        sizePolicy4.setHeightForWidth(ptm_Fitter->sizePolicy().hasHeightForWidth());
        ptm_Fitter->setSizePolicy(sizePolicy4);
        ptm_Fitter->setCheckable(true);
        ptm_Fitter->setChecked(false);
        ptm_Fitter->setAutoExclusive(true);

        fitter_Type_Layout->addWidget(ptm_Fitter);

        hsh_Fitter = new QRadioButton(page4);
        hsh_Fitter->setObjectName(QStringLiteral("hsh_Fitter"));
        sizePolicy4.setHeightForWidth(hsh_Fitter->sizePolicy().hasHeightForWidth());
        hsh_Fitter->setSizePolicy(sizePolicy4);

        fitter_Type_Layout->addWidget(hsh_Fitter);


        horizontalLayout_3->addLayout(fitter_Type_Layout);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::MinimumExpanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_2);


        verticalLayout_14->addLayout(horizontalLayout_3);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::MinimumExpanding);

        verticalLayout_14->addItem(verticalSpacer_2);

        options_Layout = new QVBoxLayout();
        options_Layout->setObjectName(QStringLiteral("options_Layout"));
        locations_Layout = new QVBoxLayout();
        locations_Layout->setObjectName(QStringLiteral("locations_Layout"));
        lp_Layout = new QHBoxLayout();
        lp_Layout->setObjectName(QStringLiteral("lp_Layout"));
        label_26 = new QLabel(page4);
        label_26->setObjectName(QStringLiteral("label_26"));
        sizePolicy4.setHeightForWidth(label_26->sizePolicy().hasHeightForWidth());
        label_26->setSizePolicy(sizePolicy4);
        QFont font2;
        font2.setPointSize(9);
        font2.setBold(true);
        font2.setItalic(false);
        font2.setWeight(75);
        label_26->setFont(font2);

        lp_Layout->addWidget(label_26);

        temp = new QLabel(page4);
        temp->setObjectName(QStringLiteral("temp"));
        temp->setEnabled(true);
        sizePolicy4.setHeightForWidth(temp->sizePolicy().hasHeightForWidth());
        temp->setSizePolicy(sizePolicy4);
        temp->setMinimumSize(QSize(300, 0));
        QPalette palette;
        QBrush brush(QColor(0, 0, 0, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette.setBrush(QPalette::Active, QPalette::Text, brush);
        QBrush brush1(QColor(0, 0, 0, 128));
        brush1.setStyle(Qt::SolidPattern);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette.setBrush(QPalette::Active, QPalette::PlaceholderText, brush1);
#endif
        palette.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Text, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush1);
#endif
        QBrush brush2(QColor(255, 255, 255, 127));
        brush2.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Disabled, QPalette::WindowText, brush2);
        palette.setBrush(QPalette::Disabled, QPalette::Text, brush2);
        QBrush brush3(QColor(231, 231, 231, 128));
        brush3.setStyle(Qt::SolidPattern);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush3);
#endif
        temp->setPalette(palette);
        temp->setFrameShape(QFrame::Box);
        temp->setFrameShadow(QFrame::Plain);
        temp->setLineWidth(1);
        temp->setScaledContents(false);
        temp->setWordWrap(false);
        temp->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextEditable|Qt::TextEditorInteraction|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        lp_Layout->addWidget(temp);

        lp_Location = new QPushButton(page4);
        lp_Location->setObjectName(QStringLiteral("lp_Location"));
        sizePolicy4.setHeightForWidth(lp_Location->sizePolicy().hasHeightForWidth());
        lp_Location->setSizePolicy(sizePolicy4);

        lp_Layout->addWidget(lp_Location);


        locations_Layout->addLayout(lp_Layout);

        fitter_Location_layout = new QHBoxLayout();
        fitter_Location_layout->setObjectName(QStringLiteral("fitter_Location_layout"));
        label_15 = new QLabel(page4);
        label_15->setObjectName(QStringLiteral("label_15"));
        sizePolicy4.setHeightForWidth(label_15->sizePolicy().hasHeightForWidth());
        label_15->setSizePolicy(sizePolicy4);
        QFont font3;
        font3.setPointSize(9);
        font3.setBold(true);
        font3.setWeight(75);
        label_15->setFont(font3);

        fitter_Location_layout->addWidget(label_15);

        fitter_Placeholder = new QLabel(page4);
        fitter_Placeholder->setObjectName(QStringLiteral("fitter_Placeholder"));
        sizePolicy4.setHeightForWidth(fitter_Placeholder->sizePolicy().hasHeightForWidth());
        fitter_Placeholder->setSizePolicy(sizePolicy4);
        fitter_Placeholder->setMinimumSize(QSize(300, 0));
        QPalette palette1;
        palette1.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette1.setBrush(QPalette::Active, QPalette::Text, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette1.setBrush(QPalette::Active, QPalette::PlaceholderText, brush1);
#endif
        palette1.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::Text, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette1.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush1);
#endif
        palette1.setBrush(QPalette::Disabled, QPalette::WindowText, brush2);
        palette1.setBrush(QPalette::Disabled, QPalette::Text, brush2);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette1.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush3);
#endif
        fitter_Placeholder->setPalette(palette1);
        fitter_Placeholder->setAutoFillBackground(false);
        fitter_Placeholder->setLocale(QLocale(QLocale::English, QLocale::UnitedKingdom));
        fitter_Placeholder->setFrameShape(QFrame::Box);
        fitter_Placeholder->setFrameShadow(QFrame::Plain);
        fitter_Placeholder->setLineWidth(1);

        fitter_Location_layout->addWidget(fitter_Placeholder);

        fitter_Location = new QPushButton(page4);
        fitter_Location->setObjectName(QStringLiteral("fitter_Location"));
        sizePolicy4.setHeightForWidth(fitter_Location->sizePolicy().hasHeightForWidth());
        fitter_Location->setSizePolicy(sizePolicy4);

        fitter_Location_layout->addWidget(fitter_Location);


        locations_Layout->addLayout(fitter_Location_layout);

        output_Layout = new QHBoxLayout();
        output_Layout->setObjectName(QStringLiteral("output_Layout"));
        label_20 = new QLabel(page4);
        label_20->setObjectName(QStringLiteral("label_20"));
        sizePolicy4.setHeightForWidth(label_20->sizePolicy().hasHeightForWidth());
        label_20->setSizePolicy(sizePolicy4);
        label_20->setFont(font3);

        output_Layout->addWidget(label_20);

        output_Placeholder = new QLabel(page4);
        output_Placeholder->setObjectName(QStringLiteral("output_Placeholder"));
        sizePolicy4.setHeightForWidth(output_Placeholder->sizePolicy().hasHeightForWidth());
        output_Placeholder->setSizePolicy(sizePolicy4);
        output_Placeholder->setMinimumSize(QSize(300, 0));
        QPalette palette2;
        palette2.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette2.setBrush(QPalette::Active, QPalette::Text, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette2.setBrush(QPalette::Active, QPalette::PlaceholderText, brush1);
#endif
        palette2.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette2.setBrush(QPalette::Inactive, QPalette::Text, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette2.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush1);
#endif
        palette2.setBrush(QPalette::Disabled, QPalette::WindowText, brush2);
        palette2.setBrush(QPalette::Disabled, QPalette::Text, brush2);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette2.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush3);
#endif
        output_Placeholder->setPalette(palette2);
        output_Placeholder->setFrameShape(QFrame::Box);
        output_Placeholder->setFrameShadow(QFrame::Plain);
        output_Placeholder->setLineWidth(1);

        output_Layout->addWidget(output_Placeholder);

        output_Location = new QPushButton(page4);
        output_Location->setObjectName(QStringLiteral("output_Location"));
        sizePolicy4.setHeightForWidth(output_Location->sizePolicy().hasHeightForWidth());
        output_Location->setSizePolicy(sizePolicy4);

        output_Layout->addWidget(output_Location);


        locations_Layout->addLayout(output_Layout);


        options_Layout->addLayout(locations_Layout);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::MinimumExpanding);

        options_Layout->addItem(verticalSpacer);

        lower_Options = new QHBoxLayout();
        lower_Options->setObjectName(QStringLiteral("lower_Options"));
        size_Layout = new QGridLayout();
        size_Layout->setObjectName(QStringLiteral("size_Layout"));
        label_22 = new QLabel(page4);
        label_22->setObjectName(QStringLiteral("label_22"));
        sizePolicy4.setHeightForWidth(label_22->sizePolicy().hasHeightForWidth());
        label_22->setSizePolicy(sizePolicy4);

        size_Layout->addWidget(label_22, 0, 0, 1, 2);

        label_24 = new QLabel(page4);
        label_24->setObjectName(QStringLiteral("label_24"));
        sizePolicy4.setHeightForWidth(label_24->sizePolicy().hasHeightForWidth());
        label_24->setSizePolicy(sizePolicy4);

        size_Layout->addWidget(label_24, 2, 0, 1, 1);

        label_25 = new QLabel(page4);
        label_25->setObjectName(QStringLiteral("label_25"));
        sizePolicy4.setHeightForWidth(label_25->sizePolicy().hasHeightForWidth());
        label_25->setSizePolicy(sizePolicy4);

        size_Layout->addWidget(label_25, 3, 0, 1, 1);

        resize_Checkbox = new QCheckBox(page4);
        resize_Checkbox->setObjectName(QStringLiteral("resize_Checkbox"));
        sizePolicy4.setHeightForWidth(resize_Checkbox->sizePolicy().hasHeightForWidth());
        resize_Checkbox->setSizePolicy(sizePolicy4);
        resize_Checkbox->setChecked(false);

        size_Layout->addWidget(resize_Checkbox, 4, 1, 1, 1);

        width_Measurement = new QLineEdit(page4);
        width_Measurement->setObjectName(QStringLiteral("width_Measurement"));
        width_Measurement->setEnabled(false);
        sizePolicy4.setHeightForWidth(width_Measurement->sizePolicy().hasHeightForWidth());
        width_Measurement->setSizePolicy(sizePolicy4);

        size_Layout->addWidget(width_Measurement, 2, 1, 1, 1);

        height_Measurement = new QLineEdit(page4);
        height_Measurement->setObjectName(QStringLiteral("height_Measurement"));
        height_Measurement->setEnabled(false);
        sizePolicy4.setHeightForWidth(height_Measurement->sizePolicy().hasHeightForWidth());
        height_Measurement->setSizePolicy(sizePolicy4);

        size_Layout->addWidget(height_Measurement, 3, 1, 1, 1);


        lower_Options->addLayout(size_Layout);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        lower_Options->addItem(horizontalSpacer);

        option_Layout = new QVBoxLayout();
        option_Layout->setObjectName(QStringLiteral("option_Layout"));
        hsh_Layout = new QHBoxLayout();
        hsh_Layout->setObjectName(QStringLiteral("hsh_Layout"));
        label_27 = new QLabel(page4);
        label_27->setObjectName(QStringLiteral("label_27"));
        sizePolicy4.setHeightForWidth(label_27->sizePolicy().hasHeightForWidth());
        label_27->setSizePolicy(sizePolicy4);
        label_27->setFont(font3);

        hsh_Layout->addWidget(label_27);

        hsh_Order = new QComboBox(page4);
        hsh_Order->setObjectName(QStringLiteral("hsh_Order"));
        sizePolicy4.setHeightForWidth(hsh_Order->sizePolicy().hasHeightForWidth());
        hsh_Order->setSizePolicy(sizePolicy4);

        hsh_Layout->addWidget(hsh_Order);


        option_Layout->addLayout(hsh_Layout);

        ptm_layout = new QHBoxLayout();
        ptm_layout->setObjectName(QStringLiteral("ptm_layout"));
        label_38 = new QLabel(page4);
        label_38->setObjectName(QStringLiteral("label_38"));
        sizePolicy4.setHeightForWidth(label_38->sizePolicy().hasHeightForWidth());
        label_38->setSizePolicy(sizePolicy4);
        label_38->setFont(font3);

        ptm_layout->addWidget(label_38);

        ptm_Luminance = new QComboBox(page4);
        ptm_Luminance->setObjectName(QStringLiteral("ptm_Luminance"));
        sizePolicy4.setHeightForWidth(ptm_Luminance->sizePolicy().hasHeightForWidth());
        ptm_Luminance->setSizePolicy(sizePolicy4);

        ptm_layout->addWidget(ptm_Luminance);


        option_Layout->addLayout(ptm_layout);


        lower_Options->addLayout(option_Layout);


        options_Layout->addLayout(lower_Options);


        verticalLayout_14->addLayout(options_Layout);


        verticalLayout_15->addLayout(verticalLayout_14);


        verticalLayout_16->addLayout(verticalLayout_15);


        horizontalLayout_5->addLayout(verticalLayout_16);

        horizontalSpacer_6 = new QSpacerItem(30, 20, QSizePolicy::Minimum, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_6);

        verticalLayout_17 = new QVBoxLayout();
        verticalLayout_17->setObjectName(QStringLiteral("verticalLayout_17"));
        verticalLayout_17->setSizeConstraint(QLayout::SetMaximumSize);
        splitter_2 = new QSplitter(page4);
        splitter_2->setObjectName(QStringLiteral("splitter_2"));
        sizePolicy4.setHeightForWidth(splitter_2->sizePolicy().hasHeightForWidth());
        splitter_2->setSizePolicy(sizePolicy4);
        splitter_2->setOrientation(Qt::Vertical);
        label_14 = new QLabel(splitter_2);
        label_14->setObjectName(QStringLiteral("label_14"));
        sizePolicy4.setHeightForWidth(label_14->sizePolicy().hasHeightForWidth());
        label_14->setSizePolicy(sizePolicy4);
        QFont font4;
        font4.setPointSize(12);
        font4.setBold(true);
        font4.setWeight(75);
        label_14->setFont(font4);
        splitter_2->addWidget(label_14);
        fitter_Info = new QTextBrowser(splitter_2);
        fitter_Info->setObjectName(QStringLiteral("fitter_Info"));
        QSizePolicy sizePolicy6(QSizePolicy::MinimumExpanding, QSizePolicy::Maximum);
        sizePolicy6.setHorizontalStretch(0);
        sizePolicy6.setVerticalStretch(0);
        sizePolicy6.setHeightForWidth(fitter_Info->sizePolicy().hasHeightForWidth());
        fitter_Info->setSizePolicy(sizePolicy6);
        fitter_Info->setMinimumSize(QSize(300, 500));
        fitter_Info->setMaximumSize(QSize(600, 16777215));
        splitter_2->addWidget(fitter_Info);

        verticalLayout_17->addWidget(splitter_2);

        progress_Bar = new QProgressBar(page4);
        progress_Bar->setObjectName(QStringLiteral("progress_Bar"));
        progress_Bar->setValue(0);

        verticalLayout_17->addWidget(progress_Bar);

        status = new QLabel(page4);
        status->setObjectName(QStringLiteral("status"));
        status->setFont(font1);
        status->setAlignment(Qt::AlignCenter);

        verticalLayout_17->addWidget(status);

        generate_and_cancel = new QHBoxLayout();
        generate_and_cancel->setObjectName(QStringLiteral("generate_and_cancel"));
        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Minimum, QSizePolicy::Minimum);

        generate_and_cancel->addItem(horizontalSpacer_3);

        generate_Btn = new QPushButton(page4);
        generate_Btn->setObjectName(QStringLiteral("generate_Btn"));
        sizePolicy4.setHeightForWidth(generate_Btn->sizePolicy().hasHeightForWidth());
        generate_Btn->setSizePolicy(sizePolicy4);
        generate_Btn->setMaximumSize(QSize(16777215, 40));

        generate_and_cancel->addWidget(generate_Btn);

        horizontalSpacer_5 = new QSpacerItem(10, 20, QSizePolicy::Minimum, QSizePolicy::Minimum);

        generate_and_cancel->addItem(horizontalSpacer_5);

        cancel_fitter_Btn = new QPushButton(page4);
        cancel_fitter_Btn->setObjectName(QStringLiteral("cancel_fitter_Btn"));
        cancel_fitter_Btn->setEnabled(true);
        sizePolicy4.setHeightForWidth(cancel_fitter_Btn->sizePolicy().hasHeightForWidth());
        cancel_fitter_Btn->setSizePolicy(sizePolicy4);
        cancel_fitter_Btn->setMaximumSize(QSize(16777215, 40));

        generate_and_cancel->addWidget(cancel_fitter_Btn);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Minimum, QSizePolicy::Minimum);

        generate_and_cancel->addItem(horizontalSpacer_4);


        verticalLayout_17->addLayout(generate_and_cancel);


        horizontalLayout_5->addLayout(verticalLayout_17);


        verticalLayout_18->addLayout(horizontalLayout_5);

        widget_5 = new QWidget(page4);
        widget_5->setObjectName(QStringLiteral("widget_5"));
        sizePolicy5.setHeightForWidth(widget_5->sizePolicy().hasHeightForWidth());
        widget_5->setSizePolicy(sizePolicy5);
        widget_5->setMaximumSize(QSize(16777215, 60));
        horizontalLayout_8 = new QHBoxLayout(widget_5);
        horizontalLayout_8->setObjectName(QStringLiteral("horizontalLayout_8"));
        horizontalLayout_10 = new QHBoxLayout();
        horizontalLayout_10->setObjectName(QStringLiteral("horizontalLayout_10"));
        image_Management_Btn_4 = new QPushButton(widget_5);
        image_Management_Btn_4->setObjectName(QStringLiteral("image_Management_Btn_4"));
        image_Management_Btn_4->setEnabled(true);
        sizePolicy4.setHeightForWidth(image_Management_Btn_4->sizePolicy().hasHeightForWidth());
        image_Management_Btn_4->setSizePolicy(sizePolicy4);
        image_Management_Btn_4->setCheckable(false);
        image_Management_Btn_4->setFlat(false);

        horizontalLayout_10->addWidget(image_Management_Btn_4);

        marble_Detection_Btn_4 = new QPushButton(widget_5);
        marble_Detection_Btn_4->setObjectName(QStringLiteral("marble_Detection_Btn_4"));
        sizePolicy4.setHeightForWidth(marble_Detection_Btn_4->sizePolicy().hasHeightForWidth());
        marble_Detection_Btn_4->setSizePolicy(sizePolicy4);

        horizontalLayout_10->addWidget(marble_Detection_Btn_4);

        remove_Marble_Btn_4 = new QPushButton(widget_5);
        remove_Marble_Btn_4->setObjectName(QStringLiteral("remove_Marble_Btn_4"));
        sizePolicy4.setHeightForWidth(remove_Marble_Btn_4->sizePolicy().hasHeightForWidth());
        remove_Marble_Btn_4->setSizePolicy(sizePolicy4);

        horizontalLayout_10->addWidget(remove_Marble_Btn_4);

        export_Btn_4 = new QPushButton(widget_5);
        export_Btn_4->setObjectName(QStringLiteral("export_Btn_4"));
        export_Btn_4->setEnabled(false);
        sizePolicy4.setHeightForWidth(export_Btn_4->sizePolicy().hasHeightForWidth());
        export_Btn_4->setSizePolicy(sizePolicy4);

        horizontalLayout_10->addWidget(export_Btn_4);


        horizontalLayout_8->addLayout(horizontalLayout_10);


        verticalLayout_18->addWidget(widget_5);

        stackedWidget->addWidget(page4);

        verticalLayout_19->addWidget(stackedWidget);

        system_Ui->setCentralWidget(centralwidget);
        menubar = new QMenuBar(system_Ui);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 1090, 22));
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

        stackedWidget->setCurrentIndex(2);


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
        remove_Marble_Btn->setText(QApplication::translate("system_Ui", "Remove Marble", Q_NULLPTR));
        export_Btn->setText(QApplication::translate("system_Ui", "Export", Q_NULLPTR));
        image_Management_Btn_2->setText(QApplication::translate("system_Ui", "Image Management", Q_NULLPTR));
        marble_Detection_Btn_2->setText(QApplication::translate("system_Ui", "Marble Detection", Q_NULLPTR));
        remove_Marble_Btn_2->setText(QApplication::translate("system_Ui", "Remove Marble", Q_NULLPTR));
        export_Btn_2->setText(QApplication::translate("system_Ui", "Export", Q_NULLPTR));
        image_Management_Btn_3->setText(QApplication::translate("system_Ui", "Image Management", Q_NULLPTR));
        marble_Detection_Btn_3->setText(QApplication::translate("system_Ui", "Marble Detection", Q_NULLPTR));
        remove_Marble_Btn_3->setText(QApplication::translate("system_Ui", "Remove Marble", Q_NULLPTR));
        export_Btn_3->setText(QApplication::translate("system_Ui", "Export", Q_NULLPTR));
        label_18->setText(QApplication::translate("system_Ui", "Preview", Q_NULLPTR));
        image_Name->setText(QString());
        image_Label_3->setText(QString());
        previous_Image_Btn->setText(QApplication::translate("system_Ui", "< Prev", Q_NULLPTR));
        next_Image_Btn->setText(QApplication::translate("system_Ui", "Next >", Q_NULLPTR));
        label_16->setText(QApplication::translate("system_Ui", "CHOOSE FITTER", Q_NULLPTR));
        ptm_Fitter->setText(QApplication::translate("system_Ui", "PTM", Q_NULLPTR));
        hsh_Fitter->setText(QApplication::translate("system_Ui", "HSH", Q_NULLPTR));
        label_26->setText(QApplication::translate("system_Ui", "L.P. File Location:", Q_NULLPTR));
        temp->setText(QString());
        lp_Location->setText(QApplication::translate("system_Ui", "...", Q_NULLPTR));
        label_15->setText(QApplication::translate("system_Ui", "FITTER Location:", Q_NULLPTR));
        fitter_Placeholder->setText(QString());
        fitter_Location->setText(QApplication::translate("system_Ui", "...", Q_NULLPTR));
        label_20->setText(QApplication::translate("system_Ui", "Destination Location:", Q_NULLPTR));
        output_Placeholder->setText(QString());
        output_Location->setText(QApplication::translate("system_Ui", "...", Q_NULLPTR));
        label_22->setText(QApplication::translate("system_Ui", "Actual Size:", Q_NULLPTR));
        label_24->setText(QApplication::translate("system_Ui", "Width:", Q_NULLPTR));
        label_25->setText(QApplication::translate("system_Ui", "Height", Q_NULLPTR));
        resize_Checkbox->setText(QApplication::translate("system_Ui", "resize", Q_NULLPTR));
        width_Measurement->setText(QApplication::translate("system_Ui", "123", Q_NULLPTR));
        height_Measurement->setText(QApplication::translate("system_Ui", "567", Q_NULLPTR));
        label_27->setText(QApplication::translate("system_Ui", "HSH Order:", Q_NULLPTR));
        hsh_Order->clear();
        hsh_Order->insertItems(0, QStringList()
         << QString()
         << QApplication::translate("system_Ui", "1", Q_NULLPTR)
         << QApplication::translate("system_Ui", "2", Q_NULLPTR)
         << QApplication::translate("system_Ui", "3", Q_NULLPTR)
        );
        label_38->setText(QApplication::translate("system_Ui", "PTM (luminance):", Q_NULLPTR));
        ptm_Luminance->clear();
        ptm_Luminance->insertItems(0, QStringList()
         << QString()
         << QApplication::translate("system_Ui", "RGB", Q_NULLPTR)
         << QApplication::translate("system_Ui", "LRGB", Q_NULLPTR)
        );
        label_14->setText(QApplication::translate("system_Ui", "Fitter Information", Q_NULLPTR));
        fitter_Info->setHtml(QApplication::translate("system_Ui", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Ubuntu'; font-size:11pt; font-weight:400; font-style:normal;\">\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'MS Shell Dlg 2'; font-size:7.8pt;\"><br /></p></body></html>", Q_NULLPTR));
        status->setText(QString());
        generate_Btn->setText(QApplication::translate("system_Ui", "Generate", Q_NULLPTR));
        cancel_fitter_Btn->setText(QApplication::translate("system_Ui", "Cancel", Q_NULLPTR));
        image_Management_Btn_4->setText(QApplication::translate("system_Ui", "Image Management", Q_NULLPTR));
        marble_Detection_Btn_4->setText(QApplication::translate("system_Ui", "Marble Detection", Q_NULLPTR));
        remove_Marble_Btn_4->setText(QApplication::translate("system_Ui", "Remove Marble", Q_NULLPTR));
        export_Btn_4->setText(QApplication::translate("system_Ui", "Export", Q_NULLPTR));
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
