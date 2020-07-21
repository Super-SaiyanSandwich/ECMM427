/********************************************************************************
** Form generated from reading UI file 'fitter_Widget.ui'
**
** Created by: Qt User Interface Compiler version 5.12.6
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
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSplitter>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_fitter_Widget
{
public:
    QHBoxLayout *horizontalLayout_2;
    QGridLayout *gridLayout;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label_19;
    QLabel *image_Name;
    QLabel *image_Label;
    QSpacerItem *horizontalSpacer_8;
    QVBoxLayout *verticalLayout_21;
    QSplitter *splitter_3;
    QLabel *label_33;
    QTextBrowser *fitter_Info;
    QProgressBar *progress_Bar;
    QLabel *status;
    QHBoxLayout *generate_and_cancel;
    QSpacerItem *horizontalSpacer_9;
    QPushButton *generate_Btn;
    QSpacerItem *horizontalSpacer_10;
    QPushButton *cancel_fitter_Btn;
    QSpacerItem *horizontalSpacer_11;
    QVBoxLayout *verticalLayout_19;
    QHBoxLayout *cycle_Layout;
    QPushButton *previous_Image_Btn;
    QPushButton *next_Image_Btn;
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

    void setupUi(QWidget *fitter_Widget)
    {
        if (fitter_Widget->objectName().isEmpty())
            fitter_Widget->setObjectName(QString::fromUtf8("fitter_Widget"));
        fitter_Widget->resize(891, 707);
        QSizePolicy sizePolicy(QSizePolicy::MinimumExpanding, QSizePolicy::Maximum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(fitter_Widget->sizePolicy().hasHeightForWidth());
        fitter_Widget->setSizePolicy(sizePolicy);
        fitter_Widget->setMinimumSize(QSize(891, 0));
        horizontalLayout_2 = new QHBoxLayout(fitter_Widget);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setSizeConstraint(QLayout::SetFixedSize);
        label_19 = new QLabel(fitter_Widget);
        label_19->setObjectName(QString::fromUtf8("label_19"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(label_19->sizePolicy().hasHeightForWidth());
        label_19->setSizePolicy(sizePolicy1);
        QFont font;
        font.setFamily(QString::fromUtf8("MS Shell Dlg 2"));
        font.setPointSize(12);
        font.setBold(true);
        font.setItalic(false);
        font.setWeight(75);
        font.setStrikeOut(false);
        font.setKerning(true);
        label_19->setFont(font);

        horizontalLayout->addWidget(label_19);

        image_Name = new QLabel(fitter_Widget);
        image_Name->setObjectName(QString::fromUtf8("image_Name"));
        QSizePolicy sizePolicy2(QSizePolicy::MinimumExpanding, QSizePolicy::MinimumExpanding);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(image_Name->sizePolicy().hasHeightForWidth());
        image_Name->setSizePolicy(sizePolicy2);
        QFont font1;
        font1.setPointSize(12);
        font1.setBold(true);
        font1.setItalic(true);
        font1.setWeight(75);
        image_Name->setFont(font1);
        image_Name->setAlignment(Qt::AlignCenter);

        horizontalLayout->addWidget(image_Name);


        verticalLayout->addLayout(horizontalLayout);

        image_Label = new QLabel(fitter_Widget);
        image_Label->setObjectName(QString::fromUtf8("image_Label"));
        sizePolicy2.setHeightForWidth(image_Label->sizePolicy().hasHeightForWidth());
        image_Label->setSizePolicy(sizePolicy2);
        image_Label->setMinimumSize(QSize(300, 300));
        image_Label->setMaximumSize(QSize(1000, 1000));
        image_Label->setFrameShape(QFrame::Box);
        image_Label->setFrameShadow(QFrame::Plain);
        image_Label->setLineWidth(5);
        image_Label->setScaledContents(true);
        image_Label->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(image_Label);


        gridLayout->addLayout(verticalLayout, 0, 0, 1, 1);

        horizontalSpacer_8 = new QSpacerItem(38, 20, QSizePolicy::Minimum, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_8, 0, 1, 1, 1);

        verticalLayout_21 = new QVBoxLayout();
        verticalLayout_21->setObjectName(QString::fromUtf8("verticalLayout_21"));
        verticalLayout_21->setSizeConstraint(QLayout::SetMaximumSize);
        splitter_3 = new QSplitter(fitter_Widget);
        splitter_3->setObjectName(QString::fromUtf8("splitter_3"));
        sizePolicy2.setHeightForWidth(splitter_3->sizePolicy().hasHeightForWidth());
        splitter_3->setSizePolicy(sizePolicy2);
        splitter_3->setOrientation(Qt::Vertical);
        label_33 = new QLabel(splitter_3);
        label_33->setObjectName(QString::fromUtf8("label_33"));
        sizePolicy2.setHeightForWidth(label_33->sizePolicy().hasHeightForWidth());
        label_33->setSizePolicy(sizePolicy2);
        QFont font2;
        font2.setPointSize(12);
        font2.setBold(true);
        font2.setWeight(75);
        label_33->setFont(font2);
        splitter_3->addWidget(label_33);
        fitter_Info = new QTextBrowser(splitter_3);
        fitter_Info->setObjectName(QString::fromUtf8("fitter_Info"));
        sizePolicy.setHeightForWidth(fitter_Info->sizePolicy().hasHeightForWidth());
        fitter_Info->setSizePolicy(sizePolicy);
        fitter_Info->setMinimumSize(QSize(300, 500));
        fitter_Info->setMaximumSize(QSize(1000, 16777215));
        splitter_3->addWidget(fitter_Info);

        verticalLayout_21->addWidget(splitter_3);

        progress_Bar = new QProgressBar(fitter_Widget);
        progress_Bar->setObjectName(QString::fromUtf8("progress_Bar"));
        progress_Bar->setValue(0);

        verticalLayout_21->addWidget(progress_Bar);

        status = new QLabel(fitter_Widget);
        status->setObjectName(QString::fromUtf8("status"));
        status->setFont(font1);
        status->setAlignment(Qt::AlignCenter);

        verticalLayout_21->addWidget(status);

        generate_and_cancel = new QHBoxLayout();
        generate_and_cancel->setObjectName(QString::fromUtf8("generate_and_cancel"));
        horizontalSpacer_9 = new QSpacerItem(40, 20, QSizePolicy::Minimum, QSizePolicy::Minimum);

        generate_and_cancel->addItem(horizontalSpacer_9);

        generate_Btn = new QPushButton(fitter_Widget);
        generate_Btn->setObjectName(QString::fromUtf8("generate_Btn"));
        sizePolicy2.setHeightForWidth(generate_Btn->sizePolicy().hasHeightForWidth());
        generate_Btn->setSizePolicy(sizePolicy2);
        generate_Btn->setMaximumSize(QSize(16777215, 40));

        generate_and_cancel->addWidget(generate_Btn);

        horizontalSpacer_10 = new QSpacerItem(10, 20, QSizePolicy::Minimum, QSizePolicy::Minimum);

        generate_and_cancel->addItem(horizontalSpacer_10);

        cancel_fitter_Btn = new QPushButton(fitter_Widget);
        cancel_fitter_Btn->setObjectName(QString::fromUtf8("cancel_fitter_Btn"));
        cancel_fitter_Btn->setEnabled(true);
        sizePolicy2.setHeightForWidth(cancel_fitter_Btn->sizePolicy().hasHeightForWidth());
        cancel_fitter_Btn->setSizePolicy(sizePolicy2);
        cancel_fitter_Btn->setMaximumSize(QSize(16777215, 40));

        generate_and_cancel->addWidget(cancel_fitter_Btn);

        horizontalSpacer_11 = new QSpacerItem(40, 20, QSizePolicy::Minimum, QSizePolicy::Minimum);

        generate_and_cancel->addItem(horizontalSpacer_11);


        verticalLayout_21->addLayout(generate_and_cancel);


        gridLayout->addLayout(verticalLayout_21, 0, 2, 2, 1);

        verticalLayout_19 = new QVBoxLayout();
        verticalLayout_19->setObjectName(QString::fromUtf8("verticalLayout_19"));
        cycle_Layout = new QHBoxLayout();
        cycle_Layout->setObjectName(QString::fromUtf8("cycle_Layout"));
        cycle_Layout->setSizeConstraint(QLayout::SetDefaultConstraint);
        previous_Image_Btn = new QPushButton(fitter_Widget);
        previous_Image_Btn->setObjectName(QString::fromUtf8("previous_Image_Btn"));
        sizePolicy2.setHeightForWidth(previous_Image_Btn->sizePolicy().hasHeightForWidth());
        previous_Image_Btn->setSizePolicy(sizePolicy2);

        cycle_Layout->addWidget(previous_Image_Btn);

        next_Image_Btn = new QPushButton(fitter_Widget);
        next_Image_Btn->setObjectName(QString::fromUtf8("next_Image_Btn"));
        next_Image_Btn->setEnabled(true);
        sizePolicy2.setHeightForWidth(next_Image_Btn->sizePolicy().hasHeightForWidth());
        next_Image_Btn->setSizePolicy(sizePolicy2);

        cycle_Layout->addWidget(next_Image_Btn);


        verticalLayout_19->addLayout(cycle_Layout);

        verticalSpacer_4 = new QSpacerItem(20, 2, QSizePolicy::Minimum, QSizePolicy::MinimumExpanding);

        verticalLayout_19->addItem(verticalSpacer_4);

        verticalLayout_20 = new QVBoxLayout();
        verticalLayout_20->setObjectName(QString::fromUtf8("verticalLayout_20"));
        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        label_17 = new QLabel(fitter_Widget);
        label_17->setObjectName(QString::fromUtf8("label_17"));
        sizePolicy2.setHeightForWidth(label_17->sizePolicy().hasHeightForWidth());
        label_17->setSizePolicy(sizePolicy2);
        label_17->setFont(font);

        horizontalLayout_4->addWidget(label_17);

        fitter_Type_Layout = new QHBoxLayout();
        fitter_Type_Layout->setObjectName(QString::fromUtf8("fitter_Type_Layout"));
        ptm_Fitter = new QRadioButton(fitter_Widget);
        ptm_Fitter->setObjectName(QString::fromUtf8("ptm_Fitter"));
        ptm_Fitter->setEnabled(true);
        sizePolicy2.setHeightForWidth(ptm_Fitter->sizePolicy().hasHeightForWidth());
        ptm_Fitter->setSizePolicy(sizePolicy2);
        ptm_Fitter->setCheckable(true);
        ptm_Fitter->setChecked(false);
        ptm_Fitter->setAutoExclusive(true);

        fitter_Type_Layout->addWidget(ptm_Fitter);

        hsh_Fitter = new QRadioButton(fitter_Widget);
        hsh_Fitter->setObjectName(QString::fromUtf8("hsh_Fitter"));
        sizePolicy2.setHeightForWidth(hsh_Fitter->sizePolicy().hasHeightForWidth());
        hsh_Fitter->setSizePolicy(sizePolicy2);
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
        label_28 = new QLabel(fitter_Widget);
        label_28->setObjectName(QString::fromUtf8("label_28"));
        sizePolicy2.setHeightForWidth(label_28->sizePolicy().hasHeightForWidth());
        label_28->setSizePolicy(sizePolicy2);
        QFont font3;
        font3.setPointSize(9);
        font3.setBold(true);
        font3.setItalic(false);
        font3.setWeight(75);
        label_28->setFont(font3);

        lp_Layout->addWidget(label_28);

        temp = new QLabel(fitter_Widget);
        temp->setObjectName(QString::fromUtf8("temp"));
        temp->setEnabled(true);
        sizePolicy2.setHeightForWidth(temp->sizePolicy().hasHeightForWidth());
        temp->setSizePolicy(sizePolicy2);
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

        lp_Location = new QPushButton(fitter_Widget);
        lp_Location->setObjectName(QString::fromUtf8("lp_Location"));
        sizePolicy2.setHeightForWidth(lp_Location->sizePolicy().hasHeightForWidth());
        lp_Location->setSizePolicy(sizePolicy2);

        lp_Layout->addWidget(lp_Location);


        locations_Layout->addLayout(lp_Layout);

        fitter_Location_layout = new QHBoxLayout();
        fitter_Location_layout->setObjectName(QString::fromUtf8("fitter_Location_layout"));
        label_21 = new QLabel(fitter_Widget);
        label_21->setObjectName(QString::fromUtf8("label_21"));
        sizePolicy2.setHeightForWidth(label_21->sizePolicy().hasHeightForWidth());
        label_21->setSizePolicy(sizePolicy2);
        QFont font4;
        font4.setPointSize(9);
        font4.setBold(true);
        font4.setWeight(75);
        label_21->setFont(font4);

        fitter_Location_layout->addWidget(label_21);

        fitter_Placeholder = new QLabel(fitter_Widget);
        fitter_Placeholder->setObjectName(QString::fromUtf8("fitter_Placeholder"));
        sizePolicy2.setHeightForWidth(fitter_Placeholder->sizePolicy().hasHeightForWidth());
        fitter_Placeholder->setSizePolicy(sizePolicy2);
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

        fitter_Location = new QPushButton(fitter_Widget);
        fitter_Location->setObjectName(QString::fromUtf8("fitter_Location"));
        sizePolicy2.setHeightForWidth(fitter_Location->sizePolicy().hasHeightForWidth());
        fitter_Location->setSizePolicy(sizePolicy2);

        fitter_Location_layout->addWidget(fitter_Location);


        locations_Layout->addLayout(fitter_Location_layout);

        output_Layout = new QHBoxLayout();
        output_Layout->setObjectName(QString::fromUtf8("output_Layout"));
        label_23 = new QLabel(fitter_Widget);
        label_23->setObjectName(QString::fromUtf8("label_23"));
        sizePolicy2.setHeightForWidth(label_23->sizePolicy().hasHeightForWidth());
        label_23->setSizePolicy(sizePolicy2);
        label_23->setFont(font4);

        output_Layout->addWidget(label_23);

        output_Placeholder = new QLabel(fitter_Widget);
        output_Placeholder->setObjectName(QString::fromUtf8("output_Placeholder"));
        sizePolicy2.setHeightForWidth(output_Placeholder->sizePolicy().hasHeightForWidth());
        output_Placeholder->setSizePolicy(sizePolicy2);
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

        output_Location = new QPushButton(fitter_Widget);
        output_Location->setObjectName(QString::fromUtf8("output_Location"));
        sizePolicy2.setHeightForWidth(output_Location->sizePolicy().hasHeightForWidth());
        output_Location->setSizePolicy(sizePolicy2);

        output_Layout->addWidget(output_Location);


        locations_Layout->addLayout(output_Layout);


        options_Layout->addLayout(locations_Layout);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::MinimumExpanding);

        options_Layout->addItem(verticalSpacer);

        lower_Options = new QHBoxLayout();
        lower_Options->setObjectName(QString::fromUtf8("lower_Options"));
        size_Layout = new QGridLayout();
        size_Layout->setObjectName(QString::fromUtf8("size_Layout"));
        actual_Size_Label = new QLabel(fitter_Widget);
        actual_Size_Label->setObjectName(QString::fromUtf8("actual_Size_Label"));
        sizePolicy2.setHeightForWidth(actual_Size_Label->sizePolicy().hasHeightForWidth());
        actual_Size_Label->setSizePolicy(sizePolicy2);

        size_Layout->addWidget(actual_Size_Label, 0, 0, 1, 2);

        width_Label = new QLabel(fitter_Widget);
        width_Label->setObjectName(QString::fromUtf8("width_Label"));
        sizePolicy2.setHeightForWidth(width_Label->sizePolicy().hasHeightForWidth());
        width_Label->setSizePolicy(sizePolicy2);

        size_Layout->addWidget(width_Label, 2, 0, 1, 1);

        height_Label = new QLabel(fitter_Widget);
        height_Label->setObjectName(QString::fromUtf8("height_Label"));
        sizePolicy2.setHeightForWidth(height_Label->sizePolicy().hasHeightForWidth());
        height_Label->setSizePolicy(sizePolicy2);

        size_Layout->addWidget(height_Label, 3, 0, 1, 1);

        resize_Checkbox = new QCheckBox(fitter_Widget);
        resize_Checkbox->setObjectName(QString::fromUtf8("resize_Checkbox"));
        sizePolicy2.setHeightForWidth(resize_Checkbox->sizePolicy().hasHeightForWidth());
        resize_Checkbox->setSizePolicy(sizePolicy2);
        resize_Checkbox->setChecked(false);

        size_Layout->addWidget(resize_Checkbox, 4, 1, 1, 1);

        width_Measurement = new QLineEdit(fitter_Widget);
        width_Measurement->setObjectName(QString::fromUtf8("width_Measurement"));
        width_Measurement->setEnabled(false);
        sizePolicy2.setHeightForWidth(width_Measurement->sizePolicy().hasHeightForWidth());
        width_Measurement->setSizePolicy(sizePolicy2);

        size_Layout->addWidget(width_Measurement, 2, 1, 1, 1);

        height_Measurement = new QLineEdit(fitter_Widget);
        height_Measurement->setObjectName(QString::fromUtf8("height_Measurement"));
        height_Measurement->setEnabled(false);
        sizePolicy2.setHeightForWidth(height_Measurement->sizePolicy().hasHeightForWidth());
        height_Measurement->setSizePolicy(sizePolicy2);

        size_Layout->addWidget(height_Measurement, 3, 1, 1, 1);


        lower_Options->addLayout(size_Layout);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        lower_Options->addItem(horizontalSpacer);

        option_Layout = new QVBoxLayout();
        option_Layout->setObjectName(QString::fromUtf8("option_Layout"));
        hsh_Layout = new QHBoxLayout();
        hsh_Layout->setObjectName(QString::fromUtf8("hsh_Layout"));
        label_32 = new QLabel(fitter_Widget);
        label_32->setObjectName(QString::fromUtf8("label_32"));
        sizePolicy2.setHeightForWidth(label_32->sizePolicy().hasHeightForWidth());
        label_32->setSizePolicy(sizePolicy2);
        label_32->setFont(font4);

        hsh_Layout->addWidget(label_32);

        hsh_Order = new QComboBox(fitter_Widget);
        hsh_Order->addItem(QString());
        hsh_Order->addItem(QString());
        hsh_Order->addItem(QString());
        hsh_Order->addItem(QString());
        hsh_Order->setObjectName(QString::fromUtf8("hsh_Order"));
        sizePolicy2.setHeightForWidth(hsh_Order->sizePolicy().hasHeightForWidth());
        hsh_Order->setSizePolicy(sizePolicy2);

        hsh_Layout->addWidget(hsh_Order);


        option_Layout->addLayout(hsh_Layout);

        ptm_layout = new QHBoxLayout();
        ptm_layout->setObjectName(QString::fromUtf8("ptm_layout"));
        label_39 = new QLabel(fitter_Widget);
        label_39->setObjectName(QString::fromUtf8("label_39"));
        sizePolicy2.setHeightForWidth(label_39->sizePolicy().hasHeightForWidth());
        label_39->setSizePolicy(sizePolicy2);
        label_39->setFont(font4);

        ptm_layout->addWidget(label_39);

        ptm_Luminance = new QComboBox(fitter_Widget);
        ptm_Luminance->addItem(QString());
        ptm_Luminance->addItem(QString());
        ptm_Luminance->addItem(QString());
        ptm_Luminance->setObjectName(QString::fromUtf8("ptm_Luminance"));
        sizePolicy2.setHeightForWidth(ptm_Luminance->sizePolicy().hasHeightForWidth());
        ptm_Luminance->setSizePolicy(sizePolicy2);

        ptm_layout->addWidget(ptm_Luminance);


        option_Layout->addLayout(ptm_layout);


        lower_Options->addLayout(option_Layout);


        options_Layout->addLayout(lower_Options);


        verticalLayout_20->addLayout(options_Layout);


        verticalLayout_19->addLayout(verticalLayout_20);


        gridLayout->addLayout(verticalLayout_19, 1, 0, 1, 1);


        horizontalLayout_2->addLayout(gridLayout);


        retranslateUi(fitter_Widget);

        QMetaObject::connectSlotsByName(fitter_Widget);
    } // setupUi

    void retranslateUi(QWidget *fitter_Widget)
    {
        fitter_Widget->setWindowTitle(QApplication::translate("fitter_Widget", "Form", nullptr));
        label_19->setText(QApplication::translate("fitter_Widget", "Preview", nullptr));
        image_Name->setText(QString());
        image_Label->setText(QString());
        label_33->setText(QApplication::translate("fitter_Widget", "Fitter Information", nullptr));
        fitter_Info->setHtml(QApplication::translate("fitter_Widget", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt; font-weight:400; font-style:normal;\">\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-size:7.8pt;\"><br /></p></body></html>", nullptr));
        status->setText(QString());
        generate_Btn->setText(QApplication::translate("fitter_Widget", "Generate", nullptr));
        cancel_fitter_Btn->setText(QApplication::translate("fitter_Widget", "Cancel", nullptr));
        previous_Image_Btn->setText(QApplication::translate("fitter_Widget", "< Prev", nullptr));
        next_Image_Btn->setText(QApplication::translate("fitter_Widget", "Next >", nullptr));
        label_17->setText(QApplication::translate("fitter_Widget", "CHOOSE FITTER", nullptr));
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
        actual_Size_Label->setText(QApplication::translate("fitter_Widget", "Actual Size:", nullptr));
        width_Label->setText(QApplication::translate("fitter_Widget", "Width:", nullptr));
        height_Label->setText(QApplication::translate("fitter_Widget", "Height", nullptr));
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

    } // retranslateUi

};

namespace Ui {
    class fitter_Widget: public Ui_fitter_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FITTER_WIDGET_H
