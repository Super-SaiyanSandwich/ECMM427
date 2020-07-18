/********************************************************************************
** Form generated from reading UI file 'import_Widget.ui'
**
** Created by: Qt User Interface Compiler version 5.9.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_IMPORT_WIDGET_H
#define UI_IMPORT_WIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGraphicsView>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSplitter>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_import_Widget
{
public:
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *preview_Layout;
    QLabel *preivew_Label;
    QGraphicsView *graphics_View;
    QLabel *metadata_Label;
    QTableWidget *metadata_Table;
    QSpacerItem *horizontalSpacer;
    QVBoxLayout *import_Layout;
    QSplitter *splitter_3;
    QPushButton *import_btn;
    QPushButton *delete_Btn;
    QListWidget *listWidget;

    void setupUi(QWidget *import_Widget)
    {
        if (import_Widget->objectName().isEmpty())
            import_Widget->setObjectName(QStringLiteral("import_Widget"));
        import_Widget->resize(911, 669);
        horizontalLayout = new QHBoxLayout(import_Widget);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        preview_Layout = new QVBoxLayout();
        preview_Layout->setObjectName(QStringLiteral("preview_Layout"));
        preivew_Label = new QLabel(import_Widget);
        preivew_Label->setObjectName(QStringLiteral("preivew_Label"));
        QSizePolicy sizePolicy(QSizePolicy::MinimumExpanding, QSizePolicy::Minimum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(preivew_Label->sizePolicy().hasHeightForWidth());
        preivew_Label->setSizePolicy(sizePolicy);
        QFont font;
        font.setPointSize(12);
        font.setBold(true);
        font.setWeight(75);
        preivew_Label->setFont(font);

        preview_Layout->addWidget(preivew_Label);

        graphics_View = new QGraphicsView(import_Widget);
        graphics_View->setObjectName(QStringLiteral("graphics_View"));

        preview_Layout->addWidget(graphics_View);

        metadata_Label = new QLabel(import_Widget);
        metadata_Label->setObjectName(QStringLiteral("metadata_Label"));
        sizePolicy.setHeightForWidth(metadata_Label->sizePolicy().hasHeightForWidth());
        metadata_Label->setSizePolicy(sizePolicy);
        QFont font1;
        font1.setPointSize(12);
        font1.setBold(true);
        font1.setItalic(false);
        font1.setWeight(75);
        metadata_Label->setFont(font1);

        preview_Layout->addWidget(metadata_Label);

        metadata_Table = new QTableWidget(import_Widget);
        if (metadata_Table->columnCount() < 1)
            metadata_Table->setColumnCount(1);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        metadata_Table->setHorizontalHeaderItem(0, __qtablewidgetitem);
        if (metadata_Table->rowCount() < 7)
            metadata_Table->setRowCount(7);
        QFont font2;
        font2.setPointSize(10);
        font2.setBold(true);
        font2.setWeight(75);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        __qtablewidgetitem1->setTextAlignment(Qt::AlignCenter);
        __qtablewidgetitem1->setFont(font2);
        __qtablewidgetitem1->setBackground(QColor(0, 85, 255));
        metadata_Table->setVerticalHeaderItem(0, __qtablewidgetitem1);
        QBrush brush(QColor(0, 0, 0, 255));
        brush.setStyle(Qt::SolidPattern);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        __qtablewidgetitem2->setTextAlignment(Qt::AlignCenter);
        __qtablewidgetitem2->setFont(font2);
        __qtablewidgetitem2->setBackground(QColor(0, 170, 255));
        __qtablewidgetitem2->setForeground(brush);
        metadata_Table->setVerticalHeaderItem(1, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        __qtablewidgetitem3->setTextAlignment(Qt::AlignCenter);
        __qtablewidgetitem3->setFont(font2);
        __qtablewidgetitem3->setBackground(QColor(0, 85, 255));
        __qtablewidgetitem3->setForeground(brush);
        metadata_Table->setVerticalHeaderItem(2, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        __qtablewidgetitem4->setTextAlignment(Qt::AlignCenter);
        __qtablewidgetitem4->setFont(font2);
        __qtablewidgetitem4->setBackground(QColor(0, 170, 255));
        __qtablewidgetitem4->setForeground(brush);
        metadata_Table->setVerticalHeaderItem(3, __qtablewidgetitem4);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        __qtablewidgetitem5->setTextAlignment(Qt::AlignCenter);
        __qtablewidgetitem5->setFont(font2);
        __qtablewidgetitem5->setBackground(QColor(0, 85, 255));
        __qtablewidgetitem5->setForeground(brush);
        metadata_Table->setVerticalHeaderItem(4, __qtablewidgetitem5);
        QTableWidgetItem *__qtablewidgetitem6 = new QTableWidgetItem();
        __qtablewidgetitem6->setTextAlignment(Qt::AlignCenter);
        __qtablewidgetitem6->setFont(font2);
        __qtablewidgetitem6->setBackground(QColor(0, 170, 255));
        metadata_Table->setVerticalHeaderItem(5, __qtablewidgetitem6);
        QTableWidgetItem *__qtablewidgetitem7 = new QTableWidgetItem();
        __qtablewidgetitem7->setTextAlignment(Qt::AlignCenter);
        __qtablewidgetitem7->setFont(font2);
        __qtablewidgetitem7->setBackground(QColor(0, 85, 255));
        __qtablewidgetitem7->setForeground(brush);
        metadata_Table->setVerticalHeaderItem(6, __qtablewidgetitem7);
        metadata_Table->setObjectName(QStringLiteral("metadata_Table"));
        metadata_Table->setEnabled(true);
        QSizePolicy sizePolicy1(QSizePolicy::MinimumExpanding, QSizePolicy::Maximum);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(metadata_Table->sizePolicy().hasHeightForWidth());
        metadata_Table->setSizePolicy(sizePolicy1);
        metadata_Table->setMaximumSize(QSize(999999, 16777215));
        metadata_Table->setFrameShape(QFrame::Panel);
        metadata_Table->setFrameShadow(QFrame::Plain);
        metadata_Table->setLineWidth(1);
        metadata_Table->setDragDropMode(QAbstractItemView::InternalMove);
        metadata_Table->setAlternatingRowColors(true);
        metadata_Table->setShowGrid(true);
        metadata_Table->setGridStyle(Qt::SolidLine);
        metadata_Table->setSortingEnabled(false);
        metadata_Table->setWordWrap(true);
        metadata_Table->setCornerButtonEnabled(true);
        metadata_Table->horizontalHeader()->setVisible(false);
        metadata_Table->horizontalHeader()->setCascadingSectionResizes(false);
        metadata_Table->horizontalHeader()->setDefaultSectionSize(410);
        metadata_Table->horizontalHeader()->setHighlightSections(true);
        metadata_Table->horizontalHeader()->setProperty("showSortIndicator", QVariant(false));
        metadata_Table->verticalHeader()->setHighlightSections(true);
        metadata_Table->verticalHeader()->setMinimumSectionSize(10);
        metadata_Table->verticalHeader()->setProperty("showSortIndicator", QVariant(false));
        metadata_Table->verticalHeader()->setStretchLastSection(false);

        preview_Layout->addWidget(metadata_Table);


        horizontalLayout->addLayout(preview_Layout);

        horizontalSpacer = new QSpacerItem(30, 20, QSizePolicy::Preferred, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        import_Layout = new QVBoxLayout();
        import_Layout->setObjectName(QStringLiteral("import_Layout"));
        splitter_3 = new QSplitter(import_Widget);
        splitter_3->setObjectName(QStringLiteral("splitter_3"));
        QSizePolicy sizePolicy2(QSizePolicy::MinimumExpanding, QSizePolicy::Preferred);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(splitter_3->sizePolicy().hasHeightForWidth());
        splitter_3->setSizePolicy(sizePolicy2);
        splitter_3->setOrientation(Qt::Horizontal);
        import_btn = new QPushButton(splitter_3);
        import_btn->setObjectName(QStringLiteral("import_btn"));
        QSizePolicy sizePolicy3(QSizePolicy::MinimumExpanding, QSizePolicy::MinimumExpanding);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(import_btn->sizePolicy().hasHeightForWidth());
        import_btn->setSizePolicy(sizePolicy3);
        splitter_3->addWidget(import_btn);
        delete_Btn = new QPushButton(splitter_3);
        delete_Btn->setObjectName(QStringLiteral("delete_Btn"));
        sizePolicy3.setHeightForWidth(delete_Btn->sizePolicy().hasHeightForWidth());
        delete_Btn->setSizePolicy(sizePolicy3);
        splitter_3->addWidget(delete_Btn);

        import_Layout->addWidget(splitter_3);

        listWidget = new QListWidget(import_Widget);
        listWidget->setObjectName(QStringLiteral("listWidget"));
        sizePolicy3.setHeightForWidth(listWidget->sizePolicy().hasHeightForWidth());
        listWidget->setSizePolicy(sizePolicy3);
        listWidget->setLineWidth(5);

        import_Layout->addWidget(listWidget);


        horizontalLayout->addLayout(import_Layout);


        retranslateUi(import_Widget);

        QMetaObject::connectSlotsByName(import_Widget);
    } // setupUi

    void retranslateUi(QWidget *import_Widget)
    {
        import_Widget->setWindowTitle(QApplication::translate("import_Widget", "Form", Q_NULLPTR));
        preivew_Label->setText(QApplication::translate("import_Widget", "Preview", Q_NULLPTR));
        metadata_Label->setText(QApplication::translate("import_Widget", "Metadata", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem = metadata_Table->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("import_Widget", "Value", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem1 = metadata_Table->verticalHeaderItem(0);
        ___qtablewidgetitem1->setText(QApplication::translate("import_Widget", "Project Name", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem2 = metadata_Table->verticalHeaderItem(1);
        ___qtablewidgetitem2->setText(QApplication::translate("import_Widget", "Image Name", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem3 = metadata_Table->verticalHeaderItem(2);
        ___qtablewidgetitem3->setText(QApplication::translate("import_Widget", "Edited by", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem4 = metadata_Table->verticalHeaderItem(3);
        ___qtablewidgetitem4->setText(QApplication::translate("import_Widget", "Location", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem5 = metadata_Table->verticalHeaderItem(4);
        ___qtablewidgetitem5->setText(QApplication::translate("import_Widget", "Date Created", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem6 = metadata_Table->verticalHeaderItem(5);
        ___qtablewidgetitem6->setText(QApplication::translate("import_Widget", "Width (cm)", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem7 = metadata_Table->verticalHeaderItem(6);
        ___qtablewidgetitem7->setText(QApplication::translate("import_Widget", "Height (cm)", Q_NULLPTR));
        import_btn->setText(QApplication::translate("import_Widget", "Import", Q_NULLPTR));
        delete_Btn->setText(QApplication::translate("import_Widget", "Delete", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class import_Widget: public Ui_import_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_IMPORT_WIDGET_H
