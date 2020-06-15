/********************************************************************************
** Form generated from reading UI file 'marble_detection_widget.ui'
**
** Created by: Qt User Interface Compiler version 5.9.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MARBLE_DETECTION_WIDGET_H
#define UI_MARBLE_DETECTION_WIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QScrollBar>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QToolBox>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Form
{
public:
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout_7;
    QToolBox *toolBox_2;
    QWidget *movement_Page_2;
    QWidget *verticalLayoutWidget_5;
    QVBoxLayout *verticalLayout_8;
    QLabel *label_X_2;
    QSpinBox *spin_Box_X_2;
    QSlider *horizontal_Slider_X_2;
    QLabel *label_Y_2;
    QSpinBox *spin_Box_Y_2;
    QSlider *horizontal_Slider_Y_2;
    QSpacerItem *verticalSpacer_6;
    QWidget *scale_Page_2;
    QWidget *verticalLayoutWidget_6;
    QVBoxLayout *verticalLayout_9;
    QLabel *radius_Label_2;
    QDoubleSpinBox *spin_Box_Radius_2;
    QSlider *horizontal_Slider_Radius_2;
    QFrame *line_2;
    QCheckBox *check_Box_Spherical_2;
    QSpacerItem *verticalSpacer_7;
    QWidget *tools_Page_2;
    QWidget *verticalLayoutWidget_7;
    QVBoxLayout *verticalLayout_10;
    QLabel *zoom_Label_2;
    QHBoxLayout *horizontalLayout_4;
    QPushButton *zoom_Out_Button_2;
    QPushButton *zoom_In_Button_2;
    QPushButton *zoom_Reset_Button_2;
    QSpacerItem *verticalSpacer_8;
    QFrame *seperator_3;
    QLabel *colour_Label_2;
    QVBoxLayout *verticalLayout_11;
    QLabel *label_Red_2;
    QScrollBar *horizontal_Scroll_Bar_Red_2;
    QLabel *label_Green_2;
    QScrollBar *horizontal_Scroll_Bar_Green_2;
    QLabel *label_Blue_2;
    QScrollBar *horizontal_Scroll_Bar_Blue_2;
    QToolButton *colour_Selector_Button_2;
    QSpacerItem *verticalSpacer_9;
    QFrame *seperator_4;
    QLabel *label_3;
    QHBoxLayout *horizontalLayout_5;
    QSpacerItem *horizontalSpacer_5;
    QVBoxLayout *verticalLayout_12;
    QCheckBox *checkBox_2;
    QSpacerItem *verticalSpacer_10;
    QWidget *images_Page_2;
    QScrollArea *scrollArea_3;
    QWidget *scrollAreaWidgetContents_3;
    QListWidget *listWidget_2;
    QPushButton *open_Button_2;
    QPushButton *test_Button_2;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents_4;
    QLabel *image_Label_2;
    QToolButton *swap_Button;
    QLabel *label;
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout_6;
    QSpacerItem *horizontalSpacer_3;
    QLabel *preivew_Label_2;
    QSpacerItem *horizontalSpacer_6;

    void setupUi(QWidget *Form)
    {
        if (Form->objectName().isEmpty())
            Form->setObjectName(QStringLiteral("Form"));
        Form->resize(1600, 900);
        verticalLayoutWidget = new QWidget(Form);
        verticalLayoutWidget->setObjectName(QStringLiteral("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(1329, 0, 251, 611));
        verticalLayout_7 = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout_7->setObjectName(QStringLiteral("verticalLayout_7"));
        verticalLayout_7->setContentsMargins(0, 0, 0, 0);
        toolBox_2 = new QToolBox(verticalLayoutWidget);
        toolBox_2->setObjectName(QStringLiteral("toolBox_2"));
        QFont font;
        font.setFamily(QStringLiteral("MS Shell Dlg 2"));
        font.setPointSize(10);
        font.setBold(false);
        font.setItalic(false);
        font.setWeight(50);
        toolBox_2->setFont(font);
        toolBox_2->setStyleSheet(QLatin1String("QToolBox::tab {\n"
"background: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 #E1E1E1, stop: 0.4 #DDDDDD, stop: 0.5 #D8D8D8, stop: 1.0 #D3D3D3);\n"
"border: 2px solid #C4C4C3;\n"
"border-bottom-color: #C2C7CB; /* same as the pane color */\n"
"border-top-left-radius: 4px;\n"
"border-top-right-radius: 4px;\n"
"font: 11pt \"MS Shell Dlg 2\";\n"
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
        movement_Page_2 = new QWidget();
        movement_Page_2->setObjectName(QStringLiteral("movement_Page_2"));
        movement_Page_2->setGeometry(QRect(0, 0, 249, 489));
        verticalLayoutWidget_5 = new QWidget(movement_Page_2);
        verticalLayoutWidget_5->setObjectName(QStringLiteral("verticalLayoutWidget_5"));
        verticalLayoutWidget_5->setGeometry(QRect(10, 10, 231, 471));
        verticalLayout_8 = new QVBoxLayout(verticalLayoutWidget_5);
        verticalLayout_8->setObjectName(QStringLiteral("verticalLayout_8"));
        verticalLayout_8->setContentsMargins(0, 0, 0, 0);
        label_X_2 = new QLabel(verticalLayoutWidget_5);
        label_X_2->setObjectName(QStringLiteral("label_X_2"));
        label_X_2->setFont(font);
        label_X_2->setAlignment(Qt::AlignBottom|Qt::AlignLeading|Qt::AlignLeft);

        verticalLayout_8->addWidget(label_X_2);

        spin_Box_X_2 = new QSpinBox(verticalLayoutWidget_5);
        spin_Box_X_2->setObjectName(QStringLiteral("spin_Box_X_2"));
        spin_Box_X_2->setMaximum(2088);
        spin_Box_X_2->setValue(0);

        verticalLayout_8->addWidget(spin_Box_X_2);

        horizontal_Slider_X_2 = new QSlider(verticalLayoutWidget_5);
        horizontal_Slider_X_2->setObjectName(QStringLiteral("horizontal_Slider_X_2"));
        horizontal_Slider_X_2->setMaximum(2088);
        horizontal_Slider_X_2->setValue(0);
        horizontal_Slider_X_2->setSliderPosition(0);
        horizontal_Slider_X_2->setOrientation(Qt::Horizontal);

        verticalLayout_8->addWidget(horizontal_Slider_X_2);

        label_Y_2 = new QLabel(verticalLayoutWidget_5);
        label_Y_2->setObjectName(QStringLiteral("label_Y_2"));
        label_Y_2->setEnabled(true);
        label_Y_2->setFont(font);
        label_Y_2->setAlignment(Qt::AlignBottom|Qt::AlignLeading|Qt::AlignLeft);

        verticalLayout_8->addWidget(label_Y_2);

        spin_Box_Y_2 = new QSpinBox(verticalLayoutWidget_5);
        spin_Box_Y_2->setObjectName(QStringLiteral("spin_Box_Y_2"));
        spin_Box_Y_2->setMaximum(1387);
        spin_Box_Y_2->setValue(0);

        verticalLayout_8->addWidget(spin_Box_Y_2);

        horizontal_Slider_Y_2 = new QSlider(verticalLayoutWidget_5);
        horizontal_Slider_Y_2->setObjectName(QStringLiteral("horizontal_Slider_Y_2"));
        horizontal_Slider_Y_2->setMaximum(1387);
        horizontal_Slider_Y_2->setValue(0);
        horizontal_Slider_Y_2->setOrientation(Qt::Horizontal);

        verticalLayout_8->addWidget(horizontal_Slider_Y_2);

        verticalSpacer_6 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_8->addItem(verticalSpacer_6);

        toolBox_2->addItem(movement_Page_2, QStringLiteral("Position"));
        scale_Page_2 = new QWidget();
        scale_Page_2->setObjectName(QStringLiteral("scale_Page_2"));
        scale_Page_2->setGeometry(QRect(0, 0, 249, 489));
        verticalLayoutWidget_6 = new QWidget(scale_Page_2);
        verticalLayoutWidget_6->setObjectName(QStringLiteral("verticalLayoutWidget_6"));
        verticalLayoutWidget_6->setGeometry(QRect(10, 10, 231, 471));
        verticalLayout_9 = new QVBoxLayout(verticalLayoutWidget_6);
        verticalLayout_9->setObjectName(QStringLiteral("verticalLayout_9"));
        verticalLayout_9->setContentsMargins(0, 0, 0, 0);
        radius_Label_2 = new QLabel(verticalLayoutWidget_6);
        radius_Label_2->setObjectName(QStringLiteral("radius_Label_2"));
        radius_Label_2->setAlignment(Qt::AlignBottom|Qt::AlignLeading|Qt::AlignLeft);

        verticalLayout_9->addWidget(radius_Label_2);

        spin_Box_Radius_2 = new QDoubleSpinBox(verticalLayoutWidget_6);
        spin_Box_Radius_2->setObjectName(QStringLiteral("spin_Box_Radius_2"));
        spin_Box_Radius_2->setMinimum(50);
        spin_Box_Radius_2->setMaximum(500);
        spin_Box_Radius_2->setValue(100);

        verticalLayout_9->addWidget(spin_Box_Radius_2);

        horizontal_Slider_Radius_2 = new QSlider(verticalLayoutWidget_6);
        horizontal_Slider_Radius_2->setObjectName(QStringLiteral("horizontal_Slider_Radius_2"));
        horizontal_Slider_Radius_2->setMinimum(50);
        horizontal_Slider_Radius_2->setMaximum(500);
        horizontal_Slider_Radius_2->setValue(100);
        horizontal_Slider_Radius_2->setOrientation(Qt::Horizontal);

        verticalLayout_9->addWidget(horizontal_Slider_Radius_2);

        line_2 = new QFrame(verticalLayoutWidget_6);
        line_2->setObjectName(QStringLiteral("line_2"));
        line_2->setFrameShape(QFrame::HLine);
        line_2->setFrameShadow(QFrame::Sunken);

        verticalLayout_9->addWidget(line_2);

        check_Box_Spherical_2 = new QCheckBox(verticalLayoutWidget_6);
        check_Box_Spherical_2->setObjectName(QStringLiteral("check_Box_Spherical_2"));
        check_Box_Spherical_2->setChecked(true);

        verticalLayout_9->addWidget(check_Box_Spherical_2);

        verticalSpacer_7 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_9->addItem(verticalSpacer_7);

        toolBox_2->addItem(scale_Page_2, QStringLiteral("Scale"));
        tools_Page_2 = new QWidget();
        tools_Page_2->setObjectName(QStringLiteral("tools_Page_2"));
        tools_Page_2->setGeometry(QRect(0, 0, 249, 489));
        verticalLayoutWidget_7 = new QWidget(tools_Page_2);
        verticalLayoutWidget_7->setObjectName(QStringLiteral("verticalLayoutWidget_7"));
        verticalLayoutWidget_7->setGeometry(QRect(10, 10, 231, 471));
        verticalLayout_10 = new QVBoxLayout(verticalLayoutWidget_7);
        verticalLayout_10->setSpacing(4);
        verticalLayout_10->setObjectName(QStringLiteral("verticalLayout_10"));
        verticalLayout_10->setContentsMargins(0, 0, 0, 0);
        zoom_Label_2 = new QLabel(verticalLayoutWidget_7);
        zoom_Label_2->setObjectName(QStringLiteral("zoom_Label_2"));

        verticalLayout_10->addWidget(zoom_Label_2, 0, Qt::AlignBottom);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        zoom_Out_Button_2 = new QPushButton(verticalLayoutWidget_7);
        zoom_Out_Button_2->setObjectName(QStringLiteral("zoom_Out_Button_2"));

        horizontalLayout_4->addWidget(zoom_Out_Button_2);

        zoom_In_Button_2 = new QPushButton(verticalLayoutWidget_7);
        zoom_In_Button_2->setObjectName(QStringLiteral("zoom_In_Button_2"));

        horizontalLayout_4->addWidget(zoom_In_Button_2);


        verticalLayout_10->addLayout(horizontalLayout_4);

        zoom_Reset_Button_2 = new QPushButton(verticalLayoutWidget_7);
        zoom_Reset_Button_2->setObjectName(QStringLiteral("zoom_Reset_Button_2"));

        verticalLayout_10->addWidget(zoom_Reset_Button_2);

        verticalSpacer_8 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_10->addItem(verticalSpacer_8);

        seperator_3 = new QFrame(verticalLayoutWidget_7);
        seperator_3->setObjectName(QStringLiteral("seperator_3"));
        seperator_3->setFrameShape(QFrame::HLine);
        seperator_3->setFrameShadow(QFrame::Sunken);

        verticalLayout_10->addWidget(seperator_3);

        colour_Label_2 = new QLabel(verticalLayoutWidget_7);
        colour_Label_2->setObjectName(QStringLiteral("colour_Label_2"));

        verticalLayout_10->addWidget(colour_Label_2, 0, Qt::AlignBottom);

        verticalLayout_11 = new QVBoxLayout();
        verticalLayout_11->setObjectName(QStringLiteral("verticalLayout_11"));
        label_Red_2 = new QLabel(verticalLayoutWidget_7);
        label_Red_2->setObjectName(QStringLiteral("label_Red_2"));

        verticalLayout_11->addWidget(label_Red_2);

        horizontal_Scroll_Bar_Red_2 = new QScrollBar(verticalLayoutWidget_7);
        horizontal_Scroll_Bar_Red_2->setObjectName(QStringLiteral("horizontal_Scroll_Bar_Red_2"));
        horizontal_Scroll_Bar_Red_2->setAutoFillBackground(false);
        horizontal_Scroll_Bar_Red_2->setStyleSheet(QLatin1String("QScrollBar:horizontal {\n"
"    border: 0px solid white;\n"
"    background: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0 rgba(0, 0, 0, 255), stop:1 rgba(255, 255, 255, 255));\n"
"    height: 15px;\n"
"    margin: 0px 20px 0 20px;\n"
"}\n"
"\n"
"QScrollBar::handle:horizontal {\n"
"    background: rgb(255, 0, 0);\n"
"    min-width: 20px;\n"
"	border: 1px solid black;\n"
"}\n"
"\n"
"QScrollBar:left-arrow:horizontal, QScrollBar::right-arrow:horizontal {\n"
"    border: 2px solid grey;\n"
"    width: 3px;\n"
"    height: 3px;\n"
"    background: white;\n"
"}\n"
"\n"
"QScrollBar::add-page:horizontal, QScrollBar::sub-page:horizontal {\n"
"    background: none;\n"
"}\n"
"\n"
"QScrollBar::add-line:horizontal {\n"
"    border: 2px solid black;\n"
"    background:grey;\n"
"    width: 20px;\n"
"    subcontrol-position: right;\n"
"    subcontrol-origin: margin;\n"
"}\n"
"\n"
"QScrollBar::sub-line:horizontal {\n"
"    border: 2px solid black;\n"
"    background: grey;\n"
"    width: 20px;\n"
"    subcontrol-p"
                        "osition: left;\n"
"    subcontrol-origin: margin;\n"
"}"));
        horizontal_Scroll_Bar_Red_2->setMaximum(255);
        horizontal_Scroll_Bar_Red_2->setOrientation(Qt::Horizontal);

        verticalLayout_11->addWidget(horizontal_Scroll_Bar_Red_2);

        label_Green_2 = new QLabel(verticalLayoutWidget_7);
        label_Green_2->setObjectName(QStringLiteral("label_Green_2"));

        verticalLayout_11->addWidget(label_Green_2);

        horizontal_Scroll_Bar_Green_2 = new QScrollBar(verticalLayoutWidget_7);
        horizontal_Scroll_Bar_Green_2->setObjectName(QStringLiteral("horizontal_Scroll_Bar_Green_2"));
        horizontal_Scroll_Bar_Green_2->setStyleSheet(QLatin1String("QScrollBar:horizontal {\n"
"    border: 0px solid white;\n"
"    background: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0 rgba(0, 0, 0, 255), stop:1 rgba(255, 255, 255, 255));\n"
"    height: 15px;\n"
"    margin: 0px 20px 0 20px;\n"
"}\n"
"\n"
"QScrollBar::handle:horizontal {\n"
"    background: rgb(0, 255, 0);\n"
"    min-width: 20px;\n"
"	border: 1px solid black;\n"
"}\n"
"\n"
"QScrollBar:left-arrow:horizontal, QScrollBar::right-arrow:horizontal {\n"
"    border: 2px solid grey;\n"
"    width: 3px;\n"
"    height: 3px;\n"
"    background: white;\n"
"}\n"
"\n"
"QScrollBar::add-page:horizontal, QScrollBar::sub-page:horizontal {\n"
"    background: none;\n"
"}\n"
"\n"
"QScrollBar::add-line:horizontal {\n"
"    border: 2px solid black;\n"
"    background:grey;\n"
"    width: 20px;\n"
"    subcontrol-position: right;\n"
"    subcontrol-origin: margin;\n"
"}\n"
"\n"
"QScrollBar::sub-line:horizontal {\n"
"    border: 2px solid black;\n"
"    background: grey;\n"
"    width: 20px;\n"
"    subcontrol-p"
                        "osition: left;\n"
"    subcontrol-origin: margin;\n"
"}"));
        horizontal_Scroll_Bar_Green_2->setMaximum(255);
        horizontal_Scroll_Bar_Green_2->setValue(255);
        horizontal_Scroll_Bar_Green_2->setOrientation(Qt::Horizontal);

        verticalLayout_11->addWidget(horizontal_Scroll_Bar_Green_2);

        label_Blue_2 = new QLabel(verticalLayoutWidget_7);
        label_Blue_2->setObjectName(QStringLiteral("label_Blue_2"));

        verticalLayout_11->addWidget(label_Blue_2);

        horizontal_Scroll_Bar_Blue_2 = new QScrollBar(verticalLayoutWidget_7);
        horizontal_Scroll_Bar_Blue_2->setObjectName(QStringLiteral("horizontal_Scroll_Bar_Blue_2"));
        horizontal_Scroll_Bar_Blue_2->setStyleSheet(QLatin1String("QScrollBar:horizontal {\n"
"    border: 0px solid white;\n"
"    background: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0 rgba(0, 0, 0, 255), stop:1 rgba(255, 255, 255, 255));\n"
"    height: 15px;\n"
"    margin: 0px 20px 0 20px;\n"
"}\n"
"\n"
"QScrollBar::handle:horizontal {\n"
"    background: rgb(0, 0, 255);\n"
"    min-width: 20px;\n"
"	border: 1px solid black;\n"
"}\n"
"\n"
"QScrollBar:left-arrow:horizontal, QScrollBar::right-arrow:horizontal {\n"
"    border: 2px solid grey;\n"
"    width: 3px;\n"
"    height: 3px;\n"
"    background: white;\n"
"}\n"
"\n"
"QScrollBar::add-page:horizontal, QScrollBar::sub-page:horizontal {\n"
"    background: none;\n"
"}\n"
"\n"
"QScrollBar::add-line:horizontal {\n"
"    border: 2px solid black;\n"
"    background:grey;\n"
"    width: 20px;\n"
"    subcontrol-position: right;\n"
"    subcontrol-origin: margin;\n"
"}\n"
"\n"
"QScrollBar::sub-line:horizontal {\n"
"    border: 2px solid black;\n"
"    background: grey;\n"
"    width: 20px;\n"
"    subcontrol-p"
                        "osition: left;\n"
"    subcontrol-origin: margin;\n"
"}"));
        horizontal_Scroll_Bar_Blue_2->setMaximum(255);
        horizontal_Scroll_Bar_Blue_2->setOrientation(Qt::Horizontal);

        verticalLayout_11->addWidget(horizontal_Scroll_Bar_Blue_2);

        colour_Selector_Button_2 = new QToolButton(verticalLayoutWidget_7);
        colour_Selector_Button_2->setObjectName(QStringLiteral("colour_Selector_Button_2"));

        verticalLayout_11->addWidget(colour_Selector_Button_2, 0, Qt::AlignRight);


        verticalLayout_10->addLayout(verticalLayout_11);

        verticalSpacer_9 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_10->addItem(verticalSpacer_9);

        seperator_4 = new QFrame(verticalLayoutWidget_7);
        seperator_4->setObjectName(QStringLiteral("seperator_4"));
        seperator_4->setFrameShape(QFrame::HLine);
        seperator_4->setFrameShadow(QFrame::Sunken);

        verticalLayout_10->addWidget(seperator_4);

        label_3 = new QLabel(verticalLayoutWidget_7);
        label_3->setObjectName(QStringLiteral("label_3"));

        verticalLayout_10->addWidget(label_3);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_5);

        verticalLayout_12 = new QVBoxLayout();
        verticalLayout_12->setObjectName(QStringLiteral("verticalLayout_12"));
        checkBox_2 = new QCheckBox(verticalLayoutWidget_7);
        checkBox_2->setObjectName(QStringLiteral("checkBox_2"));

        verticalLayout_12->addWidget(checkBox_2);


        horizontalLayout_5->addLayout(verticalLayout_12);


        verticalLayout_10->addLayout(horizontalLayout_5);

        verticalSpacer_10 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_10->addItem(verticalSpacer_10);

        toolBox_2->addItem(tools_Page_2, QStringLiteral("Tools"));
        images_Page_2 = new QWidget();
        images_Page_2->setObjectName(QStringLiteral("images_Page_2"));
        images_Page_2->setGeometry(QRect(0, 0, 249, 489));
        scrollArea_3 = new QScrollArea(images_Page_2);
        scrollArea_3->setObjectName(QStringLiteral("scrollArea_3"));
        scrollArea_3->setGeometry(QRect(10, 0, 231, 271));
        scrollArea_3->setWidgetResizable(true);
        scrollAreaWidgetContents_3 = new QWidget();
        scrollAreaWidgetContents_3->setObjectName(QStringLiteral("scrollAreaWidgetContents_3"));
        scrollAreaWidgetContents_3->setGeometry(QRect(0, 0, 229, 269));
        listWidget_2 = new QListWidget(scrollAreaWidgetContents_3);
        listWidget_2->setObjectName(QStringLiteral("listWidget_2"));
        listWidget_2->setGeometry(QRect(0, 0, 211, 271));
        listWidget_2->setEditTriggers(QAbstractItemView::NoEditTriggers);
        listWidget_2->setDefaultDropAction(Qt::IgnoreAction);
        listWidget_2->setItemAlignment(Qt::AlignLeading);
        scrollArea_3->setWidget(scrollAreaWidgetContents_3);
        open_Button_2 = new QPushButton(images_Page_2);
        open_Button_2->setObjectName(QStringLiteral("open_Button_2"));
        open_Button_2->setGeometry(QRect(10, 280, 75, 23));
        test_Button_2 = new QPushButton(images_Page_2);
        test_Button_2->setObjectName(QStringLiteral("test_Button_2"));
        test_Button_2->setGeometry(QRect(100, 280, 131, 22));
        toolBox_2->addItem(images_Page_2, QStringLiteral("Images"));

        verticalLayout_7->addWidget(toolBox_2);

        scrollArea = new QScrollArea(Form);
        scrollArea->setObjectName(QStringLiteral("scrollArea"));
        scrollArea->setGeometry(QRect(0, 1, 1171, 841));
        scrollArea->setVerticalScrollBarPolicy(Qt::ScrollBarAsNeeded);
        scrollArea->setHorizontalScrollBarPolicy(Qt::ScrollBarAsNeeded);
        scrollArea->setSizeAdjustPolicy(QAbstractScrollArea::AdjustToContents);
        scrollArea->setWidgetResizable(true);
        scrollArea->setAlignment(Qt::AlignCenter);
        scrollAreaWidgetContents_4 = new QWidget();
        scrollAreaWidgetContents_4->setObjectName(QStringLiteral("scrollAreaWidgetContents_4"));
        scrollAreaWidgetContents_4->setGeometry(QRect(0, 0, 1169, 839));
        image_Label_2 = new QLabel(scrollAreaWidgetContents_4);
        image_Label_2->setObjectName(QStringLiteral("image_Label_2"));
        image_Label_2->setGeometry(QRect(0, 0, 1171, 841));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(image_Label_2->sizePolicy().hasHeightForWidth());
        image_Label_2->setSizePolicy(sizePolicy);
        image_Label_2->setFrameShape(QFrame::Panel);
        image_Label_2->setScaledContents(true);
        image_Label_2->setAlignment(Qt::AlignCenter);
        scrollArea->setWidget(scrollAreaWidgetContents_4);
        swap_Button = new QToolButton(Form);
        swap_Button->setObjectName(QStringLiteral("swap_Button"));
        swap_Button->setGeometry(QRect(1179, 550, 41, 41));
        QIcon icon;
        icon.addFile(QStringLiteral(":/noun_swap_99117.png"), QSize(), QIcon::Normal, QIcon::On);
        swap_Button->setIcon(icon);
        swap_Button->setIconSize(QSize(40, 40));
        label = new QLabel(Form);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(1189, 600, 81, 20));
        QFont font1;
        font1.setFamily(QStringLiteral("MS Shell Dlg 2"));
        font1.setPointSize(14);
        font1.setBold(false);
        font1.setItalic(false);
        font1.setWeight(9);
        font1.setKerning(true);
        label->setFont(font1);
        label->setStyleSheet(QStringLiteral("font: 75 14pt \"MS Shell Dlg 2\";"));
        horizontalLayoutWidget = new QWidget(Form);
        horizontalLayoutWidget->setObjectName(QStringLiteral("horizontalLayoutWidget"));
        horizontalLayoutWidget->setGeometry(QRect(1189, 620, 391, 221));
        horizontalLayout_6 = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        horizontalLayout_6->setContentsMargins(0, 0, 0, 0);
        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_3);

        preivew_Label_2 = new QLabel(horizontalLayoutWidget);
        preivew_Label_2->setObjectName(QStringLiteral("preivew_Label_2"));
        sizePolicy.setHeightForWidth(preivew_Label_2->sizePolicy().hasHeightForWidth());
        preivew_Label_2->setSizePolicy(sizePolicy);
        preivew_Label_2->setMinimumSize(QSize(219, 219));
        preivew_Label_2->setMaximumSize(QSize(389, 219));
        preivew_Label_2->setFrameShape(QFrame::Panel);
        preivew_Label_2->setFrameShadow(QFrame::Plain);
        preivew_Label_2->setLineWidth(1);
        preivew_Label_2->setText(QStringLiteral(""));
        preivew_Label_2->setScaledContents(true);

        horizontalLayout_6->addWidget(preivew_Label_2);

        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_6);


        retranslateUi(Form);

        toolBox_2->setCurrentIndex(2);


        QMetaObject::connectSlotsByName(Form);
    } // setupUi

    void retranslateUi(QWidget *Form)
    {
        Form->setWindowTitle(QApplication::translate("Form", "Form", Q_NULLPTR));
        label_X_2->setText(QApplication::translate("Form", "X Position:", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        spin_Box_X_2->setToolTip(QApplication::translate("Form", "X Value of Sphere", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        label_Y_2->setText(QApplication::translate("Form", "Y Position:", Q_NULLPTR));
        toolBox_2->setItemText(toolBox_2->indexOf(movement_Page_2), QApplication::translate("Form", "Position", Q_NULLPTR));
        radius_Label_2->setText(QApplication::translate("Form", "Radius", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        spin_Box_Radius_2->setToolTip(QApplication::translate("Form", "Selecter for Radius of Sphere", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        check_Box_Spherical_2->setText(QApplication::translate("Form", "Force Circular?", Q_NULLPTR));
        toolBox_2->setItemText(toolBox_2->indexOf(scale_Page_2), QApplication::translate("Form", "Scale", Q_NULLPTR));
        zoom_Label_2->setText(QApplication::translate("Form", "Zoom:", Q_NULLPTR));
        zoom_Out_Button_2->setText(QApplication::translate("Form", "Zoom Out", Q_NULLPTR));
        zoom_In_Button_2->setText(QApplication::translate("Form", "Zoom In", Q_NULLPTR));
        zoom_Reset_Button_2->setText(QApplication::translate("Form", "Reset", Q_NULLPTR));
        colour_Label_2->setText(QApplication::translate("Form", "Marker Colour:", Q_NULLPTR));
        label_Red_2->setText(QApplication::translate("Form", "   Red:", Q_NULLPTR));
        label_Green_2->setText(QApplication::translate("Form", "   Green:", Q_NULLPTR));
        label_Blue_2->setText(QApplication::translate("Form", "   Blue:", Q_NULLPTR));
        colour_Selector_Button_2->setText(QApplication::translate("Form", "...", Q_NULLPTR));
        label_3->setText(QApplication::translate("Form", "Image Manipulation:", Q_NULLPTR));
        checkBox_2->setText(QApplication::translate("Form", "Average Images", Q_NULLPTR));
        toolBox_2->setItemText(toolBox_2->indexOf(tools_Page_2), QApplication::translate("Form", "Tools", Q_NULLPTR));
        open_Button_2->setText(QApplication::translate("Form", "Open", Q_NULLPTR));
        test_Button_2->setText(QApplication::translate("Form", "Run Marble Detection", Q_NULLPTR));
        toolBox_2->setItemText(toolBox_2->indexOf(images_Page_2), QApplication::translate("Form", "Images", Q_NULLPTR));
        image_Label_2->setText(QString());
        swap_Button->setText(QString());
        label->setText(QApplication::translate("Form", "Preview:", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Form: public Ui_Form {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MARBLE_DETECTION_WIDGET_H
