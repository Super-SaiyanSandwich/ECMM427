/********************************************************************************
** Form generated from reading UI file 'marble_Detection.ui'
**
** Created by: Qt User Interface Compiler version 5.14.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MARBLE_DETECTION_H
#define UI_MARBLE_DETECTION_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QScrollBar>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBox>
#include <QtWidgets/QToolButton>
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
    QSlider *horizontal_Slider_X;
    QLabel *label_Y;
    QSpinBox *spin_Box_Y;
    QSlider *horizontal_Slider_Y;
    QSpacerItem *verticalSpacer;
    QWidget *scale_Page;
    QWidget *verticalLayoutWidget_3;
    QVBoxLayout *verticalLayout_3;
    QLabel *radius_Label;
    QDoubleSpinBox *spin_Box_Radius;
    QSlider *horizontal_Slider_Radius;
    QFrame *line;
    QCheckBox *check_Box_Spherical;
    QSpacerItem *verticalSpacer_2;
    QWidget *tools_Page;
    QWidget *verticalLayoutWidget_4;
    QVBoxLayout *verticalLayout_4;
    QLabel *zoom_Label;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *zoom_Out_Button;
    QPushButton *zoom_In_Button;
    QPushButton *zoom_Reset_Button;
    QSpacerItem *verticalSpacer_4;
    QFrame *seperator;
    QLabel *colour_Label;
    QVBoxLayout *verticalLayout_5;
    QLabel *label_Red;
    QScrollBar *horizontal_Scroll_Bar_Red;
    QLabel *label_Green;
    QScrollBar *horizontal_Scroll_Bar_Green;
    QLabel *label_Blue;
    QScrollBar *horizontal_Scroll_Bar_Blue;
    QToolButton *colour_Selector_Button;
    QSpacerItem *verticalSpacer_5;
    QFrame *seperator_2;
    QLabel *label_2;
    QHBoxLayout *horizontalLayout_3;
    QSpacerItem *horizontalSpacer_4;
    QVBoxLayout *verticalLayout_6;
    QCheckBox *checkBox;
    QSpacerItem *verticalSpacer_3;
    QWidget *images_Page;
    QScrollArea *scrollArea_2;
    QWidget *scrollAreaWidgetContents_2;
    QListWidget *listWidget;
    QPushButton *open_Button;
    QPushButton *test_Button;
    QLabel *label;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QLabel *image_Label;
    QToolButton *swap_Button;
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QLabel *preivew_Label;
    QSpacerItem *horizontalSpacer_2;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *marble_Detection)
    {
        if (marble_Detection->objectName().isEmpty())
            marble_Detection->setObjectName(QString::fromUtf8("marble_Detection"));
        marble_Detection->resize(1600, 900);
        marble_Detection->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);\n"
"font: 75 10pt \"MS Shell Dlg 2\";\n"
""));
        centralwidget = new QWidget(marble_Detection);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        verticalLayoutWidget = new QWidget(centralwidget);
        verticalLayoutWidget->setObjectName(QString::fromUtf8("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(1330, 0, 251, 611));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        toolBox = new QToolBox(verticalLayoutWidget);
        toolBox->setObjectName(QString::fromUtf8("toolBox"));
        QFont font;
        font.setFamily(QString::fromUtf8("MS Shell Dlg 2"));
        font.setPointSize(10);
        font.setBold(false);
        font.setItalic(false);
        font.setWeight(9);
        toolBox->setFont(font);
        toolBox->setStyleSheet(QString::fromUtf8("QToolBox::tab {\n"
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
        movement_Page = new QWidget();
        movement_Page->setObjectName(QString::fromUtf8("movement_Page"));
        movement_Page->setGeometry(QRect(0, 0, 249, 469));
        verticalLayoutWidget_2 = new QWidget(movement_Page);
        verticalLayoutWidget_2->setObjectName(QString::fromUtf8("verticalLayoutWidget_2"));
        verticalLayoutWidget_2->setGeometry(QRect(10, 10, 231, 471));
        verticalLayout_2 = new QVBoxLayout(verticalLayoutWidget_2);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        label_X = new QLabel(verticalLayoutWidget_2);
        label_X->setObjectName(QString::fromUtf8("label_X"));
        label_X->setFont(font);
        label_X->setAlignment(Qt::AlignBottom|Qt::AlignLeading|Qt::AlignLeft);

        verticalLayout_2->addWidget(label_X);

        spin_Box_X = new QSpinBox(verticalLayoutWidget_2);
        spin_Box_X->setObjectName(QString::fromUtf8("spin_Box_X"));
        spin_Box_X->setMaximum(2088);
        spin_Box_X->setValue(0);

        verticalLayout_2->addWidget(spin_Box_X);

        horizontal_Slider_X = new QSlider(verticalLayoutWidget_2);
        horizontal_Slider_X->setObjectName(QString::fromUtf8("horizontal_Slider_X"));
        horizontal_Slider_X->setMaximum(2088);
        horizontal_Slider_X->setValue(0);
        horizontal_Slider_X->setSliderPosition(0);
        horizontal_Slider_X->setOrientation(Qt::Horizontal);

        verticalLayout_2->addWidget(horizontal_Slider_X);

        label_Y = new QLabel(verticalLayoutWidget_2);
        label_Y->setObjectName(QString::fromUtf8("label_Y"));
        label_Y->setEnabled(true);
        label_Y->setFont(font);
        label_Y->setAlignment(Qt::AlignBottom|Qt::AlignLeading|Qt::AlignLeft);

        verticalLayout_2->addWidget(label_Y);

        spin_Box_Y = new QSpinBox(verticalLayoutWidget_2);
        spin_Box_Y->setObjectName(QString::fromUtf8("spin_Box_Y"));
        spin_Box_Y->setMaximum(1387);
        spin_Box_Y->setValue(0);

        verticalLayout_2->addWidget(spin_Box_Y);

        horizontal_Slider_Y = new QSlider(verticalLayoutWidget_2);
        horizontal_Slider_Y->setObjectName(QString::fromUtf8("horizontal_Slider_Y"));
        horizontal_Slider_Y->setMaximum(1387);
        horizontal_Slider_Y->setValue(0);
        horizontal_Slider_Y->setOrientation(Qt::Horizontal);

        verticalLayout_2->addWidget(horizontal_Slider_Y);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer);

        toolBox->addItem(movement_Page, QString::fromUtf8("Position"));
        scale_Page = new QWidget();
        scale_Page->setObjectName(QString::fromUtf8("scale_Page"));
        scale_Page->setGeometry(QRect(0, 0, 249, 469));
        verticalLayoutWidget_3 = new QWidget(scale_Page);
        verticalLayoutWidget_3->setObjectName(QString::fromUtf8("verticalLayoutWidget_3"));
        verticalLayoutWidget_3->setGeometry(QRect(10, 10, 231, 471));
        verticalLayout_3 = new QVBoxLayout(verticalLayoutWidget_3);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        radius_Label = new QLabel(verticalLayoutWidget_3);
        radius_Label->setObjectName(QString::fromUtf8("radius_Label"));
        radius_Label->setAlignment(Qt::AlignBottom|Qt::AlignLeading|Qt::AlignLeft);

        verticalLayout_3->addWidget(radius_Label);

        spin_Box_Radius = new QDoubleSpinBox(verticalLayoutWidget_3);
        spin_Box_Radius->setObjectName(QString::fromUtf8("spin_Box_Radius"));
        spin_Box_Radius->setMinimum(50.000000000000000);
        spin_Box_Radius->setMaximum(500.000000000000000);
        spin_Box_Radius->setValue(100.000000000000000);

        verticalLayout_3->addWidget(spin_Box_Radius);

        horizontal_Slider_Radius = new QSlider(verticalLayoutWidget_3);
        horizontal_Slider_Radius->setObjectName(QString::fromUtf8("horizontal_Slider_Radius"));
        horizontal_Slider_Radius->setMinimum(50);
        horizontal_Slider_Radius->setMaximum(500);
        horizontal_Slider_Radius->setValue(100);
        horizontal_Slider_Radius->setOrientation(Qt::Horizontal);

        verticalLayout_3->addWidget(horizontal_Slider_Radius);

        line = new QFrame(verticalLayoutWidget_3);
        line->setObjectName(QString::fromUtf8("line"));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        verticalLayout_3->addWidget(line);

        check_Box_Spherical = new QCheckBox(verticalLayoutWidget_3);
        check_Box_Spherical->setObjectName(QString::fromUtf8("check_Box_Spherical"));
        check_Box_Spherical->setChecked(true);

        verticalLayout_3->addWidget(check_Box_Spherical);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_3->addItem(verticalSpacer_2);

        toolBox->addItem(scale_Page, QString::fromUtf8("Scale"));
        tools_Page = new QWidget();
        tools_Page->setObjectName(QString::fromUtf8("tools_Page"));
        tools_Page->setGeometry(QRect(0, 0, 249, 469));
        verticalLayoutWidget_4 = new QWidget(tools_Page);
        verticalLayoutWidget_4->setObjectName(QString::fromUtf8("verticalLayoutWidget_4"));
        verticalLayoutWidget_4->setGeometry(QRect(10, 10, 231, 471));
        verticalLayout_4 = new QVBoxLayout(verticalLayoutWidget_4);
        verticalLayout_4->setSpacing(4);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        verticalLayout_4->setContentsMargins(0, 0, 0, 0);
        zoom_Label = new QLabel(verticalLayoutWidget_4);
        zoom_Label->setObjectName(QString::fromUtf8("zoom_Label"));

        verticalLayout_4->addWidget(zoom_Label, 0, Qt::AlignBottom);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        zoom_Out_Button = new QPushButton(verticalLayoutWidget_4);
        zoom_Out_Button->setObjectName(QString::fromUtf8("zoom_Out_Button"));

        horizontalLayout_2->addWidget(zoom_Out_Button);

        zoom_In_Button = new QPushButton(verticalLayoutWidget_4);
        zoom_In_Button->setObjectName(QString::fromUtf8("zoom_In_Button"));

        horizontalLayout_2->addWidget(zoom_In_Button);


        verticalLayout_4->addLayout(horizontalLayout_2);

        zoom_Reset_Button = new QPushButton(verticalLayoutWidget_4);
        zoom_Reset_Button->setObjectName(QString::fromUtf8("zoom_Reset_Button"));

        verticalLayout_4->addWidget(zoom_Reset_Button);

        verticalSpacer_4 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_4->addItem(verticalSpacer_4);

        seperator = new QFrame(verticalLayoutWidget_4);
        seperator->setObjectName(QString::fromUtf8("seperator"));
        seperator->setFrameShape(QFrame::HLine);
        seperator->setFrameShadow(QFrame::Sunken);

        verticalLayout_4->addWidget(seperator);

        colour_Label = new QLabel(verticalLayoutWidget_4);
        colour_Label->setObjectName(QString::fromUtf8("colour_Label"));

        verticalLayout_4->addWidget(colour_Label, 0, Qt::AlignBottom);

        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        label_Red = new QLabel(verticalLayoutWidget_4);
        label_Red->setObjectName(QString::fromUtf8("label_Red"));

        verticalLayout_5->addWidget(label_Red);

        horizontal_Scroll_Bar_Red = new QScrollBar(verticalLayoutWidget_4);
        horizontal_Scroll_Bar_Red->setObjectName(QString::fromUtf8("horizontal_Scroll_Bar_Red"));
        horizontal_Scroll_Bar_Red->setAutoFillBackground(false);
        horizontal_Scroll_Bar_Red->setStyleSheet(QString::fromUtf8("QScrollBar:horizontal {\n"
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
        horizontal_Scroll_Bar_Red->setMaximum(255);
        horizontal_Scroll_Bar_Red->setOrientation(Qt::Horizontal);

        verticalLayout_5->addWidget(horizontal_Scroll_Bar_Red);

        label_Green = new QLabel(verticalLayoutWidget_4);
        label_Green->setObjectName(QString::fromUtf8("label_Green"));

        verticalLayout_5->addWidget(label_Green);

        horizontal_Scroll_Bar_Green = new QScrollBar(verticalLayoutWidget_4);
        horizontal_Scroll_Bar_Green->setObjectName(QString::fromUtf8("horizontal_Scroll_Bar_Green"));
        horizontal_Scroll_Bar_Green->setStyleSheet(QString::fromUtf8("QScrollBar:horizontal {\n"
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
        horizontal_Scroll_Bar_Green->setMaximum(255);
        horizontal_Scroll_Bar_Green->setValue(255);
        horizontal_Scroll_Bar_Green->setOrientation(Qt::Horizontal);

        verticalLayout_5->addWidget(horizontal_Scroll_Bar_Green);

        label_Blue = new QLabel(verticalLayoutWidget_4);
        label_Blue->setObjectName(QString::fromUtf8("label_Blue"));

        verticalLayout_5->addWidget(label_Blue);

        horizontal_Scroll_Bar_Blue = new QScrollBar(verticalLayoutWidget_4);
        horizontal_Scroll_Bar_Blue->setObjectName(QString::fromUtf8("horizontal_Scroll_Bar_Blue"));
        horizontal_Scroll_Bar_Blue->setStyleSheet(QString::fromUtf8("QScrollBar:horizontal {\n"
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
        horizontal_Scroll_Bar_Blue->setMaximum(255);
        horizontal_Scroll_Bar_Blue->setOrientation(Qt::Horizontal);

        verticalLayout_5->addWidget(horizontal_Scroll_Bar_Blue);

        colour_Selector_Button = new QToolButton(verticalLayoutWidget_4);
        colour_Selector_Button->setObjectName(QString::fromUtf8("colour_Selector_Button"));

        verticalLayout_5->addWidget(colour_Selector_Button, 0, Qt::AlignRight);


        verticalLayout_4->addLayout(verticalLayout_5);

        verticalSpacer_5 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_4->addItem(verticalSpacer_5);

        seperator_2 = new QFrame(verticalLayoutWidget_4);
        seperator_2->setObjectName(QString::fromUtf8("seperator_2"));
        seperator_2->setFrameShape(QFrame::HLine);
        seperator_2->setFrameShadow(QFrame::Sunken);

        verticalLayout_4->addWidget(seperator_2);

        label_2 = new QLabel(verticalLayoutWidget_4);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        verticalLayout_4->addWidget(label_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_4);

        verticalLayout_6 = new QVBoxLayout();
        verticalLayout_6->setObjectName(QString::fromUtf8("verticalLayout_6"));
        checkBox = new QCheckBox(verticalLayoutWidget_4);
        checkBox->setObjectName(QString::fromUtf8("checkBox"));

        verticalLayout_6->addWidget(checkBox);


        horizontalLayout_3->addLayout(verticalLayout_6);


        verticalLayout_4->addLayout(horizontalLayout_3);

        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_4->addItem(verticalSpacer_3);

        toolBox->addItem(tools_Page, QString::fromUtf8("Tools"));
        images_Page = new QWidget();
        images_Page->setObjectName(QString::fromUtf8("images_Page"));
        images_Page->setGeometry(QRect(0, 0, 249, 469));
        scrollArea_2 = new QScrollArea(images_Page);
        scrollArea_2->setObjectName(QString::fromUtf8("scrollArea_2"));
        scrollArea_2->setGeometry(QRect(10, 0, 231, 271));
        scrollArea_2->setWidgetResizable(true);
        scrollAreaWidgetContents_2 = new QWidget();
        scrollAreaWidgetContents_2->setObjectName(QString::fromUtf8("scrollAreaWidgetContents_2"));
        scrollAreaWidgetContents_2->setGeometry(QRect(0, 0, 229, 269));
        listWidget = new QListWidget(scrollAreaWidgetContents_2);
        listWidget->setObjectName(QString::fromUtf8("listWidget"));
        listWidget->setGeometry(QRect(0, 0, 211, 271));
        listWidget->setEditTriggers(QAbstractItemView::NoEditTriggers);
        listWidget->setDefaultDropAction(Qt::IgnoreAction);
        listWidget->setItemAlignment(Qt::AlignLeading);
        scrollArea_2->setWidget(scrollAreaWidgetContents_2);
        open_Button = new QPushButton(images_Page);
        open_Button->setObjectName(QString::fromUtf8("open_Button"));
        open_Button->setGeometry(QRect(10, 280, 75, 23));
        test_Button = new QPushButton(images_Page);
        test_Button->setObjectName(QString::fromUtf8("test_Button"));
        test_Button->setGeometry(QRect(100, 280, 131, 22));
        toolBox->addItem(images_Page, QString::fromUtf8("Images"));

        verticalLayout->addWidget(toolBox);

        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(1190, 600, 81, 20));
        QFont font1;
        font1.setFamily(QString::fromUtf8("MS Shell Dlg 2"));
        font1.setPointSize(14);
        font1.setBold(false);
        font1.setItalic(false);
        font1.setWeight(9);
        font1.setKerning(true);
        label->setFont(font1);
        label->setStyleSheet(QString::fromUtf8("font: 75 14pt \"MS Shell Dlg 2\";"));
        scrollArea = new QScrollArea(centralwidget);
        scrollArea->setObjectName(QString::fromUtf8("scrollArea"));
        scrollArea->setGeometry(QRect(1, 1, 1171, 841));
        scrollArea->setVerticalScrollBarPolicy(Qt::ScrollBarAsNeeded);
        scrollArea->setHorizontalScrollBarPolicy(Qt::ScrollBarAsNeeded);
        scrollArea->setSizeAdjustPolicy(QAbstractScrollArea::AdjustToContents);
        scrollArea->setWidgetResizable(true);
        scrollArea->setAlignment(Qt::AlignCenter);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QString::fromUtf8("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 1169, 839));
        image_Label = new QLabel(scrollAreaWidgetContents);
        image_Label->setObjectName(QString::fromUtf8("image_Label"));
        image_Label->setGeometry(QRect(0, 0, 1171, 841));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(image_Label->sizePolicy().hasHeightForWidth());
        image_Label->setSizePolicy(sizePolicy);
        image_Label->setFrameShape(QFrame::Panel);
        image_Label->setScaledContents(true);
        image_Label->setAlignment(Qt::AlignCenter);
        scrollArea->setWidget(scrollAreaWidgetContents);
        swap_Button = new QToolButton(centralwidget);
        swap_Button->setObjectName(QString::fromUtf8("swap_Button"));
        swap_Button->setGeometry(QRect(1180, 550, 41, 41));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/noun_swap_99117.png"), QSize(), QIcon::Normal, QIcon::On);
        swap_Button->setIcon(icon);
        swap_Button->setIconSize(QSize(40, 40));
        horizontalLayoutWidget = new QWidget(centralwidget);
        horizontalLayoutWidget->setObjectName(QString::fromUtf8("horizontalLayoutWidget"));
        horizontalLayoutWidget->setGeometry(QRect(1190, 620, 391, 221));
        horizontalLayout = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        preivew_Label = new QLabel(horizontalLayoutWidget);
        preivew_Label->setObjectName(QString::fromUtf8("preivew_Label"));
        sizePolicy.setHeightForWidth(preivew_Label->sizePolicy().hasHeightForWidth());
        preivew_Label->setSizePolicy(sizePolicy);
        preivew_Label->setMinimumSize(QSize(219, 219));
        preivew_Label->setMaximumSize(QSize(389, 219));
        preivew_Label->setFrameShape(QFrame::Panel);
        preivew_Label->setFrameShadow(QFrame::Plain);
        preivew_Label->setLineWidth(1);
        preivew_Label->setText(QString::fromUtf8(""));
        preivew_Label->setScaledContents(true);

        horizontalLayout->addWidget(preivew_Label);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);

        marble_Detection->setCentralWidget(centralwidget);
        menubar = new QMenuBar(marble_Detection);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 1600, 27));
        marble_Detection->setMenuBar(menubar);
        statusbar = new QStatusBar(marble_Detection);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        marble_Detection->setStatusBar(statusbar);

        retranslateUi(marble_Detection);

        toolBox->setCurrentIndex(3);


        QMetaObject::connectSlotsByName(marble_Detection);
    } // setupUi

    void retranslateUi(QMainWindow *marble_Detection)
    {
        marble_Detection->setWindowTitle(QCoreApplication::translate("marble_Detection", "Marble Detection", nullptr));
        label_X->setText(QCoreApplication::translate("marble_Detection", "X Position:", nullptr));
#if QT_CONFIG(tooltip)
        spin_Box_X->setToolTip(QCoreApplication::translate("marble_Detection", "X Value of Sphere", nullptr));
#endif // QT_CONFIG(tooltip)
        label_Y->setText(QCoreApplication::translate("marble_Detection", "Y Position:", nullptr));
        toolBox->setItemText(toolBox->indexOf(movement_Page), QCoreApplication::translate("marble_Detection", "Position", nullptr));
        radius_Label->setText(QCoreApplication::translate("marble_Detection", "Radius", nullptr));
#if QT_CONFIG(tooltip)
        spin_Box_Radius->setToolTip(QCoreApplication::translate("marble_Detection", "Selecter for Radius of Sphere", nullptr));
#endif // QT_CONFIG(tooltip)
        check_Box_Spherical->setText(QCoreApplication::translate("marble_Detection", "Force Circular?", nullptr));
        toolBox->setItemText(toolBox->indexOf(scale_Page), QCoreApplication::translate("marble_Detection", "Scale", nullptr));
        zoom_Label->setText(QCoreApplication::translate("marble_Detection", "Zoom:", nullptr));
        zoom_Out_Button->setText(QCoreApplication::translate("marble_Detection", "Zoom Out", nullptr));
        zoom_In_Button->setText(QCoreApplication::translate("marble_Detection", "Zoom In", nullptr));
        zoom_Reset_Button->setText(QCoreApplication::translate("marble_Detection", "Reset", nullptr));
        colour_Label->setText(QCoreApplication::translate("marble_Detection", "Marker Colour:", nullptr));
        label_Red->setText(QCoreApplication::translate("marble_Detection", "   Red:", nullptr));
        label_Green->setText(QCoreApplication::translate("marble_Detection", "   Green:", nullptr));
        label_Blue->setText(QCoreApplication::translate("marble_Detection", "   Blue:", nullptr));
        colour_Selector_Button->setText(QCoreApplication::translate("marble_Detection", "...", nullptr));
        label_2->setText(QCoreApplication::translate("marble_Detection", "Image Manipulation:", nullptr));
        checkBox->setText(QCoreApplication::translate("marble_Detection", "Average Images", nullptr));
        toolBox->setItemText(toolBox->indexOf(tools_Page), QCoreApplication::translate("marble_Detection", "Tools", nullptr));
        open_Button->setText(QCoreApplication::translate("marble_Detection", "Open", nullptr));
        test_Button->setText(QCoreApplication::translate("marble_Detection", "Run Marble Detection", nullptr));
        toolBox->setItemText(toolBox->indexOf(images_Page), QCoreApplication::translate("marble_Detection", "Images", nullptr));
        label->setText(QCoreApplication::translate("marble_Detection", "Preview:", nullptr));
        image_Label->setText(QString());
        swap_Button->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class marble_Detection: public Ui_marble_Detection {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MARBLE_DETECTION_H
