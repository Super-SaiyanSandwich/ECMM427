/********************************************************************************
** Form generated from reading UI file 'fitter_Widget.ui'
**
** Created by: Qt User Interface Compiler version 5.12.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FITTER_WIDGET_H
#define UI_FITTER_WIDGET_H

#include <QtCore/QLocale>
#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGraphicsView>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_fitter_Widget
{
public:
    QHBoxLayout *horizontalLayout_2;
    QWidget *settings;
    QVBoxLayout *verticalLayout;
    QLabel *image_Name;
    QGraphicsView *image_Graphics_View;
    QVBoxLayout *verticalLayout_19;
    QWidget *widget;
    QHBoxLayout *cycle_Layout;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *previous_Image_Btn;
    QPushButton *next_Image_Btn;
    QSpacerItem *horizontalSpacer_3;
    QSpacerItem *verticalSpacer_4;
    QVBoxLayout *verticalLayout_20;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_17;
    QHBoxLayout *fitter_Type_Layout;
    QRadioButton *ptm_Fitter;
    QRadioButton *hsh_Fitter;
    QSpacerItem *horizontalSpacer_6;
    QSpacerItem *verticalSpacer_5;
    QVBoxLayout *options_Layout;
    QVBoxLayout *locations_Layout;
    QHBoxLayout *lp_Layout;
    QLabel *label_28;
    QLabel *temp;
    QPushButton *lp_Location;
    QHBoxLayout *fitter_Location_layout;
    QLabel *label_21;
    QLabel *fitter_Placeholder;
    QPushButton *fitter_Location;
    QHBoxLayout *output_Layout;
    QLabel *label_23;
    QLabel *output_Placeholder;
    QPushButton *output_Location;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *lower_Options;
    QGridLayout *size_Layout;
    QLabel *actual_Size_Label;
    QLabel *width_Label;
    QLabel *height_Label;
    QCheckBox *resize_Checkbox;
    QLineEdit *width_Measurement;
    QLineEdit *height_Measurement;
    QSpacerItem *horizontalSpacer;
    QVBoxLayout *option_Layout;
    QHBoxLayout *hsh_Layout;
    QLabel *label_32;
    QComboBox *hsh_Order;
    QHBoxLayout *ptm_layout;
    QLabel *label_39;
    QComboBox *ptm_Luminance;
    QSpacerItem *horizontalSpacer_8;
    QWidget *information_generation;
    QVBoxLayout *verticalLayout_21;
    QWidget *verticalWidget;
    QVBoxLayout *verticalLayout_3;
    QLabel *label_33;
    QTextBrowser *fitter_Info;
    QWidget *verticalWidget_Loading_info;
    QVBoxLayout *verticalLayout_4;
    QProgressBar *progress_Bar;
    QLabel *status;
    QWidget *generate_and_cancel_2;
    QHBoxLayout *generate_and_cancel;
    QSpacerItem *horizontalSpacer_9;
    QPushButton *generate_Btn;
    QSpacerItem *horizontalSpacer_10;
    QPushButton *cancel_fitter_Btn;
    QSpacerItem *horizontalSpacer_11;

    void setupUi(QWidget *fitter_Widget)
    {
        if (fitter_Widget->objectName().isEmpty())
            fitter_Widget->setObjectName(QString::fromUtf8("fitter_Widget"));
        fitter_Widget->resize(2335, 1057);
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Maximum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(fitter_Widget->sizePolicy().hasHeightForWidth());
        fitter_Widget->setSizePolicy(sizePolicy);
        horizontalLayout_2 = new QHBoxLayout(fitter_Widget);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        settings = new QWidget(fitter_Widget);
        settings->setObjectName(QString::fromUtf8("settings"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(settings->sizePolicy().hasHeightForWidth());
        settings->setSizePolicy(sizePolicy1);
        verticalLayout = new QVBoxLayout(settings);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        image_Name = new QLabel(settings);
        image_Name->setObjectName(QString::fromUtf8("image_Name"));
        QSizePolicy sizePolicy2(QSizePolicy::MinimumExpanding, QSizePolicy::Preferred);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(image_Name->sizePolicy().hasHeightForWidth());
        image_Name->setSizePolicy(sizePolicy2);
        QFont font;
        font.setPointSize(12);
        font.setBold(true);
        font.setItalic(true);
        font.setWeight(75);
        image_Name->setFont(font);
        image_Name->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(image_Name);

        image_Graphics_View = new QGraphicsView(settings);
        image_Graphics_View->setObjectName(QString::fromUtf8("image_Graphics_View"));

        verticalLayout->addWidget(image_Graphics_View);

        verticalLayout_19 = new QVBoxLayout();
        verticalLayout_19->setObjectName(QString::fromUtf8("verticalLayout_19"));
        widget = new QWidget(settings);
        widget->setObjectName(QString::fromUtf8("widget"));
        cycle_Layout = new QHBoxLayout(widget);
        cycle_Layout->setObjectName(QString::fromUtf8("cycle_Layout"));
        cycle_Layout->setSizeConstraint(QLayout::SetDefaultConstraint);
        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::MinimumExpanding, QSizePolicy::Minimum);

        cycle_Layout->addItem(horizontalSpacer_2);

        previous_Image_Btn = new QPushButton(widget);
        previous_Image_Btn->setObjectName(QString::fromUtf8("previous_Image_Btn"));
        sizePolicy2.setHeightForWidth(previous_Image_Btn->sizePolicy().hasHeightForWidth());
        previous_Image_Btn->setSizePolicy(sizePolicy2);

        cycle_Layout->addWidget(previous_Image_Btn);

        next_Image_Btn = new QPushButton(widget);
        next_Image_Btn->setObjectName(QString::fromUtf8("next_Image_Btn"));
        next_Image_Btn->setEnabled(true);
        sizePolicy2.setHeightForWidth(next_Image_Btn->sizePolicy().hasHeightForWidth());
        next_Image_Btn->setSizePolicy(sizePolicy2);

        cycle_Layout->addWidget(next_Image_Btn);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::MinimumExpanding, QSizePolicy::Minimum);

        cycle_Layout->addItem(horizontalSpacer_3);


        verticalLayout_19->addWidget(widget);

        verticalSpacer_4 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::MinimumExpanding);

        verticalLayout_19->addItem(verticalSpacer_4);

        verticalLayout_20 = new QVBoxLayout();
        verticalLayout_20->setObjectName(QString::fromUtf8("verticalLayout_20"));
        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        label_17 = new QLabel(settings);
        label_17->setObjectName(QString::fromUtf8("label_17"));
        QSizePolicy sizePolicy3(QSizePolicy::MinimumExpanding, QSizePolicy::MinimumExpanding);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(label_17->sizePolicy().hasHeightForWidth());
        label_17->setSizePolicy(sizePolicy3);
        QFont font1;
        font1.setFamily(QString::fromUtf8("MS Shell Dlg 2"));
        font1.setPointSize(12);
        font1.setBold(true);
        font1.setItalic(false);
        font1.setWeight(75);
        font1.setStrikeOut(false);
        font1.setKerning(true);
        label_17->setFont(font1);

        horizontalLayout_4->addWidget(label_17);

        fitter_Type_Layout = new QHBoxLayout();
        fitter_Type_Layout->setObjectName(QString::fromUtf8("fitter_Type_Layout"));
        ptm_Fitter = new QRadioButton(settings);
        ptm_Fitter->setObjectName(QString::fromUtf8("ptm_Fitter"));
        ptm_Fitter->setEnabled(true);
        sizePolicy3.setHeightForWidth(ptm_Fitter->sizePolicy().hasHeightForWidth());
        ptm_Fitter->setSizePolicy(sizePolicy3);
        ptm_Fitter->setCheckable(true);
        ptm_Fitter->setChecked(true);
        ptm_Fitter->setAutoExclusive(true);

        fitter_Type_Layout->addWidget(ptm_Fitter);

        hsh_Fitter = new QRadioButton(settings);
        hsh_Fitter->setObjectName(QString::fromUtf8("hsh_Fitter"));
        sizePolicy3.setHeightForWidth(hsh_Fitter->sizePolicy().hasHeightForWidth());
        hsh_Fitter->setSizePolicy(sizePolicy3);
        hsh_Fitter->setAutoFillBackground(false);

        fitter_Type_Layout->addWidget(hsh_Fitter);


        horizontalLayout_4->addLayout(fitter_Type_Layout);

        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::MinimumExpanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_6);


        verticalLayout_20->addLayout(horizontalLayout_4);

        verticalSpacer_5 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::MinimumExpanding);

        verticalLayout_20->addItem(verticalSpacer_5);

        options_Layout = new QVBoxLayout();
        options_Layout->setObjectName(QString::fromUtf8("options_Layout"));
        locations_Layout = new QVBoxLayout();
        locations_Layout->setObjectName(QString::fromUtf8("locations_Layout"));
        lp_Layout = new QHBoxLayout();
        lp_Layout->setObjectName(QString::fromUtf8("lp_Layout"));
        label_28 = new QLabel(settings);
        label_28->setObjectName(QString::fromUtf8("label_28"));
        sizePolicy3.setHeightForWidth(label_28->sizePolicy().hasHeightForWidth());
        label_28->setSizePolicy(sizePolicy3);
        QFont font2;
        font2.setPointSize(9);
        font2.setBold(true);
        font2.setItalic(false);
        font2.setWeight(75);
        label_28->setFont(font2);

        lp_Layout->addWidget(label_28);

        temp = new QLabel(settings);
        temp->setObjectName(QString::fromUtf8("temp"));
        temp->setEnabled(true);
        sizePolicy3.setHeightForWidth(temp->sizePolicy().hasHeightForWidth());
        temp->setSizePolicy(sizePolicy3);
        temp->setMinimumSize(QSize(300, 0));
        temp->setFrameShape(QFrame::Box);
        temp->setFrameShadow(QFrame::Plain);
        temp->setLineWidth(1);
        temp->setScaledContents(false);
        temp->setWordWrap(false);
        temp->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextEditable|Qt::TextEditorInteraction|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        lp_Layout->addWidget(temp);

        lp_Location = new QPushButton(settings);
        lp_Location->setObjectName(QString::fromUtf8("lp_Location"));
        sizePolicy3.setHeightForWidth(lp_Location->sizePolicy().hasHeightForWidth());
        lp_Location->setSizePolicy(sizePolicy3);

        lp_Layout->addWidget(lp_Location);


        locations_Layout->addLayout(lp_Layout);

        fitter_Location_layout = new QHBoxLayout();
        fitter_Location_layout->setObjectName(QString::fromUtf8("fitter_Location_layout"));
        label_21 = new QLabel(settings);
        label_21->setObjectName(QString::fromUtf8("label_21"));
        sizePolicy3.setHeightForWidth(label_21->sizePolicy().hasHeightForWidth());
        label_21->setSizePolicy(sizePolicy3);
        QFont font3;
        font3.setPointSize(9);
        font3.setBold(true);
        font3.setWeight(75);
        label_21->setFont(font3);

        fitter_Location_layout->addWidget(label_21);

        fitter_Placeholder = new QLabel(settings);
        fitter_Placeholder->setObjectName(QString::fromUtf8("fitter_Placeholder"));
        sizePolicy3.setHeightForWidth(fitter_Placeholder->sizePolicy().hasHeightForWidth());
        fitter_Placeholder->setSizePolicy(sizePolicy3);
        fitter_Placeholder->setMinimumSize(QSize(300, 0));
        fitter_Placeholder->setAutoFillBackground(false);
        fitter_Placeholder->setLocale(QLocale(QLocale::English, QLocale::UnitedKingdom));
        fitter_Placeholder->setFrameShape(QFrame::Box);
        fitter_Placeholder->setFrameShadow(QFrame::Plain);
        fitter_Placeholder->setLineWidth(1);

        fitter_Location_layout->addWidget(fitter_Placeholder);

        fitter_Location = new QPushButton(settings);
        fitter_Location->setObjectName(QString::fromUtf8("fitter_Location"));
        sizePolicy3.setHeightForWidth(fitter_Location->sizePolicy().hasHeightForWidth());
        fitter_Location->setSizePolicy(sizePolicy3);

        fitter_Location_layout->addWidget(fitter_Location);


        locations_Layout->addLayout(fitter_Location_layout);

        output_Layout = new QHBoxLayout();
        output_Layout->setObjectName(QString::fromUtf8("output_Layout"));
        label_23 = new QLabel(settings);
        label_23->setObjectName(QString::fromUtf8("label_23"));
        sizePolicy3.setHeightForWidth(label_23->sizePolicy().hasHeightForWidth());
        label_23->setSizePolicy(sizePolicy3);
        label_23->setFont(font3);

        output_Layout->addWidget(label_23);

        output_Placeholder = new QLabel(settings);
        output_Placeholder->setObjectName(QString::fromUtf8("output_Placeholder"));
        sizePolicy3.setHeightForWidth(output_Placeholder->sizePolicy().hasHeightForWidth());
        output_Placeholder->setSizePolicy(sizePolicy3);
        output_Placeholder->setMinimumSize(QSize(300, 0));
        output_Placeholder->setFrameShape(QFrame::Box);
        output_Placeholder->setFrameShadow(QFrame::Plain);
        output_Placeholder->setLineWidth(1);

        output_Layout->addWidget(output_Placeholder);

        output_Location = new QPushButton(settings);
        output_Location->setObjectName(QString::fromUtf8("output_Location"));
        sizePolicy3.setHeightForWidth(output_Location->sizePolicy().hasHeightForWidth());
        output_Location->setSizePolicy(sizePolicy3);

        output_Layout->addWidget(output_Location);


        locations_Layout->addLayout(output_Layout);


        options_Layout->addLayout(locations_Layout);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::MinimumExpanding);

        options_Layout->addItem(verticalSpacer);

        lower_Options = new QHBoxLayout();
        lower_Options->setObjectName(QString::fromUtf8("lower_Options"));
        size_Layout = new QGridLayout();
        size_Layout->setObjectName(QString::fromUtf8("size_Layout"));
        actual_Size_Label = new QLabel(settings);
        actual_Size_Label->setObjectName(QString::fromUtf8("actual_Size_Label"));
        sizePolicy3.setHeightForWidth(actual_Size_Label->sizePolicy().hasHeightForWidth());
        actual_Size_Label->setSizePolicy(sizePolicy3);

        size_Layout->addWidget(actual_Size_Label, 0, 0, 1, 2);

        width_Label = new QLabel(settings);
        width_Label->setObjectName(QString::fromUtf8("width_Label"));
        sizePolicy3.setHeightForWidth(width_Label->sizePolicy().hasHeightForWidth());
        width_Label->setSizePolicy(sizePolicy3);

        size_Layout->addWidget(width_Label, 2, 0, 1, 1);

        height_Label = new QLabel(settings);
        height_Label->setObjectName(QString::fromUtf8("height_Label"));
        sizePolicy3.setHeightForWidth(height_Label->sizePolicy().hasHeightForWidth());
        height_Label->setSizePolicy(sizePolicy3);

        size_Layout->addWidget(height_Label, 3, 0, 1, 1);

        resize_Checkbox = new QCheckBox(settings);
        resize_Checkbox->setObjectName(QString::fromUtf8("resize_Checkbox"));
        sizePolicy3.setHeightForWidth(resize_Checkbox->sizePolicy().hasHeightForWidth());
        resize_Checkbox->setSizePolicy(sizePolicy3);
        resize_Checkbox->setChecked(false);

        size_Layout->addWidget(resize_Checkbox, 4, 1, 1, 1);

        width_Measurement = new QLineEdit(settings);
        width_Measurement->setObjectName(QString::fromUtf8("width_Measurement"));
        width_Measurement->setEnabled(false);
        sizePolicy3.setHeightForWidth(width_Measurement->sizePolicy().hasHeightForWidth());
        width_Measurement->setSizePolicy(sizePolicy3);

        size_Layout->addWidget(width_Measurement, 2, 1, 1, 1);

        height_Measurement = new QLineEdit(settings);
        height_Measurement->setObjectName(QString::fromUtf8("height_Measurement"));
        height_Measurement->setEnabled(false);
        sizePolicy3.setHeightForWidth(height_Measurement->sizePolicy().hasHeightForWidth());
        height_Measurement->setSizePolicy(sizePolicy3);

        size_Layout->addWidget(height_Measurement, 3, 1, 1, 1);


        lower_Options->addLayout(size_Layout);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        lower_Options->addItem(horizontalSpacer);

        option_Layout = new QVBoxLayout();
        option_Layout->setObjectName(QString::fromUtf8("option_Layout"));
        hsh_Layout = new QHBoxLayout();
        hsh_Layout->setObjectName(QString::fromUtf8("hsh_Layout"));
        label_32 = new QLabel(settings);
        label_32->setObjectName(QString::fromUtf8("label_32"));
        sizePolicy3.setHeightForWidth(label_32->sizePolicy().hasHeightForWidth());
        label_32->setSizePolicy(sizePolicy3);
        label_32->setFont(font3);

        hsh_Layout->addWidget(label_32);

        hsh_Order = new QComboBox(settings);
        hsh_Order->addItem(QString());
        hsh_Order->addItem(QString());
        hsh_Order->addItem(QString());
        hsh_Order->addItem(QString());
        hsh_Order->setObjectName(QString::fromUtf8("hsh_Order"));
        sizePolicy3.setHeightForWidth(hsh_Order->sizePolicy().hasHeightForWidth());
        hsh_Order->setSizePolicy(sizePolicy3);

        hsh_Layout->addWidget(hsh_Order);


        option_Layout->addLayout(hsh_Layout);

        ptm_layout = new QHBoxLayout();
        ptm_layout->setObjectName(QString::fromUtf8("ptm_layout"));
        label_39 = new QLabel(settings);
        label_39->setObjectName(QString::fromUtf8("label_39"));
        sizePolicy3.setHeightForWidth(label_39->sizePolicy().hasHeightForWidth());
        label_39->setSizePolicy(sizePolicy3);
        label_39->setFont(font3);

        ptm_layout->addWidget(label_39);

        ptm_Luminance = new QComboBox(settings);
        ptm_Luminance->addItem(QString());
        ptm_Luminance->addItem(QString());
        ptm_Luminance->addItem(QString());
        ptm_Luminance->setObjectName(QString::fromUtf8("ptm_Luminance"));
        sizePolicy3.setHeightForWidth(ptm_Luminance->sizePolicy().hasHeightForWidth());
        ptm_Luminance->setSizePolicy(sizePolicy3);

        ptm_layout->addWidget(ptm_Luminance);


        option_Layout->addLayout(ptm_layout);


        lower_Options->addLayout(option_Layout);


        options_Layout->addLayout(lower_Options);


        verticalLayout_20->addLayout(options_Layout);


        verticalLayout_19->addLayout(verticalLayout_20);


        verticalLayout->addLayout(verticalLayout_19);


        horizontalLayout_2->addWidget(settings);

        horizontalSpacer_8 = new QSpacerItem(20, 20, QSizePolicy::Minimum, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_8);

        information_generation = new QWidget(fitter_Widget);
        information_generation->setObjectName(QString::fromUtf8("information_generation"));
        QSizePolicy sizePolicy4(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(information_generation->sizePolicy().hasHeightForWidth());
        information_generation->setSizePolicy(sizePolicy4);
        verticalLayout_21 = new QVBoxLayout(information_generation);
        verticalLayout_21->setSpacing(0);
        verticalLayout_21->setObjectName(QString::fromUtf8("verticalLayout_21"));
        verticalLayout_21->setSizeConstraint(QLayout::SetDefaultConstraint);
        verticalWidget = new QWidget(information_generation);
        verticalWidget->setObjectName(QString::fromUtf8("verticalWidget"));
        sizePolicy1.setHeightForWidth(verticalWidget->sizePolicy().hasHeightForWidth());
        verticalWidget->setSizePolicy(sizePolicy1);
        verticalLayout_3 = new QVBoxLayout(verticalWidget);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        label_33 = new QLabel(verticalWidget);
        label_33->setObjectName(QString::fromUtf8("label_33"));
        sizePolicy4.setHeightForWidth(label_33->sizePolicy().hasHeightForWidth());
        label_33->setSizePolicy(sizePolicy4);
        QFont font4;
        font4.setPointSize(12);
        font4.setBold(true);
        font4.setWeight(75);
        label_33->setFont(font4);

        verticalLayout_3->addWidget(label_33);

        fitter_Info = new QTextBrowser(verticalWidget);
        fitter_Info->setObjectName(QString::fromUtf8("fitter_Info"));
        sizePolicy1.setHeightForWidth(fitter_Info->sizePolicy().hasHeightForWidth());
        fitter_Info->setSizePolicy(sizePolicy1);
        fitter_Info->setMinimumSize(QSize(0, 0));

        verticalLayout_3->addWidget(fitter_Info);


        verticalLayout_21->addWidget(verticalWidget);

        verticalWidget_Loading_info = new QWidget(information_generation);
        verticalWidget_Loading_info->setObjectName(QString::fromUtf8("verticalWidget_Loading_info"));
        QSizePolicy sizePolicy5(QSizePolicy::Minimum, QSizePolicy::Preferred);
        sizePolicy5.setHorizontalStretch(0);
        sizePolicy5.setVerticalStretch(0);
        sizePolicy5.setHeightForWidth(verticalWidget_Loading_info->sizePolicy().hasHeightForWidth());
        verticalWidget_Loading_info->setSizePolicy(sizePolicy5);
        verticalWidget_Loading_info->setMinimumSize(QSize(0, 0));
        verticalLayout_4 = new QVBoxLayout(verticalWidget_Loading_info);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        progress_Bar = new QProgressBar(verticalWidget_Loading_info);
        progress_Bar->setObjectName(QString::fromUtf8("progress_Bar"));
        QSizePolicy sizePolicy6(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy6.setHorizontalStretch(0);
        sizePolicy6.setVerticalStretch(0);
        sizePolicy6.setHeightForWidth(progress_Bar->sizePolicy().hasHeightForWidth());
        progress_Bar->setSizePolicy(sizePolicy6);
        progress_Bar->setValue(0);

        verticalLayout_4->addWidget(progress_Bar);

        status = new QLabel(verticalWidget_Loading_info);
        status->setObjectName(QString::fromUtf8("status"));
        status->setFont(font);
        status->setAlignment(Qt::AlignCenter);

        verticalLayout_4->addWidget(status);


        verticalLayout_21->addWidget(verticalWidget_Loading_info);

        generate_and_cancel_2 = new QWidget(information_generation);
        generate_and_cancel_2->setObjectName(QString::fromUtf8("generate_and_cancel_2"));
        generate_and_cancel = new QHBoxLayout(generate_and_cancel_2);
        generate_and_cancel->setObjectName(QString::fromUtf8("generate_and_cancel"));
        horizontalSpacer_9 = new QSpacerItem(40, 20, QSizePolicy::MinimumExpanding, QSizePolicy::Minimum);

        generate_and_cancel->addItem(horizontalSpacer_9);

        generate_Btn = new QPushButton(generate_and_cancel_2);
        generate_Btn->setObjectName(QString::fromUtf8("generate_Btn"));
        sizePolicy2.setHeightForWidth(generate_Btn->sizePolicy().hasHeightForWidth());
        generate_Btn->setSizePolicy(sizePolicy2);
        generate_Btn->setMaximumSize(QSize(16777215, 40));

        generate_and_cancel->addWidget(generate_Btn);

        horizontalSpacer_10 = new QSpacerItem(10, 20, QSizePolicy::MinimumExpanding, QSizePolicy::Minimum);

        generate_and_cancel->addItem(horizontalSpacer_10);

        cancel_fitter_Btn = new QPushButton(generate_and_cancel_2);
        cancel_fitter_Btn->setObjectName(QString::fromUtf8("cancel_fitter_Btn"));
        cancel_fitter_Btn->setEnabled(true);
        sizePolicy2.setHeightForWidth(cancel_fitter_Btn->sizePolicy().hasHeightForWidth());
        cancel_fitter_Btn->setSizePolicy(sizePolicy2);
        cancel_fitter_Btn->setMaximumSize(QSize(16777215, 40));

        generate_and_cancel->addWidget(cancel_fitter_Btn);

        horizontalSpacer_11 = new QSpacerItem(40, 20, QSizePolicy::MinimumExpanding, QSizePolicy::Minimum);

        generate_and_cancel->addItem(horizontalSpacer_11);


        verticalLayout_21->addWidget(generate_and_cancel_2);


        horizontalLayout_2->addWidget(information_generation);


        retranslateUi(fitter_Widget);

        QMetaObject::connectSlotsByName(fitter_Widget);
    } // setupUi

    void retranslateUi(QWidget *fitter_Widget)
    {
        fitter_Widget->setWindowTitle(QApplication::translate("fitter_Widget", "Form", nullptr));
        image_Name->setText(QString());
        previous_Image_Btn->setText(QApplication::translate("fitter_Widget", "< Prev", nullptr));
        next_Image_Btn->setText(QApplication::translate("fitter_Widget", "Next >", nullptr));
        label_17->setText(QApplication::translate("fitter_Widget", "Fitter algorithm selection:", nullptr));
        ptm_Fitter->setText(QApplication::translate("fitter_Widget", "PTM", nullptr));
        hsh_Fitter->setText(QApplication::translate("fitter_Widget", "HSH", nullptr));
        label_28->setText(QApplication::translate("fitter_Widget", "L.P. File Location:", nullptr));
        temp->setText(QString());
        lp_Location->setText(QApplication::translate("fitter_Widget", "...", nullptr));
        label_21->setText(QApplication::translate("fitter_Widget", "FITTER Location:", nullptr));
        fitter_Placeholder->setText(QString());
        fitter_Location->setText(QApplication::translate("fitter_Widget", "...", nullptr));
        label_23->setText(QApplication::translate("fitter_Widget", "Destination Location:", nullptr));
        output_Placeholder->setText(QString());
        output_Location->setText(QApplication::translate("fitter_Widget", "...", nullptr));
        actual_Size_Label->setText(QApplication::translate("fitter_Widget", "Size:", nullptr));
        width_Label->setText(QApplication::translate("fitter_Widget", "Width(px):", nullptr));
        height_Label->setText(QApplication::translate("fitter_Widget", "Height(px):", nullptr));
        resize_Checkbox->setText(QApplication::translate("fitter_Widget", "resize", nullptr));
        width_Measurement->setText(QApplication::translate("fitter_Widget", "123", nullptr));
        height_Measurement->setText(QApplication::translate("fitter_Widget", "567", nullptr));
        label_32->setText(QApplication::translate("fitter_Widget", "HSH Order:", nullptr));
        hsh_Order->setItemText(0, QString());
        hsh_Order->setItemText(1, QApplication::translate("fitter_Widget", "2", nullptr));
        hsh_Order->setItemText(2, QApplication::translate("fitter_Widget", "3", nullptr));
        hsh_Order->setItemText(3, QApplication::translate("fitter_Widget", "4", nullptr));

        label_39->setText(QApplication::translate("fitter_Widget", "PTM (luminance):", nullptr));
        ptm_Luminance->setItemText(0, QString());
        ptm_Luminance->setItemText(1, QApplication::translate("fitter_Widget", "RGB", nullptr));
        ptm_Luminance->setItemText(2, QApplication::translate("fitter_Widget", "LRGB", nullptr));

        label_33->setText(QApplication::translate("fitter_Widget", "Fitter Information", nullptr));
        fitter_Info->setHtml(QApplication::translate("fitter_Widget", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'.SF NS Text'; font-size:13pt; font-weight:400; font-style:normal;\">\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'MS Shell Dlg 2'; font-size:7.8pt;\"><br /></p></body></html>", nullptr));
        status->setText(QString());
        generate_Btn->setText(QApplication::translate("fitter_Widget", "Generate", nullptr));
        cancel_fitter_Btn->setText(QApplication::translate("fitter_Widget", "Cancel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class fitter_Widget: public Ui_fitter_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FITTER_WIDGET_H
