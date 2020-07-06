/********************************************************************************
** Form generated from reading UI file 'marble_Detection.ui'
**
** Created by: Qt User Interface Compiler version 5.9.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MARBLE_DETECTION_H
#define UI_MARBLE_DETECTION_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGraphicsView>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
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
    QHBoxLayout *horizontalLayout_4;
    QGraphicsView *marbleGraphicView;
    QWidget *sidebarContainerWidget;
    QHBoxLayout *horizontalLayout;
    QFrame *line_2;
    QVBoxLayout *sidebarLayout;
    QHBoxLayout *UpperLayout;
    QVBoxLayout *PreviewSwapLayout;
    QSpacerItem *verticalSpacer_6;
    QToolButton *swap_Button;
    QLabel *Preview;
    QSpacerItem *horizontalSpacer_3;
    QToolBox *toolBox;
    QWidget *marble_Page;
    QVBoxLayout *verticalLayout_8;
    QVBoxLayout *verticalLayout;
    QScrollArea *scrollArea_3;
    QWidget *scrollAreaWidgetContents_3;
    QVBoxLayout *verticalLayout_7;
    QListWidget *listWidget_2;
    QHBoxLayout *horizontalLayout_5;
    QPushButton *add_Marble_Button;
    QPushButton *remove_Marble_Button;
    QWidget *movement_Page;
    QVBoxLayout *verticalLayout_12;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_X;
    QSpinBox *spin_Box_X;
    QSlider *horizontal_Slider_X;
    QLabel *label_Y;
    QSpinBox *spin_Box_Y;
    QSlider *horizontal_Slider_Y;
    QSpacerItem *verticalSpacer;
    QWidget *scale_Page;
    QVBoxLayout *verticalLayout_13;
    QVBoxLayout *verticalLayout_3;
    QLabel *radius_Label;
    QDoubleSpinBox *spin_Box_Radius;
    QSlider *horizontal_Slider_Radius;
    QFrame *line;
    QCheckBox *check_Box_Spherical;
    QSpacerItem *verticalSpacer_2;
    QWidget *tools_Page;
    QVBoxLayout *verticalLayout_11;
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
    QWidget *images_Page;
    QVBoxLayout *verticalLayout_9;
    QScrollArea *scrollArea_2;
    QWidget *scrollAreaWidgetContents_2;
    QVBoxLayout *verticalLayout_10;
    QListWidget *listWidget;
    QPushButton *test_Button;
    QPushButton *open_Button;
    QVBoxLayout *ToolboxLayout;
    QHBoxLayout *previewLayout;
    QSpacerItem *horizontalSpacer;
    QLabel *preivew_Label;
    QSpacerItem *horizontalSpacer_2;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *marble_Detection)
    {
        if (marble_Detection->objectName().isEmpty())
            marble_Detection->setObjectName(QStringLiteral("marble_Detection"));
        marble_Detection->resize(1463, 954);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(marble_Detection->sizePolicy().hasHeightForWidth());
        marble_Detection->setSizePolicy(sizePolicy);
        marble_Detection->setStyleSheet(QLatin1String("color: rgb(0, 0, 0);\n"
"font: 75 10pt \"MS Shell Dlg 2\";\n"
""));
        centralwidget = new QWidget(marble_Detection);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        horizontalLayout_4 = new QHBoxLayout(centralwidget);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        marbleGraphicView = new QGraphicsView(centralwidget);
        marbleGraphicView->setObjectName(QStringLiteral("marbleGraphicView"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(marbleGraphicView->sizePolicy().hasHeightForWidth());
        marbleGraphicView->setSizePolicy(sizePolicy1);

        horizontalLayout_4->addWidget(marbleGraphicView);

        sidebarContainerWidget = new QWidget(centralwidget);
        sidebarContainerWidget->setObjectName(QStringLiteral("sidebarContainerWidget"));
        QSizePolicy sizePolicy2(QSizePolicy::Maximum, QSizePolicy::Expanding);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(sidebarContainerWidget->sizePolicy().hasHeightForWidth());
        sidebarContainerWidget->setSizePolicy(sizePolicy2);
        horizontalLayout = new QHBoxLayout(sidebarContainerWidget);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        line_2 = new QFrame(sidebarContainerWidget);
        line_2->setObjectName(QStringLiteral("line_2"));
        line_2->setFrameShape(QFrame::VLine);
        line_2->setFrameShadow(QFrame::Sunken);

        horizontalLayout->addWidget(line_2);

        sidebarLayout = new QVBoxLayout();
        sidebarLayout->setObjectName(QStringLiteral("sidebarLayout"));
        sidebarLayout->setSizeConstraint(QLayout::SetMaximumSize);
        UpperLayout = new QHBoxLayout();
        UpperLayout->setObjectName(QStringLiteral("UpperLayout"));
        PreviewSwapLayout = new QVBoxLayout();
        PreviewSwapLayout->setObjectName(QStringLiteral("PreviewSwapLayout"));
        verticalSpacer_6 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        PreviewSwapLayout->addItem(verticalSpacer_6);

        swap_Button = new QToolButton(sidebarContainerWidget);
        swap_Button->setObjectName(QStringLiteral("swap_Button"));
        QIcon icon;
        icon.addFile(QStringLiteral(":/noun_swap_99117.png"), QSize(), QIcon::Normal, QIcon::On);
        swap_Button->setIcon(icon);
        swap_Button->setIconSize(QSize(40, 40));

        PreviewSwapLayout->addWidget(swap_Button);

        Preview = new QLabel(sidebarContainerWidget);
        Preview->setObjectName(QStringLiteral("Preview"));
        QFont font;
        font.setFamily(QStringLiteral("MS Shell Dlg 2"));
        font.setPointSize(14);
        font.setBold(false);
        font.setItalic(false);
        font.setWeight(9);
        font.setKerning(true);
        Preview->setFont(font);
        Preview->setStyleSheet(QStringLiteral("font: 75 14pt \"MS Shell Dlg 2\";"));

        PreviewSwapLayout->addWidget(Preview);


        UpperLayout->addLayout(PreviewSwapLayout);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Preferred, QSizePolicy::Minimum);

        UpperLayout->addItem(horizontalSpacer_3);

        toolBox = new QToolBox(sidebarContainerWidget);
        toolBox->setObjectName(QStringLiteral("toolBox"));
        QFont font1;
        font1.setFamily(QStringLiteral("MS Shell Dlg 2"));
        font1.setPointSize(10);
        font1.setBold(false);
        font1.setItalic(false);
        font1.setWeight(9);
        toolBox->setFont(font1);
        toolBox->setStyleSheet(QLatin1String("QToolBox::tab {\n"
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
"QToolBox::tab:selected {\n"
"    font: italic;\n"
"    color: white;\n"
"}*/"));
        marble_Page = new QWidget();
        marble_Page->setObjectName(QStringLiteral("marble_Page"));
        marble_Page->setGeometry(QRect(0, 0, 249, 488));
        verticalLayout_8 = new QVBoxLayout(marble_Page);
        verticalLayout_8->setObjectName(QStringLiteral("verticalLayout_8"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        scrollArea_3 = new QScrollArea(marble_Page);
        scrollArea_3->setObjectName(QStringLiteral("scrollArea_3"));
        scrollArea_3->setWidgetResizable(true);
        scrollAreaWidgetContents_3 = new QWidget();
        scrollAreaWidgetContents_3->setObjectName(QStringLiteral("scrollAreaWidgetContents_3"));
        scrollAreaWidgetContents_3->setGeometry(QRect(0, 0, 227, 433));
        verticalLayout_7 = new QVBoxLayout(scrollAreaWidgetContents_3);
        verticalLayout_7->setObjectName(QStringLiteral("verticalLayout_7"));
        listWidget_2 = new QListWidget(scrollAreaWidgetContents_3);
        listWidget_2->setObjectName(QStringLiteral("listWidget_2"));
        listWidget_2->setEditTriggers(QAbstractItemView::NoEditTriggers);
        listWidget_2->setDefaultDropAction(Qt::IgnoreAction);

        verticalLayout_7->addWidget(listWidget_2);

        scrollArea_3->setWidget(scrollAreaWidgetContents_3);

        verticalLayout->addWidget(scrollArea_3);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        add_Marble_Button = new QPushButton(marble_Page);
        add_Marble_Button->setObjectName(QStringLiteral("add_Marble_Button"));

        horizontalLayout_5->addWidget(add_Marble_Button);

        remove_Marble_Button = new QPushButton(marble_Page);
        remove_Marble_Button->setObjectName(QStringLiteral("remove_Marble_Button"));
        remove_Marble_Button->setEnabled(false);

        horizontalLayout_5->addWidget(remove_Marble_Button);


        verticalLayout->addLayout(horizontalLayout_5);


        verticalLayout_8->addLayout(verticalLayout);

        toolBox->addItem(marble_Page, QStringLiteral("Marbles"));
        movement_Page = new QWidget();
        movement_Page->setObjectName(QStringLiteral("movement_Page"));
        movement_Page->setGeometry(QRect(0, 0, 249, 488));
        verticalLayout_12 = new QVBoxLayout(movement_Page);
        verticalLayout_12->setObjectName(QStringLiteral("verticalLayout_12"));
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        label_X = new QLabel(movement_Page);
        label_X->setObjectName(QStringLiteral("label_X"));
        label_X->setFont(font1);
        label_X->setAlignment(Qt::AlignBottom|Qt::AlignLeading|Qt::AlignLeft);

        verticalLayout_2->addWidget(label_X);

        spin_Box_X = new QSpinBox(movement_Page);
        spin_Box_X->setObjectName(QStringLiteral("spin_Box_X"));
        spin_Box_X->setMaximum(2088);
        spin_Box_X->setValue(0);

        verticalLayout_2->addWidget(spin_Box_X);

        horizontal_Slider_X = new QSlider(movement_Page);
        horizontal_Slider_X->setObjectName(QStringLiteral("horizontal_Slider_X"));
        horizontal_Slider_X->setMaximum(2088);
        horizontal_Slider_X->setValue(0);
        horizontal_Slider_X->setSliderPosition(0);
        horizontal_Slider_X->setOrientation(Qt::Horizontal);

        verticalLayout_2->addWidget(horizontal_Slider_X);

        label_Y = new QLabel(movement_Page);
        label_Y->setObjectName(QStringLiteral("label_Y"));
        label_Y->setEnabled(true);
        label_Y->setFont(font1);
        label_Y->setAlignment(Qt::AlignBottom|Qt::AlignLeading|Qt::AlignLeft);

        verticalLayout_2->addWidget(label_Y);

        spin_Box_Y = new QSpinBox(movement_Page);
        spin_Box_Y->setObjectName(QStringLiteral("spin_Box_Y"));
        spin_Box_Y->setMaximum(1387);
        spin_Box_Y->setValue(0);

        verticalLayout_2->addWidget(spin_Box_Y);

        horizontal_Slider_Y = new QSlider(movement_Page);
        horizontal_Slider_Y->setObjectName(QStringLiteral("horizontal_Slider_Y"));
        horizontal_Slider_Y->setMaximum(1387);
        horizontal_Slider_Y->setValue(0);
        horizontal_Slider_Y->setOrientation(Qt::Horizontal);

        verticalLayout_2->addWidget(horizontal_Slider_Y);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer);


        verticalLayout_12->addLayout(verticalLayout_2);

        toolBox->addItem(movement_Page, QStringLiteral("Position"));
        scale_Page = new QWidget();
        scale_Page->setObjectName(QStringLiteral("scale_Page"));
        scale_Page->setGeometry(QRect(0, 0, 249, 488));
        verticalLayout_13 = new QVBoxLayout(scale_Page);
        verticalLayout_13->setObjectName(QStringLiteral("verticalLayout_13"));
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        radius_Label = new QLabel(scale_Page);
        radius_Label->setObjectName(QStringLiteral("radius_Label"));
        radius_Label->setAlignment(Qt::AlignBottom|Qt::AlignLeading|Qt::AlignLeft);

        verticalLayout_3->addWidget(radius_Label);

        spin_Box_Radius = new QDoubleSpinBox(scale_Page);
        spin_Box_Radius->setObjectName(QStringLiteral("spin_Box_Radius"));
        spin_Box_Radius->setMinimum(50);
        spin_Box_Radius->setMaximum(500);
        spin_Box_Radius->setValue(100);

        verticalLayout_3->addWidget(spin_Box_Radius);

        horizontal_Slider_Radius = new QSlider(scale_Page);
        horizontal_Slider_Radius->setObjectName(QStringLiteral("horizontal_Slider_Radius"));
        horizontal_Slider_Radius->setMinimum(50);
        horizontal_Slider_Radius->setMaximum(500);
        horizontal_Slider_Radius->setValue(100);
        horizontal_Slider_Radius->setOrientation(Qt::Horizontal);

        verticalLayout_3->addWidget(horizontal_Slider_Radius);

        line = new QFrame(scale_Page);
        line->setObjectName(QStringLiteral("line"));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        verticalLayout_3->addWidget(line);

        check_Box_Spherical = new QCheckBox(scale_Page);
        check_Box_Spherical->setObjectName(QStringLiteral("check_Box_Spherical"));
        check_Box_Spherical->setChecked(true);

        verticalLayout_3->addWidget(check_Box_Spherical);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_3->addItem(verticalSpacer_2);


        verticalLayout_13->addLayout(verticalLayout_3);

        toolBox->addItem(scale_Page, QStringLiteral("Scale"));
        tools_Page = new QWidget();
        tools_Page->setObjectName(QStringLiteral("tools_Page"));
        tools_Page->setGeometry(QRect(0, 0, 249, 488));
        verticalLayout_11 = new QVBoxLayout(tools_Page);
        verticalLayout_11->setObjectName(QStringLiteral("verticalLayout_11"));
        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setSpacing(4);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        zoom_Label = new QLabel(tools_Page);
        zoom_Label->setObjectName(QStringLiteral("zoom_Label"));

        verticalLayout_4->addWidget(zoom_Label, 0, Qt::AlignBottom);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        zoom_Out_Button = new QPushButton(tools_Page);
        zoom_Out_Button->setObjectName(QStringLiteral("zoom_Out_Button"));

        horizontalLayout_2->addWidget(zoom_Out_Button);

        zoom_In_Button = new QPushButton(tools_Page);
        zoom_In_Button->setObjectName(QStringLiteral("zoom_In_Button"));

        horizontalLayout_2->addWidget(zoom_In_Button);


        verticalLayout_4->addLayout(horizontalLayout_2);

        zoom_Reset_Button = new QPushButton(tools_Page);
        zoom_Reset_Button->setObjectName(QStringLiteral("zoom_Reset_Button"));

        verticalLayout_4->addWidget(zoom_Reset_Button);

        verticalSpacer_4 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_4->addItem(verticalSpacer_4);

        seperator = new QFrame(tools_Page);
        seperator->setObjectName(QStringLiteral("seperator"));
        seperator->setFrameShape(QFrame::HLine);
        seperator->setFrameShadow(QFrame::Sunken);

        verticalLayout_4->addWidget(seperator);

        colour_Label = new QLabel(tools_Page);
        colour_Label->setObjectName(QStringLiteral("colour_Label"));

        verticalLayout_4->addWidget(colour_Label, 0, Qt::AlignBottom);

        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setObjectName(QStringLiteral("verticalLayout_5"));
        label_Red = new QLabel(tools_Page);
        label_Red->setObjectName(QStringLiteral("label_Red"));

        verticalLayout_5->addWidget(label_Red);

        horizontal_Scroll_Bar_Red = new QScrollBar(tools_Page);
        horizontal_Scroll_Bar_Red->setObjectName(QStringLiteral("horizontal_Scroll_Bar_Red"));
        horizontal_Scroll_Bar_Red->setAutoFillBackground(false);
        horizontal_Scroll_Bar_Red->setStyleSheet(QLatin1String("QScrollBar:horizontal {\n"
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

        label_Green = new QLabel(tools_Page);
        label_Green->setObjectName(QStringLiteral("label_Green"));

        verticalLayout_5->addWidget(label_Green);

        horizontal_Scroll_Bar_Green = new QScrollBar(tools_Page);
        horizontal_Scroll_Bar_Green->setObjectName(QStringLiteral("horizontal_Scroll_Bar_Green"));
        horizontal_Scroll_Bar_Green->setStyleSheet(QLatin1String("QScrollBar:horizontal {\n"
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

        label_Blue = new QLabel(tools_Page);
        label_Blue->setObjectName(QStringLiteral("label_Blue"));

        verticalLayout_5->addWidget(label_Blue);

        horizontal_Scroll_Bar_Blue = new QScrollBar(tools_Page);
        horizontal_Scroll_Bar_Blue->setObjectName(QStringLiteral("horizontal_Scroll_Bar_Blue"));
        horizontal_Scroll_Bar_Blue->setStyleSheet(QLatin1String("QScrollBar:horizontal {\n"
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

        colour_Selector_Button = new QToolButton(tools_Page);
        colour_Selector_Button->setObjectName(QStringLiteral("colour_Selector_Button"));

        verticalLayout_5->addWidget(colour_Selector_Button, 0, Qt::AlignRight);


        verticalLayout_4->addLayout(verticalLayout_5);

        verticalSpacer_5 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_4->addItem(verticalSpacer_5);

        seperator_2 = new QFrame(tools_Page);
        seperator_2->setObjectName(QStringLiteral("seperator_2"));
        seperator_2->setFrameShape(QFrame::HLine);
        seperator_2->setFrameShadow(QFrame::Sunken);

        verticalLayout_4->addWidget(seperator_2);

        label_2 = new QLabel(tools_Page);
        label_2->setObjectName(QStringLiteral("label_2"));

        verticalLayout_4->addWidget(label_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_4);

        verticalLayout_6 = new QVBoxLayout();
        verticalLayout_6->setObjectName(QStringLiteral("verticalLayout_6"));
        checkBox = new QCheckBox(tools_Page);
        checkBox->setObjectName(QStringLiteral("checkBox"));

        verticalLayout_6->addWidget(checkBox);


        horizontalLayout_3->addLayout(verticalLayout_6);


        verticalLayout_4->addLayout(horizontalLayout_3);


        verticalLayout_11->addLayout(verticalLayout_4);

        toolBox->addItem(tools_Page, QStringLiteral("Tools"));
        images_Page = new QWidget();
        images_Page->setObjectName(QStringLiteral("images_Page"));
        images_Page->setGeometry(QRect(0, 0, 249, 488));
        verticalLayout_9 = new QVBoxLayout(images_Page);
        verticalLayout_9->setObjectName(QStringLiteral("verticalLayout_9"));
        scrollArea_2 = new QScrollArea(images_Page);
        scrollArea_2->setObjectName(QStringLiteral("scrollArea_2"));
        scrollArea_2->setWidgetResizable(true);
        scrollAreaWidgetContents_2 = new QWidget();
        scrollAreaWidgetContents_2->setObjectName(QStringLiteral("scrollAreaWidgetContents_2"));
        scrollAreaWidgetContents_2->setGeometry(QRect(0, 0, 229, 406));
        verticalLayout_10 = new QVBoxLayout(scrollAreaWidgetContents_2);
        verticalLayout_10->setObjectName(QStringLiteral("verticalLayout_10"));
        listWidget = new QListWidget(scrollAreaWidgetContents_2);
        listWidget->setObjectName(QStringLiteral("listWidget"));
        listWidget->setEditTriggers(QAbstractItemView::NoEditTriggers);
        listWidget->setDefaultDropAction(Qt::IgnoreAction);

        verticalLayout_10->addWidget(listWidget);

        scrollArea_2->setWidget(scrollAreaWidgetContents_2);

        verticalLayout_9->addWidget(scrollArea_2);

        test_Button = new QPushButton(images_Page);
        test_Button->setObjectName(QStringLiteral("test_Button"));

        verticalLayout_9->addWidget(test_Button);

        open_Button = new QPushButton(images_Page);
        open_Button->setObjectName(QStringLiteral("open_Button"));

        verticalLayout_9->addWidget(open_Button);

        toolBox->addItem(images_Page, QStringLiteral("Images"));

        UpperLayout->addWidget(toolBox);

        ToolboxLayout = new QVBoxLayout();
        ToolboxLayout->setObjectName(QStringLiteral("ToolboxLayout"));

        UpperLayout->addLayout(ToolboxLayout);


        sidebarLayout->addLayout(UpperLayout);

        previewLayout = new QHBoxLayout();
        previewLayout->setObjectName(QStringLiteral("previewLayout"));
        horizontalSpacer = new QSpacerItem(80, 20, QSizePolicy::Minimum, QSizePolicy::Minimum);

        previewLayout->addItem(horizontalSpacer);

        preivew_Label = new QLabel(sidebarContainerWidget);
        preivew_Label->setObjectName(QStringLiteral("preivew_Label"));
        QSizePolicy sizePolicy3(QSizePolicy::Maximum, QSizePolicy::Preferred);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(preivew_Label->sizePolicy().hasHeightForWidth());
        preivew_Label->setSizePolicy(sizePolicy3);
        preivew_Label->setMinimumSize(QSize(219, 219));
        preivew_Label->setMaximumSize(QSize(389, 219));
        preivew_Label->setFrameShape(QFrame::Panel);
        preivew_Label->setFrameShadow(QFrame::Plain);
        preivew_Label->setLineWidth(1);
        preivew_Label->setText(QStringLiteral(""));
        preivew_Label->setScaledContents(true);

        previewLayout->addWidget(preivew_Label);

        horizontalSpacer_2 = new QSpacerItem(80, 20, QSizePolicy::Minimum, QSizePolicy::Minimum);

        previewLayout->addItem(horizontalSpacer_2);


        sidebarLayout->addLayout(previewLayout);


        horizontalLayout->addLayout(sidebarLayout);


        horizontalLayout_4->addWidget(sidebarContainerWidget);

        marble_Detection->setCentralWidget(centralwidget);
        menubar = new QMenuBar(marble_Detection);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 1463, 22));
        marble_Detection->setMenuBar(menubar);
        statusbar = new QStatusBar(marble_Detection);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        marble_Detection->setStatusBar(statusbar);

        retranslateUi(marble_Detection);

        toolBox->setCurrentIndex(4);


        QMetaObject::connectSlotsByName(marble_Detection);
    } // setupUi

    void retranslateUi(QMainWindow *marble_Detection)
    {
        marble_Detection->setWindowTitle(QApplication::translate("marble_Detection", "Marble Detection", Q_NULLPTR));
        swap_Button->setText(QString());
        Preview->setText(QApplication::translate("marble_Detection", "Preview:", Q_NULLPTR));
        add_Marble_Button->setText(QApplication::translate("marble_Detection", "Add Marble", Q_NULLPTR));
        remove_Marble_Button->setText(QApplication::translate("marble_Detection", "Remove Marble", Q_NULLPTR));
        toolBox->setItemText(toolBox->indexOf(marble_Page), QApplication::translate("marble_Detection", "Marbles", Q_NULLPTR));
        label_X->setText(QApplication::translate("marble_Detection", "X Position:", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        spin_Box_X->setToolTip(QApplication::translate("marble_Detection", "X Value of Sphere", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        label_Y->setText(QApplication::translate("marble_Detection", "Y Position:", Q_NULLPTR));
        toolBox->setItemText(toolBox->indexOf(movement_Page), QApplication::translate("marble_Detection", "Position", Q_NULLPTR));
        radius_Label->setText(QApplication::translate("marble_Detection", "Radius", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        spin_Box_Radius->setToolTip(QApplication::translate("marble_Detection", "Selecter for Radius of Sphere", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        check_Box_Spherical->setText(QApplication::translate("marble_Detection", "Force Circular?", Q_NULLPTR));
        toolBox->setItemText(toolBox->indexOf(scale_Page), QApplication::translate("marble_Detection", "Scale", Q_NULLPTR));
        zoom_Label->setText(QApplication::translate("marble_Detection", "Zoom:", Q_NULLPTR));
        zoom_Out_Button->setText(QApplication::translate("marble_Detection", "Zoom Out", Q_NULLPTR));
        zoom_In_Button->setText(QApplication::translate("marble_Detection", "Zoom In", Q_NULLPTR));
        zoom_Reset_Button->setText(QApplication::translate("marble_Detection", "Reset", Q_NULLPTR));
        colour_Label->setText(QApplication::translate("marble_Detection", "Marker Colour:", Q_NULLPTR));
        label_Red->setText(QApplication::translate("marble_Detection", "   Red:", Q_NULLPTR));
        label_Green->setText(QApplication::translate("marble_Detection", "   Green:", Q_NULLPTR));
        label_Blue->setText(QApplication::translate("marble_Detection", "   Blue:", Q_NULLPTR));
        colour_Selector_Button->setText(QApplication::translate("marble_Detection", "...", Q_NULLPTR));
        label_2->setText(QApplication::translate("marble_Detection", "Image Manipulation:", Q_NULLPTR));
        checkBox->setText(QApplication::translate("marble_Detection", "Average Images", Q_NULLPTR));
        toolBox->setItemText(toolBox->indexOf(tools_Page), QApplication::translate("marble_Detection", "Tools", Q_NULLPTR));
        test_Button->setText(QApplication::translate("marble_Detection", "Run Marble Detection", Q_NULLPTR));
        open_Button->setText(QApplication::translate("marble_Detection", "Open", Q_NULLPTR));
        toolBox->setItemText(toolBox->indexOf(images_Page), QApplication::translate("marble_Detection", "Images", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class marble_Detection: public Ui_marble_Detection {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MARBLE_DETECTION_H
