#include "image_Gatherer.h"
#include "image_Management_Nui.h"
#include "import_Widget.h"
#include "splash_Screen.h"
#include "ui_import_Widget.h"

#include <QFileInfo>
#include <QTextStream>
#include <QThread>

import_Widget::import_Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::import_Widget)
{
    ui->setupUi(this);
    ui->listWidget->setViewMode(QListWidget::IconMode);
    ui->listWidget->setIconSize(QSize(200,150));
    ui->listWidget->setResizeMode(QListWidget::Adjust);

    QGraphicsScene *scene = new QGraphicsScene(this);
    ui->graphics_View->setScene(scene);

    this->preview_Item = scene->addPixmap(QPixmap(0,0));
}

import_Widget::~import_Widget()
{
    delete ui;
}

QString import_Widget::get_Select()
{
    if(ui->listWidget->selectedItems().length() > 0)  return ui->listWidget->selectedItems()[0]->text();
    return ui->listWidget->item(0)->text();
}

QList<QListWidgetItem *> * import_Widget::get_List()
{
    QList<QListWidgetItem *> *out = new QList<QListWidgetItem *>();
    for (int var = 0; var < ui->listWidget->count(); ++var) {
        out->append(ui->listWidget->item(var));
    }
    return out;
}

void import_Widget::add_Item_To_List(QImage image, QString filename)
{
    QListWidgetItem *item = new QListWidgetItem(QIcon(QPixmap::fromImage(image)),filename);
    item->setFlags(item->flags() | Qt::ItemIsUserCheckable); // set checkable flag
    item->setCheckState(Qt::Unchecked); // AND initialize check state
    ui->listWidget->addItem(item);
}


void import_Widget::image_Display(){

    ui->listWidget->setViewMode(QListWidget::IconMode);
    ui->listWidget->setIconSize(QSize(250,250));
    ui->listWidget->setResizeMode(QListWidget::Adjust);


    QStringList path_List = image_Management_Nui::get_Working_Image_Paths();//*splashScreen::project_Path
    QStringListIterator file_Iterator(path_List);
    QStringList file_Names;

    while (file_Iterator.hasNext())
    {
        QApplication::processEvents( QEventLoop::ExcludeUserInputEvents);
        QThread *thread = new QThread();
        image_Gatherer *ig = new image_Gatherer();
        ig->moveToThread( thread );

        QString path = file_Iterator.next().toLocal8Bit().constData(); //Path Location
        QFile current_Image(path);
        QFileInfo current_Image_Info(current_Image.fileName());
        QString file_Name(current_Image_Info.fileName());
        file_Names.append(file_Name);


        QObject::connect( thread, SIGNAL(started()), ig, SLOT(start()) );
        QObject::connect( ig, SIGNAL(finished(const QImage &, const QString &)), this, SLOT(add_Item_To_List(const QImage &, const QString &)));

        ig->setInput(file_Name);
        thread->start();

    }
}

void import_Widget::showEvent(QShowEvent *ev)
{
    QWidget::showEvent(ev);

    if (first_Load){
        this->image_Display();
        first_Load = !first_Load;
    }
}

void import_Widget::on_listWidget_itemClicked(QListWidgetItem *item)
{
    QString preview_Image = splashScreen::project_Path+ "/images/wd/" +item->text();
    this->preview_Item->setPixmap( QPixmap::fromImage(QImage(preview_Image)) );
    this->preview_Item->setScale(qMin(preview_Item->pixmap().height() / ui->graphics_View->viewport()->height(),preview_Item->pixmap().width() / ui->graphics_View->viewport()->width()));
//    int w = ui->image_Preview->width();
//    int h = ui->image_Preview->height();
//    ui->image_Preview->clear();
//    ui->image_Preview->setPixmap(pix.scaled(w,h,Qt::KeepAspectRatio));
//    ui->image_Preview->update();

    for (int i=0; i<ui->metadata_Table->rowCount(); ++i)
    {
        ui->metadata_Table->setItem(i, 0, new QTableWidgetItem("")); // clear value.
        ui->metadata_Table->update();
    }

    QStringList pieces = splashScreen::project_Path.split( "/" );
    QString neededWord = pieces.value( pieces.length() - 1 );
//    qInfo()<<project_Wizard().editor;

    QString rti_Filename = splashScreen::project_Path + "/"+neededWord+".rtie";
    QString  editor;
    QString  date_Created;

    QFile file(rti_Filename);


    QStringList line;
    if (file.open(QIODevice::ReadOnly | QIODevice::Text)){
        QTextStream stream(&file);
        while (!stream.atEnd()){

            line.append(stream.readLine()+"\n");
        }

        line.removeAt(0);
        QString temp1 = line.value(0);
        QString temp2 = line.value(1);
        editor = temp1.remove("Editor Name: ");
        date_Created = temp2.remove("Created on: ");
        editor = editor.remove("\n");
        date_Created = date_Created.remove("\n");

    }
    file.close();

    ui->metadata_Table->setItem(0, 0, new QTableWidgetItem(neededWord)); // Project Name
    ui->metadata_Table->setItem(1, 0, new QTableWidgetItem(item->text())); // Picture Name
    ui->metadata_Table->setItem(2, 0, new QTableWidgetItem(editor)); // Editor's Name
    ui->metadata_Table->setItem(3, 0, new QTableWidgetItem(preview_Image)); // File location
    ui->metadata_Table->setItem(4, 0, new QTableWidgetItem(date_Created)); // Date Created
    ui->metadata_Table->setItem(5, 0, new QTableWidgetItem( QString::number(this->preview_Item->pixmap().width()))); // Image width
    ui->metadata_Table->setItem(6, 0, new QTableWidgetItem( QString::number(this->preview_Item->pixmap().height()))); // Image height
}

void import_Widget::on_import_btn_clicked()
{
    image_Management_Nui::import(this);

    // We must clear the listWidget in order to prevent populating it with the
    // same items repeatedly
    ui->listWidget->clear();
    this->image_Display();
}


/*
 * When the delete button is pressed it will get all the items
 * in the QListWidget that are Qt::Checked and pass them to the
 * delete function to be deleted (or not, depending on the user's choice).
 */
void import_Widget::on_delete_Btn_clicked()
{
    // checked_Image_Names will contain the file_Names of all checked images
    QStringList checked_Image_Names;
    // Iterate over all listWidget items and check their states
    for(int i = 0; i < ui->listWidget->count(); ++i)
    {
        QListWidgetItem* item = ui->listWidget->item(i);
        bool isChecked = item->checkState();

        //If isChecked is true, the item names will be appended to Checked_Image_Names
        if(isChecked){
            checked_Image_Names << item->text();
        }
    }

    image_Management_Nui::delete_(checked_Image_Names);

    // We must clear the listWidget in order to prevent populating it with the
    // same items repeatedly
    ui->listWidget->clear();
    this->image_Display();
}
