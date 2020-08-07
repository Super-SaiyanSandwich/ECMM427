/********************************************************************************
** Form generated from reading UI file 'crop_Widget.ui'
**
** Created by: Qt User Interface Compiler version 5.9.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CROP_WIDGET_H
#define UI_CROP_WIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGraphicsView>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QScrollBar>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QSplitter>
#include <QtWidgets/QToolBox>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_crop_Widget
{
public:
    QGridLayout *gridLayout_3;
    QVBoxLayout *verticalLayout;
    QSplitter *splitter_2;
    QWidget *layoutWidget;
    QGridLayout *gridLayout;
    QLabel *image_Name;
    QGraphicsView *image_Graphics_View;
    QCheckBox *apply_all;
    QSplitter *splitter_5;
    QPushButton *crop_btn;
    QPushButton *cancel_btn;
    QWidget *widget_3;
    QVBoxLayout *verticalLayout_12;
    QVBoxLayout *verticalLayout_8;
    QToolBox *toolBox_2;
    QWidget *movement_Page_2;
    QGridLayout *gridLayout_4;
    QLabel *label_X_2;
    QSpinBox *spin_Box_X_2;
    QSlider *horizontal_Slider_X_2;
    QLabel *label_Y_2;
    QSpinBox *spin_Box_Y_2;
    QSlider *horizontal_Slider_Y_2;
    QWidget *scale_Page_2;
    QGridLayout *gridLayout_5;
    QFrame *line_2;
    QLabel *radius_Label_2;
    QSlider *horizontal_Slider_Width;
    QDoubleSpinBox *spin_Box_Width;
    QLabel *radius_Label_3;
    QSlider *horizontal_Slider_Height;
    QDoubleSpinBox *spin_Box_Height;
    QWidget *tools_Page_2;
    QVBoxLayout *verticalLayout_10;
    QLabel *zoom_Label_2;
    QPushButton *zoom_In_Button_2;
    QPushButton *zoom_Out_Button_2;
    QPushButton *zoom_Reset_Button_2;
    QFrame *seperator_3;
    QLabel *colour_Label_2;
    QLabel *label_Red_2;
    QScrollBar *horizontal_Scroll_Bar_Red_2;
    QLabel *label_Green_2;
    QScrollBar *horizontal_Scroll_Bar_Green_2;
    QLabel *label_Blue_2;
    QScrollBar *horizontal_Scroll_Bar_Blue_2;
    QToolButton *colour_Selector_Button_2;
    QWidget *images_Page_2;
    QSplitter *splitter_3;
    QLabel *label;
    QScrollArea *scrollArea_3;
    QWidget *scrollAreaWidgetContents_3;
    QGridLayout *gridLayout_2;
    QListWidget *work_Images;
    QSplitter *splitter;
    QLabel *label_3;
    QGraphicsView *preview_Graphics_View;

    void setupUi(QWidget *crop_Widget)
    {
        if (crop_Widget->objectName().isEmpty())
            crop_Widget->setObjectName(QStringLiteral("crop_Widget"));
        crop_Widget->resize(934, 836);
        QSizePolicy sizePolicy(QSizePolicy::MinimumExpanding, QSizePolicy::Maximum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(crop_Widget->sizePolicy().hasHeightForWidth());
        crop_Widget->setSizePolicy(sizePolicy);
        crop_Widget->setMinimumSize(QSize(0, 717));
        gridLayout_3 = new QGridLayout(crop_Widget);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        splitter_2 = new QSplitter(crop_Widget);
        splitter_2->setObjectName(QStringLiteral("splitter_2"));
        splitter_2->setOrientation(Qt::Vertical);
        layoutWidget = new QWidget(splitter_2);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        gridLayout = new QGridLayout(layoutWidget);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        image_Name = new QLabel(layoutWidget);
        image_Name->setObjectName(QStringLiteral("image_Name"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(image_Name->sizePolicy().hasHeightForWidth());
        image_Name->setSizePolicy(sizePolicy1);
        QFont font;
        font.setPointSize(12);
        font.setBold(true);
        font.setItalic(true);
        font.setWeight(75);
        image_Name->setFont(font);
        image_Name->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(image_Name, 0, 0, 1, 1);

        image_Graphics_View = new QGraphicsView(layoutWidget);
        image_Graphics_View->setObjectName(QStringLiteral("image_Graphics_View"));
        QSizePolicy sizePolicy2(QSizePolicy::MinimumExpanding, QSizePolicy::Expanding);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(image_Graphics_View->sizePolicy().hasHeightForWidth());
        image_Graphics_View->setSizePolicy(sizePolicy2);
        image_Graphics_View->setAcceptDrops(true);
        image_Graphics_View->setAutoFillBackground(false);
        image_Graphics_View->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        image_Graphics_View->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        QBrush brush(QColor(0, 0, 0, 255));
        brush.setStyle(Qt::SolidPattern);
        image_Graphics_View->setBackgroundBrush(brush);

        gridLayout->addWidget(image_Graphics_View, 1, 0, 1, 1);

        splitter_2->addWidget(layoutWidget);

        verticalLayout->addWidget(splitter_2);

        apply_all = new QCheckBox(crop_Widget);
        apply_all->setObjectName(QStringLiteral("apply_all"));
        QSizePolicy sizePolicy3(QSizePolicy::MinimumExpanding, QSizePolicy::Minimum);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(apply_all->sizePolicy().hasHeightForWidth());
        apply_all->setSizePolicy(sizePolicy3);
        apply_all->setMaximumSize(QSize(16777215, 60));
        apply_all->setChecked(false);

        verticalLayout->addWidget(apply_all);

        splitter_5 = new QSplitter(crop_Widget);
        splitter_5->setObjectName(QStringLiteral("splitter_5"));
        sizePolicy.setHeightForWidth(splitter_5->sizePolicy().hasHeightForWidth());
        splitter_5->setSizePolicy(sizePolicy);
        splitter_5->setOrientation(Qt::Horizontal);
        crop_btn = new QPushButton(splitter_5);
        crop_btn->setObjectName(QStringLiteral("crop_btn"));
        QSizePolicy sizePolicy4(QSizePolicy::MinimumExpanding, QSizePolicy::MinimumExpanding);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(crop_btn->sizePolicy().hasHeightForWidth());
        crop_btn->setSizePolicy(sizePolicy4);
        splitter_5->addWidget(crop_btn);
        cancel_btn = new QPushButton(splitter_5);
        cancel_btn->setObjectName(QStringLiteral("cancel_btn"));
        sizePolicy4.setHeightForWidth(cancel_btn->sizePolicy().hasHeightForWidth());
        cancel_btn->setSizePolicy(sizePolicy4);
        cancel_btn->setMinimumSize(QSize(0, 0));
        splitter_5->addWidget(cancel_btn);

        verticalLayout->addWidget(splitter_5);


        gridLayout_3->addLayout(verticalLayout, 0, 0, 1, 1);

        widget_3 = new QWidget(crop_Widget);
        widget_3->setObjectName(QStringLiteral("widget_3"));
        QSizePolicy sizePolicy5(QSizePolicy::Maximum, QSizePolicy::MinimumExpanding);
        sizePolicy5.setHorizontalStretch(0);
        sizePolicy5.setVerticalStretch(0);
        sizePolicy5.setHeightForWidth(widget_3->sizePolicy().hasHeightForWidth());
        widget_3->setSizePolicy(sizePolicy5);
        verticalLayout_12 = new QVBoxLayout(widget_3);
        verticalLayout_12->setObjectName(QStringLiteral("verticalLayout_12"));
        verticalLayout_8 = new QVBoxLayout();
        verticalLayout_8->setObjectName(QStringLiteral("verticalLayout_8"));
        toolBox_2 = new QToolBox(widget_3);
        toolBox_2->setObjectName(QStringLiteral("toolBox_2"));
        sizePolicy4.setHeightForWidth(toolBox_2->sizePolicy().hasHeightForWidth());
        toolBox_2->setSizePolicy(sizePolicy4);
        toolBox_2->setMinimumSize(QSize(360, 400));
        toolBox_2->setStyleSheet(QLatin1String("QToolBox::tab {\n"
"background: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 #E1E1E1, stop: 0.4 #DDDDDD, stop: 0.5 #D8D8D8, stop: 1.0 #D3D3D3);\n"
"border: 2px solid #C4C4C3;\n"
"border-bottom-color: #C2C7CB; /* same as the pane color */\n"
"border-top-left-radius: 4px;\n"
"border-top-right-radius: 4px;\n"
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
        movement_Page_2 = new QWidget();
        movement_Page_2->setObjectName(QStringLiteral("movement_Page_2"));
        movement_Page_2->setGeometry(QRect(0, 0, 360, 379));
        gridLayout_4 = new QGridLayout(movement_Page_2);
        gridLayout_4->setObjectName(QStringLiteral("gridLayout_4"));
        label_X_2 = new QLabel(movement_Page_2);
        label_X_2->setObjectName(QStringLiteral("label_X_2"));
        QSizePolicy sizePolicy6(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy6.setHorizontalStretch(0);
        sizePolicy6.setVerticalStretch(0);
        sizePolicy6.setHeightForWidth(label_X_2->sizePolicy().hasHeightForWidth());
        label_X_2->setSizePolicy(sizePolicy6);
        QFont font1;
        font1.setPointSize(10);
        label_X_2->setFont(font1);
        label_X_2->setAlignment(Qt::AlignBottom|Qt::AlignLeading|Qt::AlignLeft);

        gridLayout_4->addWidget(label_X_2, 0, 0, 1, 1);

        spin_Box_X_2 = new QSpinBox(movement_Page_2);
        spin_Box_X_2->setObjectName(QStringLiteral("spin_Box_X_2"));
        spin_Box_X_2->setMaximum(2088);
        spin_Box_X_2->setValue(0);

        gridLayout_4->addWidget(spin_Box_X_2, 1, 0, 1, 1);

        horizontal_Slider_X_2 = new QSlider(movement_Page_2);
        horizontal_Slider_X_2->setObjectName(QStringLiteral("horizontal_Slider_X_2"));
        horizontal_Slider_X_2->setMaximum(2088);
        horizontal_Slider_X_2->setValue(0);
        horizontal_Slider_X_2->setOrientation(Qt::Horizontal);

        gridLayout_4->addWidget(horizontal_Slider_X_2, 2, 0, 1, 1);

        label_Y_2 = new QLabel(movement_Page_2);
        label_Y_2->setObjectName(QStringLiteral("label_Y_2"));
        label_Y_2->setEnabled(true);
        sizePolicy6.setHeightForWidth(label_Y_2->sizePolicy().hasHeightForWidth());
        label_Y_2->setSizePolicy(sizePolicy6);
        label_Y_2->setFont(font1);
        label_Y_2->setAlignment(Qt::AlignBottom|Qt::AlignLeading|Qt::AlignLeft);

        gridLayout_4->addWidget(label_Y_2, 3, 0, 1, 1);

        spin_Box_Y_2 = new QSpinBox(movement_Page_2);
        spin_Box_Y_2->setObjectName(QStringLiteral("spin_Box_Y_2"));
        spin_Box_Y_2->setMaximum(1387);
        spin_Box_Y_2->setValue(0);

        gridLayout_4->addWidget(spin_Box_Y_2, 4, 0, 1, 1);

        horizontal_Slider_Y_2 = new QSlider(movement_Page_2);
        horizontal_Slider_Y_2->setObjectName(QStringLiteral("horizontal_Slider_Y_2"));
        horizontal_Slider_Y_2->setMaximum(1387);
        horizontal_Slider_Y_2->setValue(0);
        horizontal_Slider_Y_2->setOrientation(Qt::Horizontal);
        horizontal_Slider_Y_2->setInvertedAppearance(false);
        horizontal_Slider_Y_2->setInvertedControls(false);

        gridLayout_4->addWidget(horizontal_Slider_Y_2, 5, 0, 1, 1);

        toolBox_2->addItem(movement_Page_2, QStringLiteral("Position"));
        scale_Page_2 = new QWidget();
        scale_Page_2->setObjectName(QStringLiteral("scale_Page_2"));
        scale_Page_2->setGeometry(QRect(0, 0, 360, 379));
        gridLayout_5 = new QGridLayout(scale_Page_2);
        gridLayout_5->setObjectName(QStringLiteral("gridLayout_5"));
        line_2 = new QFrame(scale_Page_2);
        line_2->setObjectName(QStringLiteral("line_2"));
        sizePolicy4.setHeightForWidth(line_2->sizePolicy().hasHeightForWidth());
        line_2->setSizePolicy(sizePolicy4);
        line_2->setFrameShape(QFrame::HLine);
        line_2->setFrameShadow(QFrame::Sunken);

        gridLayout_5->addWidget(line_2, 6, 0, 1, 1);

        radius_Label_2 = new QLabel(scale_Page_2);
        radius_Label_2->setObjectName(QStringLiteral("radius_Label_2"));
        sizePolicy4.setHeightForWidth(radius_Label_2->sizePolicy().hasHeightForWidth());
        radius_Label_2->setSizePolicy(sizePolicy4);
        QFont font2;
        font2.setFamily(QStringLiteral("Segoe Script"));
        font2.setPointSize(12);
        font2.setBold(true);
        font2.setWeight(75);
        radius_Label_2->setFont(font2);
        radius_Label_2->setAlignment(Qt::AlignBottom|Qt::AlignLeading|Qt::AlignLeft);

        gridLayout_5->addWidget(radius_Label_2, 0, 0, 1, 1);

        horizontal_Slider_Width = new QSlider(scale_Page_2);
        horizontal_Slider_Width->setObjectName(QStringLiteral("horizontal_Slider_Width"));
        sizePolicy4.setHeightForWidth(horizontal_Slider_Width->sizePolicy().hasHeightForWidth());
        horizontal_Slider_Width->setSizePolicy(sizePolicy4);
        horizontal_Slider_Width->setMinimum(100);
        horizontal_Slider_Width->setMaximum(5000);
        horizontal_Slider_Width->setValue(300);
        horizontal_Slider_Width->setOrientation(Qt::Horizontal);

        gridLayout_5->addWidget(horizontal_Slider_Width, 2, 0, 1, 1);

        spin_Box_Width = new QDoubleSpinBox(scale_Page_2);
        spin_Box_Width->setObjectName(QStringLiteral("spin_Box_Width"));
        sizePolicy4.setHeightForWidth(spin_Box_Width->sizePolicy().hasHeightForWidth());
        spin_Box_Width->setSizePolicy(sizePolicy4);
        spin_Box_Width->setDecimals(1);
        spin_Box_Width->setMinimum(100);
        spin_Box_Width->setMaximum(5000);
        spin_Box_Width->setValue(300);

        gridLayout_5->addWidget(spin_Box_Width, 1, 0, 1, 1);

        radius_Label_3 = new QLabel(scale_Page_2);
        radius_Label_3->setObjectName(QStringLiteral("radius_Label_3"));
        sizePolicy4.setHeightForWidth(radius_Label_3->sizePolicy().hasHeightForWidth());
        radius_Label_3->setSizePolicy(sizePolicy4);
        radius_Label_3->setFont(font2);
        radius_Label_3->setAlignment(Qt::AlignBottom|Qt::AlignLeading|Qt::AlignLeft);

        gridLayout_5->addWidget(radius_Label_3, 3, 0, 1, 1);

        horizontal_Slider_Height = new QSlider(scale_Page_2);
        horizontal_Slider_Height->setObjectName(QStringLiteral("horizontal_Slider_Height"));
        sizePolicy4.setHeightForWidth(horizontal_Slider_Height->sizePolicy().hasHeightForWidth());
        horizontal_Slider_Height->setSizePolicy(sizePolicy4);
        horizontal_Slider_Height->setMinimum(100);
        horizontal_Slider_Height->setMaximum(5000);
        horizontal_Slider_Height->setValue(300);
        horizontal_Slider_Height->setOrientation(Qt::Horizontal);
        horizontal_Slider_Height->setTickPosition(QSlider::TicksBelow);
        horizontal_Slider_Height->setTickInterval(100);

        gridLayout_5->addWidget(horizontal_Slider_Height, 5, 0, 1, 1);

        spin_Box_Height = new QDoubleSpinBox(scale_Page_2);
        spin_Box_Height->setObjectName(QStringLiteral("spin_Box_Height"));
        sizePolicy4.setHeightForWidth(spin_Box_Height->sizePolicy().hasHeightForWidth());
        spin_Box_Height->setSizePolicy(sizePolicy4);
        spin_Box_Height->setDecimals(1);
        spin_Box_Height->setMinimum(100);
        spin_Box_Height->setMaximum(5000);
        spin_Box_Height->setValue(300);

        gridLayout_5->addWidget(spin_Box_Height, 4, 0, 1, 1);

        toolBox_2->addItem(scale_Page_2, QStringLiteral("Scale"));
        tools_Page_2 = new QWidget();
        tools_Page_2->setObjectName(QStringLiteral("tools_Page_2"));
        tools_Page_2->setGeometry(QRect(0, 0, 360, 379));
        verticalLayout_10 = new QVBoxLayout(tools_Page_2);
        verticalLayout_10->setObjectName(QStringLiteral("verticalLayout_10"));
        zoom_Label_2 = new QLabel(tools_Page_2);
        zoom_Label_2->setObjectName(QStringLiteral("zoom_Label_2"));
        QSizePolicy sizePolicy7(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy7.setHorizontalStretch(0);
        sizePolicy7.setVerticalStretch(0);
        sizePolicy7.setHeightForWidth(zoom_Label_2->sizePolicy().hasHeightForWidth());
        zoom_Label_2->setSizePolicy(sizePolicy7);
        QFont font3;
        font3.setFamily(QStringLiteral("Segoe Script"));
        font3.setPointSize(11);
        font3.setBold(true);
        font3.setWeight(75);
        zoom_Label_2->setFont(font3);

        verticalLayout_10->addWidget(zoom_Label_2);

        zoom_In_Button_2 = new QPushButton(tools_Page_2);
        zoom_In_Button_2->setObjectName(QStringLiteral("zoom_In_Button_2"));
        sizePolicy7.setHeightForWidth(zoom_In_Button_2->sizePolicy().hasHeightForWidth());
        zoom_In_Button_2->setSizePolicy(sizePolicy7);

        verticalLayout_10->addWidget(zoom_In_Button_2);

        zoom_Out_Button_2 = new QPushButton(tools_Page_2);
        zoom_Out_Button_2->setObjectName(QStringLiteral("zoom_Out_Button_2"));
        sizePolicy7.setHeightForWidth(zoom_Out_Button_2->sizePolicy().hasHeightForWidth());
        zoom_Out_Button_2->setSizePolicy(sizePolicy7);

        verticalLayout_10->addWidget(zoom_Out_Button_2);

        zoom_Reset_Button_2 = new QPushButton(tools_Page_2);
        zoom_Reset_Button_2->setObjectName(QStringLiteral("zoom_Reset_Button_2"));
        sizePolicy7.setHeightForWidth(zoom_Reset_Button_2->sizePolicy().hasHeightForWidth());
        zoom_Reset_Button_2->setSizePolicy(sizePolicy7);

        verticalLayout_10->addWidget(zoom_Reset_Button_2);

        seperator_3 = new QFrame(tools_Page_2);
        seperator_3->setObjectName(QStringLiteral("seperator_3"));
        sizePolicy7.setHeightForWidth(seperator_3->sizePolicy().hasHeightForWidth());
        seperator_3->setSizePolicy(sizePolicy7);
        seperator_3->setFrameShape(QFrame::HLine);
        seperator_3->setFrameShadow(QFrame::Sunken);

        verticalLayout_10->addWidget(seperator_3);

        colour_Label_2 = new QLabel(tools_Page_2);
        colour_Label_2->setObjectName(QStringLiteral("colour_Label_2"));
        sizePolicy7.setHeightForWidth(colour_Label_2->sizePolicy().hasHeightForWidth());
        colour_Label_2->setSizePolicy(sizePolicy7);
        colour_Label_2->setFont(font3);

        verticalLayout_10->addWidget(colour_Label_2);

        label_Red_2 = new QLabel(tools_Page_2);
        label_Red_2->setObjectName(QStringLiteral("label_Red_2"));
        sizePolicy7.setHeightForWidth(label_Red_2->sizePolicy().hasHeightForWidth());
        label_Red_2->setSizePolicy(sizePolicy7);

        verticalLayout_10->addWidget(label_Red_2);

        horizontal_Scroll_Bar_Red_2 = new QScrollBar(tools_Page_2);
        horizontal_Scroll_Bar_Red_2->setObjectName(QStringLiteral("horizontal_Scroll_Bar_Red_2"));
        sizePolicy7.setHeightForWidth(horizontal_Scroll_Bar_Red_2->sizePolicy().hasHeightForWidth());
        horizontal_Scroll_Bar_Red_2->setSizePolicy(sizePolicy7);
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

        verticalLayout_10->addWidget(horizontal_Scroll_Bar_Red_2);

        label_Green_2 = new QLabel(tools_Page_2);
        label_Green_2->setObjectName(QStringLiteral("label_Green_2"));
        sizePolicy7.setHeightForWidth(label_Green_2->sizePolicy().hasHeightForWidth());
        label_Green_2->setSizePolicy(sizePolicy7);

        verticalLayout_10->addWidget(label_Green_2);

        horizontal_Scroll_Bar_Green_2 = new QScrollBar(tools_Page_2);
        horizontal_Scroll_Bar_Green_2->setObjectName(QStringLiteral("horizontal_Scroll_Bar_Green_2"));
        sizePolicy7.setHeightForWidth(horizontal_Scroll_Bar_Green_2->sizePolicy().hasHeightForWidth());
        horizontal_Scroll_Bar_Green_2->setSizePolicy(sizePolicy7);
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
        horizontal_Scroll_Bar_Green_2->setValue(0);
        horizontal_Scroll_Bar_Green_2->setOrientation(Qt::Horizontal);

        verticalLayout_10->addWidget(horizontal_Scroll_Bar_Green_2);

        label_Blue_2 = new QLabel(tools_Page_2);
        label_Blue_2->setObjectName(QStringLiteral("label_Blue_2"));
        sizePolicy7.setHeightForWidth(label_Blue_2->sizePolicy().hasHeightForWidth());
        label_Blue_2->setSizePolicy(sizePolicy7);

        verticalLayout_10->addWidget(label_Blue_2);

        horizontal_Scroll_Bar_Blue_2 = new QScrollBar(tools_Page_2);
        horizontal_Scroll_Bar_Blue_2->setObjectName(QStringLiteral("horizontal_Scroll_Bar_Blue_2"));
        sizePolicy7.setHeightForWidth(horizontal_Scroll_Bar_Blue_2->sizePolicy().hasHeightForWidth());
        horizontal_Scroll_Bar_Blue_2->setSizePolicy(sizePolicy7);
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
        horizontal_Scroll_Bar_Blue_2->setValue(255);
        horizontal_Scroll_Bar_Blue_2->setOrientation(Qt::Horizontal);

        verticalLayout_10->addWidget(horizontal_Scroll_Bar_Blue_2);

        colour_Selector_Button_2 = new QToolButton(tools_Page_2);
        colour_Selector_Button_2->setObjectName(QStringLiteral("colour_Selector_Button_2"));
        sizePolicy7.setHeightForWidth(colour_Selector_Button_2->sizePolicy().hasHeightForWidth());
        colour_Selector_Button_2->setSizePolicy(sizePolicy7);

        verticalLayout_10->addWidget(colour_Selector_Button_2);

        toolBox_2->addItem(tools_Page_2, QStringLiteral("Tools"));
        images_Page_2 = new QWidget();
        images_Page_2->setObjectName(QStringLiteral("images_Page_2"));
        images_Page_2->setGeometry(QRect(0, 0, 360, 379));
        splitter_3 = new QSplitter(images_Page_2);
        splitter_3->setObjectName(QStringLiteral("splitter_3"));
        splitter_3->setGeometry(QRect(20, 0, 311, 371));
        sizePolicy.setHeightForWidth(splitter_3->sizePolicy().hasHeightForWidth());
        splitter_3->setSizePolicy(sizePolicy);
        splitter_3->setOrientation(Qt::Vertical);
        label = new QLabel(splitter_3);
        label->setObjectName(QStringLiteral("label"));
        splitter_3->addWidget(label);
        scrollArea_3 = new QScrollArea(splitter_3);
        scrollArea_3->setObjectName(QStringLiteral("scrollArea_3"));
        scrollArea_3->setWidgetResizable(true);
        scrollAreaWidgetContents_3 = new QWidget();
        scrollAreaWidgetContents_3->setObjectName(QStringLiteral("scrollAreaWidgetContents_3"));
        scrollAreaWidgetContents_3->setGeometry(QRect(0, 0, 309, 343));
        gridLayout_2 = new QGridLayout(scrollAreaWidgetContents_3);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        work_Images = new QListWidget(scrollAreaWidgetContents_3);
        work_Images->setObjectName(QStringLiteral("work_Images"));
        work_Images->setEditTriggers(QAbstractItemView::NoEditTriggers);
        work_Images->setDefaultDropAction(Qt::IgnoreAction);
        work_Images->setItemAlignment(Qt::AlignLeading);

        gridLayout_2->addWidget(work_Images, 0, 0, 1, 1);

        scrollArea_3->setWidget(scrollAreaWidgetContents_3);
        splitter_3->addWidget(scrollArea_3);
        toolBox_2->addItem(images_Page_2, QStringLiteral("Images"));

        verticalLayout_8->addWidget(toolBox_2);

        splitter = new QSplitter(widget_3);
        splitter->setObjectName(QStringLiteral("splitter"));
        sizePolicy.setHeightForWidth(splitter->sizePolicy().hasHeightForWidth());
        splitter->setSizePolicy(sizePolicy);
        splitter->setOrientation(Qt::Vertical);
        label_3 = new QLabel(splitter);
        label_3->setObjectName(QStringLiteral("label_3"));
        sizePolicy4.setHeightForWidth(label_3->sizePolicy().hasHeightForWidth());
        label_3->setSizePolicy(sizePolicy4);
        label_3->setMaximumSize(QSize(16777215, 20));
        label_3->setFont(font2);
        splitter->addWidget(label_3);
        preview_Graphics_View = new QGraphicsView(splitter);
        preview_Graphics_View->setObjectName(QStringLiteral("preview_Graphics_View"));
        QSizePolicy sizePolicy8(QSizePolicy::Expanding, QSizePolicy::Maximum);
        sizePolicy8.setHorizontalStretch(0);
        sizePolicy8.setVerticalStretch(0);
        sizePolicy8.setHeightForWidth(preview_Graphics_View->sizePolicy().hasHeightForWidth());
        preview_Graphics_View->setSizePolicy(sizePolicy8);
        preview_Graphics_View->setMinimumSize(QSize(360, 280));
        preview_Graphics_View->setBackgroundBrush(brush);
        splitter->addWidget(preview_Graphics_View);

        verticalLayout_8->addWidget(splitter);


        verticalLayout_12->addLayout(verticalLayout_8);


        gridLayout_3->addWidget(widget_3, 0, 1, 1, 1);


        retranslateUi(crop_Widget);

        toolBox_2->setCurrentIndex(3);


        QMetaObject::connectSlotsByName(crop_Widget);
    } // setupUi

    void retranslateUi(QWidget *crop_Widget)
    {
        crop_Widget->setWindowTitle(QApplication::translate("crop_Widget", "Form", Q_NULLPTR));
        image_Name->setText(QString());
        apply_all->setText(QApplication::translate("crop_Widget", "Apply to all Images.", Q_NULLPTR));
        crop_btn->setText(QApplication::translate("crop_Widget", "Crop", Q_NULLPTR));
        cancel_btn->setText(QApplication::translate("crop_Widget", "Cancel", Q_NULLPTR));
        label_X_2->setText(QApplication::translate("crop_Widget", "X Position:", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        spin_Box_X_2->setToolTip(QApplication::translate("crop_Widget", "X Value of Sphere", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        label_Y_2->setText(QApplication::translate("crop_Widget", "Y Position:", Q_NULLPTR));
        toolBox_2->setItemText(toolBox_2->indexOf(movement_Page_2), QApplication::translate("crop_Widget", "Position", Q_NULLPTR));
        radius_Label_2->setText(QApplication::translate("crop_Widget", "Width:", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        spin_Box_Width->setToolTip(QApplication::translate("crop_Widget", "Selecter for Radius of Sphere", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        radius_Label_3->setText(QApplication::translate("crop_Widget", "Height:", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        spin_Box_Height->setToolTip(QApplication::translate("crop_Widget", "Selecter for Radius of Sphere", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        toolBox_2->setItemText(toolBox_2->indexOf(scale_Page_2), QApplication::translate("crop_Widget", "Scale", Q_NULLPTR));
        zoom_Label_2->setText(QApplication::translate("crop_Widget", "Zoom:", Q_NULLPTR));
        zoom_In_Button_2->setText(QApplication::translate("crop_Widget", "Zoom In", Q_NULLPTR));
        zoom_Out_Button_2->setText(QApplication::translate("crop_Widget", "Zoom Out", Q_NULLPTR));
        zoom_Reset_Button_2->setText(QApplication::translate("crop_Widget", "Reset", Q_NULLPTR));
        colour_Label_2->setText(QApplication::translate("crop_Widget", "Colour:", Q_NULLPTR));
        label_Red_2->setText(QApplication::translate("crop_Widget", "   Red:", Q_NULLPTR));
        label_Green_2->setText(QApplication::translate("crop_Widget", "   Green:", Q_NULLPTR));
        label_Blue_2->setText(QApplication::translate("crop_Widget", "   Blue:", Q_NULLPTR));
        colour_Selector_Button_2->setText(QApplication::translate("crop_Widget", "...", Q_NULLPTR));
        toolBox_2->setItemText(toolBox_2->indexOf(tools_Page_2), QApplication::translate("crop_Widget", "Tools", Q_NULLPTR));
        label->setText(QApplication::translate("crop_Widget", "Select Image to change Display:", Q_NULLPTR));
        toolBox_2->setItemText(toolBox_2->indexOf(images_Page_2), QApplication::translate("crop_Widget", "Images", Q_NULLPTR));
        label_3->setText(QApplication::translate("crop_Widget", "Preview:", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class crop_Widget: public Ui_crop_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CROP_WIDGET_H
