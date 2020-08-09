/********************************************************************************
** Form generated from reading UI file 'import_Widget.ui'
**
** Created by: Qt User Interface Compiler version 5.9.7
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
#include <QtWidgets/QSplitter>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_import_Widget
{
public:
    QHBoxLayout *horizontalLayout;
    QSplitter *splitter;
    QWidget *layoutWidget;
    QVBoxLayout *preview_Layout;
    QGraphicsView *graphics_View;
    QLabel *metadata_Label;
    QTableWidget *metadata_Table;
    QWidget *layoutWidget1;
    QVBoxLayout *import_Layout;
    QWidget *horizontalWidget;
    QHBoxLayout *horizontalLayout_4;
    QPushButton *import_btn;
    QPushButton *delete_Btn;
    QListWidget *listWidget;

    void setupUi(QWidget *import_Widget)
    {
        if (import_Widget->objectName().isEmpty())
            import_Widget->setObjectName(QStringLiteral("import_Widget"));
        import_Widget->resize(911, 669);
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(import_Widget->sizePolicy().hasHeightForWidth());
        import_Widget->setSizePolicy(sizePolicy);
        horizontalLayout = new QHBoxLayout(import_Widget);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        splitter = new QSplitter(import_Widget);
        splitter->setObjectName(QStringLiteral("splitter"));
        splitter->setEnabled(true);
        sizePolicy.setHeightForWidth(splitter->sizePolicy().hasHeightForWidth());
        splitter->setSizePolicy(sizePolicy);
        splitter->setFocusPolicy(Qt::NoFocus);
        splitter->setContextMenuPolicy(Qt::DefaultContextMenu);
        splitter->setLayoutDirection(Qt::LeftToRight);
        splitter->setFrameShape(QFrame::NoFrame);
        splitter->setLineWidth(0);
        splitter->setMidLineWidth(0);
        splitter->setOrientation(Qt::Horizontal);
        splitter->setOpaqueResize(true);
        splitter->setHandleWidth(20);
        splitter->setChildrenCollapsible(false);
        layoutWidget = new QWidget(splitter);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        preview_Layout = new QVBoxLayout(layoutWidget);
        preview_Layout->setObjectName(QStringLiteral("preview_Layout"));
        preview_Layout->setSizeConstraint(QLayout::SetDefaultConstraint);
        preview_Layout->setContentsMargins(0, 0, 0, 0);
        graphics_View = new QGraphicsView(layoutWidget);
        graphics_View->setObjectName(QStringLiteral("graphics_View"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(graphics_View->sizePolicy().hasHeightForWidth());
        graphics_View->setSizePolicy(sizePolicy1);
        graphics_View->setSizeAdjustPolicy(QAbstractScrollArea::AdjustToContents);
        graphics_View->setInteractive(true);
        graphics_View->setResizeAnchor(QGraphicsView::AnchorViewCenter);
        graphics_View->setViewportUpdateMode(QGraphicsView::BoundingRectViewportUpdate);

        preview_Layout->addWidget(graphics_View);

        metadata_Label = new QLabel(layoutWidget);
        metadata_Label->setObjectName(QStringLiteral("metadata_Label"));
        QSizePolicy sizePolicy2(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(metadata_Label->sizePolicy().hasHeightForWidth());
        metadata_Label->setSizePolicy(sizePolicy2);
        QFont font;
        font.setPointSize(12);
        font.setBold(true);
        font.setItalic(false);
        font.setWeight(75);
        metadata_Label->setFont(font);

        preview_Layout->addWidget(metadata_Label);

        metadata_Table = new QTableWidget(layoutWidget);
        if (metadata_Table->columnCount() < 1)
            metadata_Table->setColumnCount(1);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        metadata_Table->setHorizontalHeaderItem(0, __qtablewidgetitem);
        if (metadata_Table->rowCount() < 7)
            metadata_Table->setRowCount(7);
        QBrush brush(QColor(122, 122, 122, 255));
        brush.setStyle(Qt::SolidPattern);
        QFont font1;
        font1.setPointSize(10);
        font1.setBold(true);
        font1.setWeight(75);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        __qtablewidgetitem1->setTextAlignment(Qt::AlignCenter);
        __qtablewidgetitem1->setFont(font1);
        __qtablewidgetitem1->setForeground(brush);
        metadata_Table->setVerticalHeaderItem(0, __qtablewidgetitem1);
        QBrush brush1(QColor(0, 0, 0, 255));
        brush1.setStyle(Qt::SolidPattern);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        __qtablewidgetitem2->setTextAlignment(Qt::AlignCenter);
        __qtablewidgetitem2->setFont(font1);
        __qtablewidgetitem2->setBackground(QColor(255, 255, 255));
        __qtablewidgetitem2->setForeground(brush1);
        metadata_Table->setVerticalHeaderItem(1, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        __qtablewidgetitem3->setTextAlignment(Qt::AlignCenter);
        __qtablewidgetitem3->setFont(font1);
        __qtablewidgetitem3->setForeground(brush);
        metadata_Table->setVerticalHeaderItem(2, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        __qtablewidgetitem4->setTextAlignment(Qt::AlignCenter);
        __qtablewidgetitem4->setFont(font1);
        __qtablewidgetitem4->setBackground(QColor(255, 255, 255));
        __qtablewidgetitem4->setForeground(brush1);
        metadata_Table->setVerticalHeaderItem(3, __qtablewidgetitem4);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        __qtablewidgetitem5->setTextAlignment(Qt::AlignCenter);
        __qtablewidgetitem5->setFont(font1);
        __qtablewidgetitem5->setForeground(brush);
        metadata_Table->setVerticalHeaderItem(4, __qtablewidgetitem5);
        QTableWidgetItem *__qtablewidgetitem6 = new QTableWidgetItem();
        __qtablewidgetitem6->setTextAlignment(Qt::AlignCenter);
        __qtablewidgetitem6->setFont(font1);
        __qtablewidgetitem6->setBackground(QColor(255, 255, 255));
        __qtablewidgetitem6->setForeground(brush1);
        metadata_Table->setVerticalHeaderItem(5, __qtablewidgetitem6);
        QTableWidgetItem *__qtablewidgetitem7 = new QTableWidgetItem();
        __qtablewidgetitem7->setTextAlignment(Qt::AlignCenter);
        __qtablewidgetitem7->setFont(font1);
        __qtablewidgetitem7->setForeground(brush);
        metadata_Table->setVerticalHeaderItem(6, __qtablewidgetitem7);
        QFont font2;
        font2.setKerning(true);
        QTableWidgetItem *__qtablewidgetitem8 = new QTableWidgetItem();
        __qtablewidgetitem8->setFont(font2);
        metadata_Table->setItem(0, 0, __qtablewidgetitem8);
        metadata_Table->setObjectName(QStringLiteral("metadata_Table"));
        metadata_Table->setEnabled(true);
        sizePolicy2.setHeightForWidth(metadata_Table->sizePolicy().hasHeightForWidth());
        metadata_Table->setSizePolicy(sizePolicy2);
        metadata_Table->setMaximumSize(QSize(16777215, 16777215));
        metadata_Table->setFrameShape(QFrame::NoFrame);
        metadata_Table->setFrameShadow(QFrame::Plain);
        metadata_Table->setLineWidth(1);
        metadata_Table->setDragDropMode(QAbstractItemView::InternalMove);
        metadata_Table->setAlternatingRowColors(true);
        metadata_Table->setShowGrid(false);
        metadata_Table->setGridStyle(Qt::SolidLine);
        metadata_Table->setSortingEnabled(false);
        metadata_Table->setWordWrap(true);
        metadata_Table->setCornerButtonEnabled(true);
        metadata_Table->horizontalHeader()->setVisible(false);
        metadata_Table->horizontalHeader()->setCascadingSectionResizes(false);
        metadata_Table->horizontalHeader()->setDefaultSectionSize(410);
        metadata_Table->horizontalHeader()->setHighlightSections(true);
        metadata_Table->horizontalHeader()->setProperty("showSortIndicator", QVariant(false));
        metadata_Table->horizontalHeader()->setStretchLastSection(true);
        metadata_Table->verticalHeader()->setHighlightSections(true);
        metadata_Table->verticalHeader()->setMinimumSectionSize(10);
        metadata_Table->verticalHeader()->setProperty("showSortIndicator", QVariant(false));
        metadata_Table->verticalHeader()->setStretchLastSection(false);

        preview_Layout->addWidget(metadata_Table);

        splitter->addWidget(layoutWidget);
        layoutWidget1 = new QWidget(splitter);
        layoutWidget1->setObjectName(QStringLiteral("layoutWidget1"));
        import_Layout = new QVBoxLayout(layoutWidget1);
        import_Layout->setObjectName(QStringLiteral("import_Layout"));
        import_Layout->setSizeConstraint(QLayout::SetDefaultConstraint);
        import_Layout->setContentsMargins(0, 0, 0, 0);
        horizontalWidget = new QWidget(layoutWidget1);
        horizontalWidget->setObjectName(QStringLiteral("horizontalWidget"));
        QSizePolicy sizePolicy3(QSizePolicy::Expanding, QSizePolicy::Minimum);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(horizontalWidget->sizePolicy().hasHeightForWidth());
        horizontalWidget->setSizePolicy(sizePolicy3);
        horizontalLayout_4 = new QHBoxLayout(horizontalWidget);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        horizontalLayout_4->setSizeConstraint(QLayout::SetDefaultConstraint);
        import_btn = new QPushButton(horizontalWidget);
        import_btn->setObjectName(QStringLiteral("import_btn"));

        horizontalLayout_4->addWidget(import_btn);

        delete_Btn = new QPushButton(horizontalWidget);
        delete_Btn->setObjectName(QStringLiteral("delete_Btn"));

        horizontalLayout_4->addWidget(delete_Btn);


        import_Layout->addWidget(horizontalWidget);

        listWidget = new QListWidget(layoutWidget1);
        listWidget->setObjectName(QStringLiteral("listWidget"));
        sizePolicy.setHeightForWidth(listWidget->sizePolicy().hasHeightForWidth());
        listWidget->setSizePolicy(sizePolicy);
        listWidget->setLineWidth(5);
        listWidget->setSortingEnabled(true);

        import_Layout->addWidget(listWidget);

        splitter->addWidget(layoutWidget1);

        horizontalLayout->addWidget(splitter);


        retranslateUi(import_Widget);

        listWidget->setCurrentRow(-1);


        QMetaObject::connectSlotsByName(import_Widget);
    } // setupUi

    void retranslateUi(QWidget *import_Widget)
    {
        import_Widget->setWindowTitle(QApplication::translate("import_Widget", "Form", Q_NULLPTR));
        metadata_Label->setText(QApplication::translate("import_Widget", "Metadata", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem = metadata_Table->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("import_Widget", "Value", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem1 = metadata_Table->verticalHeaderItem(0);
        ___qtablewidgetitem1->setText(QApplication::translate("import_Widget", "Project Name", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem2 = metadata_Table->verticalHeaderItem(1);
        ___qtablewidgetitem2->setText(QApplication::translate("import_Widget", "Image Name", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem3 = metadata_Table->verticalHeaderItem(2);
        ___qtablewidgetitem3->setText(QApplication::translate("import_Widget", "Creator", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem4 = metadata_Table->verticalHeaderItem(3);
        ___qtablewidgetitem4->setText(QApplication::translate("import_Widget", "Location", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem5 = metadata_Table->verticalHeaderItem(4);
        ___qtablewidgetitem5->setText(QApplication::translate("import_Widget", "Date Created", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem6 = metadata_Table->verticalHeaderItem(5);
        ___qtablewidgetitem6->setText(QApplication::translate("import_Widget", "Width (px)", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem7 = metadata_Table->verticalHeaderItem(6);
        ___qtablewidgetitem7->setText(QApplication::translate("import_Widget", "Height (px)", Q_NULLPTR));

        const bool __sortingEnabled = metadata_Table->isSortingEnabled();
        metadata_Table->setSortingEnabled(false);
        metadata_Table->setSortingEnabled(__sortingEnabled);

        import_btn->setText(QApplication::translate("import_Widget", "Import", Q_NULLPTR));
        delete_Btn->setText(QApplication::translate("import_Widget", "Delete", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class import_Widget: public Ui_import_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_IMPORT_WIDGET_H
