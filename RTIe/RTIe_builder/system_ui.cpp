#include "system_ui.h"
#include "image_Management_Nui.h"
#include "splash_Screen.h"
#include "ui_system_ui.h"
#include "marble_Detection.h"
#include "project_Wizard.h"
#include "image_Gatherer.h"
#include "splash_Screen.h"
#define dumpval(x) qDebug()<<#x<<'='<<x

#include <QTranslator>
#include <QFileDialog>
#include <QDebug>
#include <QPixmap>
#include <QListWidgetItem>
#include <QFile>
#include <QFileDialog>
#include <QLabel>
#include <QLineEdit>
#include <QObject>
#include <QTextBrowser>
#include <QTableWidget>
#include <QDateTime>
#include <QProcess>
#include <QProgressBar>

#include <tuple>
#include <vector>
#include <math.h>
#define _USE_MATH_DEFINES



#include <QApplication>
#include <QtWidgets>
#include <QTranslator>
#include <QLocale>
#include <QLibraryInfo>
#include <QComboBox>

#include <QApplication>
#include <QtWidgets>
#include <QTranslator>
#include <QLocale>
#include <QLibraryInfo>
#include <iostream>
#include <fstream>
#include <exception>

#include <QBasicTimer>
#include <QList>
#include <QImage>
#include <QDir>
#include <QPainter>
#include <QPaintEvent>

#include <QThread>
#include <QGraphicsPixmapItem>
#include <QGraphicsItem>


using namespace std;

// CONSTANT VALUES
#define CENTER_SCALE_FACTOR 0.3
#define SCROLL_AREA_HEIGHT 694.0
#define SCROLL_AREA_WIDTH 1044.0
#define CONTRAST_PIVOT_POINT 215
#define CONTRAST_SCALE 2
#define BORDER_SCALE_FACTOR 0.1


system_Ui::system_Ui(QWidget *parent, QString base_Image_2) :
    QMainWindow(parent),
    ui(new Ui::system_Ui)
{

    ui->setupUi(this);
    ui->listWidget->setViewMode(QListWidget::IconMode);
    ui->listWidget->setIconSize(QSize(200,150));
    ui->listWidget->setResizeMode(QListWidget::Adjust);

    crop_Selection_Screen = new QGraphicsScene(this);
    ui->image_Graphics_View->setScene(crop_Selection_Screen);
//    int w = ui->image_Graphics_View->viewport()->width();
//    int h = ui->image_Graphics_View->viewport()->height();

////    qreal s = fmin(w/float(base_Image_2->pixmap().width()),h/float(base_Image_2->pixmap().height()));

//    ui->image_Graphics_View->scale(h, w);
    crop_Selection_Screen->installEventFilter(this);



    this->base_Image_2 = crop_Selection_Screen->addPixmap(QPixmap(base_Image_2));
//    this->base_Image_2->setFlag(QGraphicsItem::ItemClipsChildrenToShape, true);
    this->base_Image_2->setZValue(-10);



    this->selected_Area = new cropped_Area();
    selected_Area->setParentItem(this->base_Image_2);

    cropped_Area_List.append(selected_Area);

    QListWidgetItem *list_Icon = new QListWidgetItem();
    ui->work_Images->addItem(list_Icon);
    ui->work_Images->setIconSize(QSize(60,60));

    ui->work_Images->setViewMode(QListWidget::IconMode);
    ui->work_Images->setResizeMode(QListWidget::Adjust);

    ui->image_Label_3->setPixmap(QPixmap::fromImage(QImage(this->get_File_List().value(0))));


    image_Display();

}

system_Ui::~system_Ui()
{
    delete ui;
}

void system_Ui::open_Selected_Project()//IMPORTANT FUNCTION
{

    QFileDialog dialog(this);
    dialog.setFileMode(QFileDialog::ExistingFile);

    if(dialog.exec()){
        QFile project_File(dialog.selectedFiles().at(0).toLocal8Bit().constData());

        if (project_File.open(QIODevice::ReadOnly))
        {
            QTextStream in(&project_File);
            splashScreen::project_Path = in.readLine();
            project_File.close();
        }

    }

    qInfo() << "test OPEN PATH:: " << splashScreen::project_Path;

    system_Ui::start();


}

void system_Ui::start(){
    system_Ui *home = new system_Ui();
    home->showMaximized();
}

void system_Ui::image_Display(){

    QStringList path_List = image_Management_Nui::get_Working_Image_Paths();//*splashScreen::project_Path
    QStringListIterator file_Iterator(path_List);
    QStringList file_Names;

    while (file_Iterator.hasNext())
    {

        QString path = file_Iterator.next().toLocal8Bit().constData(); //Path Location
        QFile current_Image(path);
        QFileInfo current_Image_Info(current_Image.fileName());
        QString file_Name(current_Image_Info.fileName());
        file_Names.append(file_Name);

        QListWidgetItem *item = new QListWidgetItem(QIcon(path),QString(file_Name));
        item->setFlags(item->flags() | Qt::ItemIsUserCheckable); // set checkable flag
        item->setCheckState(Qt::Unchecked); // AND initialize check state
        ui->listWidget->addItem(item);
        ui->work_Images->addItem(item);
    }
}



void system_Ui::on_listWidget_itemClicked(QListWidgetItem *item) //Produce the selected Image in the Thumbnail
{
    QString preview_Image = splashScreen::project_Path+ "/images/wd/" +item->text();
//    qInfo() << "Item Selected:" << preview_Image;
    this->base_Image = QImage(preview_Image);
    QPixmap pix = QPixmap::fromImage(this->base_Image);
    int w = ui->image_Preview->width();
    int h = ui->image_Preview->height();
    ui->image_Preview->clear();
    ui->image_Preview->setPixmap(pix.scaled(w,h,Qt::KeepAspectRatio));
    ui->image_Preview->update();

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
    ui->metadata_Table->setItem(5, 0, new QTableWidgetItem( QString::number(base_Image.width()))); // Image width
    ui->metadata_Table->setItem(6, 0, new QTableWidgetItem( QString::number(base_Image.height()))); // Image height


}

/*
 * Triggers the event for image_Management_Nui::import()
 */
void system_Ui::on_import_btn_clicked()
{
    image_Management_Nui::import(this);

    // We must clear the listWidget in order to prevent populating it with the
    // same items repeatedly
    ui->listWidget->clear();
    ui->work_Images->clear();
    system_Ui::image_Display();
}

/*
 * When the delete button is pressed it will get all the items
 * in the QListWidget that are Qt::Checked and pass them to the
 * delete function to be deleted (or not, depending on the user's choice).
 */
void system_Ui::on_delete_Btn_clicked()
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
            checked_Image_Names<< item->text();
        }
    }

    image_Management_Nui::delete_(checked_Image_Names);

    // We must clear the listWidget in order to prevent populating it with the
    // same items repeatedly
    ui->listWidget->clear();
    ui->work_Images->clear();
    system_Ui::image_Display();
}




// ===========================Cropped Image Page =========================================================


// From::  https://stackoverflow.com/questions/23698114/how-can-i-apply-a-graphic-effect-to-the-image-in-qlistview
QImage system_Ui::apply_Effect_To_Pixmap(QImage src, QGraphicsEffect *effect, int extent)
{
    if(src.isNull()) return QImage();   //No need to do anything else!
    if(!effect) return src;             //No need to do anything else!
    QGraphicsScene scene;
    QGraphicsPixmapItem item;
    item.setPixmap(QPixmap::fromImage(src));
    item.setGraphicsEffect(effect);
    scene.addItem(&item);
    QImage res(src.size()+QSize(extent*2, extent*2), QImage::Format_ARGB32);
    res.fill(Qt::transparent);
    QPainter ptr(&res);
    scene.render(&ptr, QRectF(), QRectF( -extent, -extent, src.width()+extent*2, src.height()+extent*2 ) );
    return res;
}

QPixmap system_Ui::apply_Effect_To_Pixmap(QPixmap src, QGraphicsEffect *effect, int extent)
{
    if(src.isNull()) return QPixmap();   //No need to do anything else!
    if(!effect) return src;             //No need to do anything else!
    QGraphicsScene scene;
    QGraphicsPixmapItem item;
    item.setPixmap(src);
    item.setGraphicsEffect(effect);
    scene.addItem(&item);
    QImage res(src.size()+QSize(extent*2, extent*2), QImage::Format_ARGB32);
    res.fill(Qt::transparent);
    QPainter ptr(&res);
    scene.render(&ptr, QRectF(), QRectF( -extent, -extent, src.width()+extent*2, src.height()+extent*2 ) );
    return QPixmap::fromImage(res);
}

void system_Ui::update_Main_Cropped_Image()
{
    ui->image_Graphics_View->update();
}

void system_Ui::update_Crop_Preview_Image()
{
    int h = this->selected_Area->get_Height();
    int w = this->selected_Area->get_Width();

    QPixmap base_Pix = this->base_Image_2->pixmap();
    QPainter *paint = new QPainter(&base_Pix);
    QPixmap target(h, w);

    paint = new QPainter(&target);
    tuple<int, int> pos = this->selected_Area->get_Position();
    paint->drawPixmap(-get<0>(pos), -get<1>(pos), base_Pix);


    ui->preivew_Label_2->clear();
    ui->preivew_Label_2->setPixmap(target);
    ui->preivew_Label_2->update();

    int brush_Size = int(5);

    QPen rect_Brush = QPen(selected_Area->get_Colour());
    rect_Brush.setWidth(brush_Size);

    paint->setPen(rect_Brush);

    paint->drawRect(selected_Area->x(), selected_Area->y(), h,w+brush_Size); //(brush_Size / 2, brush_Size / 2, (h * 2) - (brush_Size), (w * 2) - (brush_Size));

    paint->end();
}

void system_Ui::reload_Preview()
{   int h = this->selected_Area->get_Height();
    int w = this->selected_Area->get_Width();
    QPixmap target(h, w);

    ui->preivew_Label_2->clear();
    ui->preivew_Label_2->setPixmap(target);
    ui->preivew_Label_2->update();
}

void system_Ui::on_work_Images_itemDoubleClicked(QListWidgetItem *item)
{
    QString image_Path_2 = splashScreen::project_Path+ "/images/wd/" +item->text();
    this->base_Image_2->setPixmap(QPixmap::fromImage(QImage(image_Path_2)));

    this->update_Main_Cropped_Image();
    this->reset_Crop_Image_Zoom();
    this->reload_Preview();
}

void system_Ui::on_crop_btn_clicked()
{
    QString image_Path = QFileDialog::getSaveFileName(
            this,
            tr("Save File"),
            "",
            tr("JPEG(*.jpg *.jpeg);;PNG(*.png)")
            );
    QImage crop = ui->preivew_Label_2->pixmap()->toImage();
    crop.save(image_Path);
}

/// \brief RESET THE X,Y,HEIGHT,WIDTH AND THE PREVIEW OF THE CROPPING BOX
void system_Ui::on_cancel_btn_clicked()
{
    this->reload_Preview();
    selected_Area->set_Width(100);
    selected_Area->set_Height(100);
    selected_Area->set_Position(0,0);

    ui->horizontal_Slider_X_2->setValue(0);
    ui->horizontal_Slider_Y_2->setValue(0);
    ui->horizontal_Slider_Height->setValue(100);
    ui->horizontal_Slider_Width->setValue(100);


    ui->spin_Box_X_2->setValue(0);
    ui->spin_Box_Y_2->setValue(0);
    ui->spin_Box_Height->setValue(100);
    ui->spin_Box_Width->setValue(100);
}

/// \brief Updates the images displayed on screen by painting over the base image
void system_Ui::image_Crop_Zoom(int percent)
{
    zoom_Percentage += percent;

    ui->image_Graphics_View->scale((100 + percent) / 100.0, (100 + percent) / 100.0);


    ui->zoom_In_Button_2->setEnabled(zoom_Percentage < 300);
    ui->zoom_Out_Button_2->setEnabled(zoom_Percentage > 33);
}

void system_Ui::set_RGB(int r, int g, int b)
{
    this->selected_Area->set_Colour(r,g,b);
}

void system_Ui::reset_Crop_Image_Zoom()
{
    ui->image_Graphics_View->resetTransform();

    int w = ui->image_Graphics_View->viewport()->width();
    int h = ui->image_Graphics_View->viewport()->height();

    qreal s = fmin(w/float(base_Image_2->pixmap().width()),h/float(base_Image_2->pixmap().height()));

    ui->image_Graphics_View->scale(s, s);

}

void system_Ui::adjust_Scroll_Bar(QScrollBar *scrollBar, double factor)
{
    factor = factor / 100.0;
    scrollBar->setValue(int(factor * scrollBar->value()
                            + ((factor - 1) * scrollBar->pageStep()/2)));
}

void system_Ui::on_spin_Box_X_2_valueChanged(int X)
{
    this->selected_Area->setX(X);
    ui->horizontal_Slider_X_2->setValue(X);
    this->update_Main_Cropped_Image();
    this->update_Crop_Preview_Image();
}

void system_Ui::on_spin_Box_Y_2_valueChanged(int Y)
{
    this->selected_Area->setY(Y);
    ui->horizontal_Slider_Y_2->setValue(Y);
    this->update_Main_Cropped_Image();
    this->update_Crop_Preview_Image();

}

void system_Ui::on_spin_Box_Height_valueChanged(double value)
{
//    double delta_heigth = value - selected_Area->get_Height();

    this->selected_Area->set_Height(value);
    this->selected_Area->set_Position(this->selected_Area->x() , this->selected_Area->y());// - delta_heigth);

    this->update_Main_Cropped_Image();
    this->update_Crop_Preview_Image();

    ui->spin_Box_Y_2->setMaximum(this->base_Image_2->pixmap().height() - (selected_Area->get_Height()));
    ui->horizontal_Slider_Y_2->setMaximum(this->base_Image_2->pixmap().height() - (selected_Area->get_Height()));

    ui->spin_Box_X_2->setValue(this->selected_Area->x());
    ui->spin_Box_Y_2->setValue(this->selected_Area->y());
    ui->horizontal_Slider_X_2->setValue(this->selected_Area->x());
    ui->horizontal_Slider_Y_2->setValue(this->selected_Area->y());

}

void system_Ui::on_spin_Box_Width_valueChanged(double value)
{

//    double delta_width = value - selected_Area->get_Width();

    this->selected_Area->set_Width(value);
    this->selected_Area->set_Position(this->selected_Area->x(), this->selected_Area->y());// - delta_width);

    this->update_Main_Cropped_Image();
    this->update_Crop_Preview_Image();

    ui->spin_Box_X_2->setMaximum(this->base_Image_2->pixmap().width() - (selected_Area->get_Width()));
    ui->horizontal_Slider_X_2->setMaximum(this->base_Image_2->pixmap().width() - (selected_Area->get_Width()));

    ui->spin_Box_X_2->setValue(this->selected_Area->x());
    ui->spin_Box_Y_2->setValue(this->selected_Area->y());
    ui->horizontal_Slider_X_2->setValue(this->selected_Area->x());
    ui->horizontal_Slider_Y_2->setValue(this->selected_Area->y());

}

void system_Ui::on_horizontal_Slider_X_2_valueChanged(int value)
{
    this->selected_Area->setX(value);
    ui->spin_Box_X_2->setValue(value);
    this->update_Main_Cropped_Image();
}

void system_Ui::on_horizontal_Slider_Y_2_valueChanged(int value)
{
    this->selected_Area->setY(value);
    ui->spin_Box_Y_2->setValue(value);
    this->update_Main_Cropped_Image();
}

void system_Ui::on_horizontal_Slider_Height_valueChanged(int value)
{
    this->selected_Area->set_Height(value);
    this->selected_Area->set_Position(this->selected_Area->x(), this->selected_Area->y());

    this->update_Main_Cropped_Image();
    this->update_Crop_Preview_Image();

    ui->spin_Box_Y_2->setMaximum(this->base_Image_2->pixmap().height() - (selected_Area->get_Height()));
    ui->horizontal_Slider_Y_2->setMaximum(this->base_Image_2->pixmap().height() - (selected_Area->get_Height()));
    this->set_Crop_Maximums();

    ui->spin_Box_X_2->setValue(this->selected_Area->x());
    ui->spin_Box_Y_2->setValue(this->selected_Area->y());
    ui->horizontal_Slider_X_2->setValue(this->selected_Area->x());
    ui->horizontal_Slider_Y_2->setValue(this->selected_Area->y());

    ui->spin_Box_Height->setValue(value);


}

void system_Ui::on_horizontal_Slider_Width_valueChanged(int value)
{
    this->selected_Area->set_Width(value);
    this->selected_Area->set_Position(this->selected_Area->x(), this->selected_Area->y());

    this->update_Main_Cropped_Image();
    this->update_Crop_Preview_Image();

    ui->spin_Box_X_2->setMaximum(this->base_Image_2->pixmap().width() - (selected_Area->get_Width()));
    ui->horizontal_Slider_X_2->setMaximum(this->base_Image_2->pixmap().width() - (selected_Area->get_Width()));
    this->set_Crop_Maximums();

    ui->spin_Box_X_2->setValue(this->selected_Area->x());
    ui->spin_Box_Y_2->setValue(this->selected_Area->y());
    ui->horizontal_Slider_X_2->setValue(this->selected_Area->x());
    ui->horizontal_Slider_Y_2->setValue(this->selected_Area->y());

    ui->spin_Box_Width->setValue(value);
}

void system_Ui::on_horizontal_Scroll_Bar_Red_2_valueChanged(int value)
{
    this->selected_Area->set_R(value);
    this->update_Main_Cropped_Image();
}

void system_Ui::on_horizontal_Scroll_Bar_Green_2_valueChanged(int value)
{
    this->selected_Area->set_G(value);
    this->update_Main_Cropped_Image();
}

void system_Ui::on_horizontal_Scroll_Bar_Blue_2_valueChanged(int value)
{
    this->selected_Area->set_B(value);
    this->update_Main_Cropped_Image();
}

void system_Ui::on_colour_Selector_Button_2_clicked()
{
    QColor new_Colour = QColorDialog::getColor(this->selected_Area->get_Colour(), this );
    this->selected_Area->set_Colour(new_Colour);

    ui->horizontal_Scroll_Bar_Red_2->setValue(new_Colour.red());
    ui->horizontal_Scroll_Bar_Green_2->setValue(new_Colour.green());
    ui->horizontal_Scroll_Bar_Blue_2->setValue(new_Colour.blue());
}

bool system_Ui::load_Cropping_File(const QString &fileName)
{
    QImageReader reader(fileName);
    reader.setAutoTransform(true);
    const QImage new_Image_2 = reader.read();
//    qInfo()<<new_Image_2;
    if (new_Image_2.isNull()) {
        QMessageBox::information(this, QGuiApplication::applicationDisplayName(),
                                 tr("Cannot load %1: %2")
                                 .arg(QDir::toNativeSeparators(fileName), reader.errorString()));
        return false;
    }
    base_Image_2->pixmap() = QPixmap::fromImage(new_Image_2);

    setWindowFilePath(fileName);

    const QString message = tr("Opened \"%1\", %2x%3, Depth: %4")
        .arg(QDir::toNativeSeparators(fileName)).arg(base_Image_2->pixmap().width()).arg(base_Image_2->pixmap().height()).arg(base_Image_2->pixmap().depth());
    statusBar()->showMessage(message);

    this->set_Crop_Maximums();
    this->update_Main_Cropped_Image();
    this->reset_Crop_Image_Zoom();

    return true;
}

void system_Ui::image_Zoom(int percent)
{
    zoom_Percentage += percent;

    ui->image_Graphics_View->scale((100 + percent) / 100.0, (100 + percent) / 100.0);


    ui->zoom_In_Button_2->setEnabled(zoom_Percentage < 300);
    ui->zoom_Out_Button_2->setEnabled(zoom_Percentage > 33);
}

static void initialize_Image_File_Dialog(QFileDialog &dialog, QFileDialog::AcceptMode acceptMode)
{
    static bool first_Dialog = true;

    if (first_Dialog) {
        first_Dialog = false;
        const QStringList pictures_Locations = QStandardPaths::standardLocations(QStandardPaths::PicturesLocation);
        dialog.setDirectory(pictures_Locations.isEmpty() ? QDir::currentPath() : pictures_Locations.last());
    }

    QStringList mimeTypeFilters;
    const QByteArrayList supportedMimeTypes = acceptMode == QFileDialog::AcceptOpen
        ? QImageReader::supportedMimeTypes() : QImageWriter::supportedMimeTypes();
    foreach (const QByteArray &mimeTypeName, supportedMimeTypes)
        mimeTypeFilters.append(mimeTypeName);
    mimeTypeFilters.sort();
    dialog.setMimeTypeFilters(mimeTypeFilters);
    dialog.selectMimeTypeFilter("image/jpeg");
    if (acceptMode == QFileDialog::AcceptSave)
        dialog.setDefaultSuffix("jpg");
}

void system_Ui::on_open_Button_2_clicked()
{
    QFileDialog dialog(this, tr("Open File"));
    initialize_Image_File_Dialog(dialog, QFileDialog::AcceptOpen);

    while (dialog.exec() == QDialog::Accepted && !load_Cropping_File(dialog.selectedFiles().first())) {};
}

void system_Ui::on_zoom_Reset_Button_2_clicked()
{
    reset_Crop_Image_Zoom();
}

void system_Ui::on_zoom_In_Button_2_clicked()
{
    image_Zoom(20);
}

void system_Ui::on_zoom_Out_Button_2_clicked()
{
    image_Zoom(-20);
}

void system_Ui::set_Crop_Maximums()
{
//    double center = ((0.5 * selected_Area->get_Width())+
//                     (0.5 * selected_Area->get_Height()));
//    ui->horizontal_Slider_X_2->setMaximum(selected_Area->x()- (center) * 2);
//    ui->horizontal_Slider_Y_2->setMaximum(selected_Area->y()- (center) * 2);

    ui->horizontal_Slider_X_2->setMaximum(this->base_Image_2->pixmap().width() - (selected_Area->get_Width())); // check this OVER!!
    ui->horizontal_Slider_Y_2->setMaximum(this->base_Image_2->pixmap().height() - (selected_Area->get_Height()));

    ui->spin_Box_X_2->setMaximum(this->base_Image_2->pixmap().width() - (selected_Area->get_Width()));
    ui->spin_Box_Y_2->setMaximum(this->base_Image_2->pixmap().height() - (selected_Area->get_Height()));
}

void system_Ui::on_horizontal_Slider_X_2_sliderReleased()
{
    this->update_Crop_Preview_Image();
}

void system_Ui::on_horizontal_Slider_Y_2_sliderReleased()
{
    this->update_Crop_Preview_Image();
}

QString system_Ui::load_Crop_Image_Icons()
{
    ui->work_Images->setViewMode(QListWidget::IconMode);
    ui->work_Images->setIconSize(QSize(100,50));
    ui->work_Images->setResizeMode(QListWidget::Adjust);

    QStringList path_List = image_Management_Nui::get_Working_Image_Paths();//*splashScreen::project_Path
    QStringListIterator file_Iterator(path_List);

    while (file_Iterator.hasNext())
    {
        QThread *thread = new QThread();
        image_Gatherer *ig = new image_Gatherer();
        ig->moveToThread( thread );

        QString path = file_Iterator.next().toLocal8Bit().constData(); //Path Location
        QFile current_Image(path);
        QFileInfo current_Image_Info(current_Image.fileName());
        QString file_Name(current_Image_Info.fileName());

        QObject::connect( thread, SIGNAL(started()), ig, SLOT(start()) );
        QObject::connect( ig, SIGNAL(finished(const QImage &, const QString &)), this, SLOT(add_Crop_Item_To_List(const QImage &, const QString &)));

        ig->setInput(file_Name);
        thread_Count++;
        thread->start();
    }
    return  file_Iterator.previous().toLocal8Bit().constData();
}

void system_Ui::add_Crop_Item_To_List(QImage image, QString filename)
{
//    qInfo() << "ITEM BEING ADDED: " << filename;
    QListWidgetItem *item = new QListWidgetItem(QIcon(QPixmap::fromImage(image)),filename);
    ui->work_Images->addItem(item);

    this->thread_Count--;

    if (thread_Count == 0){
        this->base_Image_2->pixmap() = QPixmap::fromImage(image);
        this->update_Main_Cropped_Image();
        this->reset_Crop_Image_Zoom();
    }
}

void system_Ui::showEvent(QShowEvent *ev)
{
    QMainWindow::showEvent(ev);

    //this->base_Image_2->setPixmap(QPixmap::fromImage(QImage(this->load_Crop_Image_Icons())));
    //ui->horizontal_Slider_Width->setMaximum(this->base_Image_2->pixmap().width());
    //ui->horizontal_Slider_Height->setMaximum(this->base_Image_2->pixmap().height());

    this->reset_Crop_Image_Zoom();
    this->update_Crop_Preview_Image();
    this->set_Crop_Maximums();

    Q_UNUSED(ev);
#ifndef QT_NO_CURSOR
   // setCursor(Qt::BlankCursor);
#endif
}

void system_Ui::on_check_Box_Spherical_4_stateChanged(int arg)
{
    if(arg == 0)
    {
        // ### TODO: 06/04/20 ###
        // Add functionality to revert to a single image when un-checking the checkbox.
        // Perhaps the image active before the average was used.
    }
    else
    {
        // ### BUG: 06/04/20 ###
        // Cancel currently doesn't work. For some reason when adding the cancel functionality the popup no longer appears.
        // Will have to experiment more in the future.

        QPixmap* avg_Image = new QPixmap(base_Image_2->pixmap().size());
        QPainter *paint = new QPainter(avg_Image);
        const int COUNT = ui->work_Images->count();

        paint->setOpacity(1.0/ COUNT);

        QProgressDialog progress("Processing Images...", "Close", 0, COUNT, this);
        progress.setWindowModality(Qt::WindowModal);

        for(int i = 0; i < COUNT; ++i)
        {
            progress.setValue(i);

            QString image_Path = splashScreen::project_Path + "/images/wd/" + ui->work_Images->item(i)->text();
            paint->drawImage(0,0,QImage(image_Path));

        }

        progress.setValue(COUNT);

        this->base_Image_2->setPixmap(*avg_Image);
        this->update_Main_Cropped_Image();

    }
}

bool system_Ui::eventFilter(QObject *object, QEvent *event)
{
    if (event->type() == QEvent::GraphicsSceneMouseRelease){
        ui->spin_Box_X_2->setValue(int(selected_Area->x()));
        ui->spin_Box_Y_2->setValue(int(selected_Area->y()));

        ui->horizontal_Slider_X_2->setValue(int(selected_Area->x()));
        ui->horizontal_Slider_Y_2->setValue(int(selected_Area->y()));
    }
    return QWidget::eventFilter( object, event );
}


//==================================== Page change buttons  ===============================

void system_Ui::on_marble_Detection_Btn_clicked()
{
    ui->stackedWidget->setCurrentIndex(1);
    //*marble_Detection *md = new*/ marble_Detection(this, ui->work_Images->item(0)->text());
}

void system_Ui::on_remove_Marble_Btn_clicked()
{
    ui->stackedWidget->setCurrentIndex(2);
}

void system_Ui::on_export_Btn_clicked()
{
    ui->stackedWidget->setCurrentIndex(3);
}

void system_Ui::on_image_Management_Btn_2_clicked()
{
    ui->stackedWidget->setCurrentIndex(0);
}

void system_Ui::on_remove_Marble_Btn_2_clicked()
{
    ui->stackedWidget->setCurrentIndex(2);
}

void system_Ui::on_export_Btn_2_clicked()
{
    ui->stackedWidget->setCurrentIndex(3);
}

void system_Ui::on_image_Management_Btn_3_clicked()
{
    ui->stackedWidget->setCurrentIndex(0);
}

void system_Ui::on_marble_Detection_Btn_3_clicked()
{
    ui->stackedWidget->setCurrentIndex(1);
}

void system_Ui::on_export_Btn_3_clicked()
{
     ui->stackedWidget->setCurrentIndex(3);
}

void system_Ui::on_image_Management_Btn_4_clicked()
{
    ui->stackedWidget->setCurrentIndex(0);
}

void system_Ui::on_marble_Detection_Btn_4_clicked()
{
    ui->stackedWidget->setCurrentIndex(1);
}

void system_Ui::on_remove_Marble_Btn_4_clicked()
{
    ui->stackedWidget->setCurrentIndex(2);
}


//======================================== FITTERS PAGE ================================
/// Runs the selected fitter program on the images in the {@link CropExecuteLayout#lpImagesGrid} by creating a new
/// LP file for them, cropping them if the crop is selected, and running the fitter using the new LP file. Prints
/// the output of th e fitter to the {@link CropExecuteLayout#fitterOutputArea}.Deals with all errors that
/// could occur in this method through the use of an error dialog.



void system_Ui::on_generate_Btn_clicked()
{
     QString ptm_Option = ui->ptm_Luminance->currentText(); // check t+he current luminance option selected e.g {rgb / lrgb}
     QString hsh_Option = ui->hsh_Order->currentText();


    if(ui->ptm_Fitter->isChecked()){


        if(ptm_Option == "RGB"){  // add the selected luminace as an argument
            fitter_Args += " -f 0 ";
        }
        else if(ptm_Option == "LRGB"){
            fitter_Args += " -f 1 ";
        }

        if (ptm_Option != "" && fitter_Args.size() == 3 && ui->temp->text() != "" && ui->fitter_Placeholder->text() != "" && ui->output_Placeholder->text()!=""){ // make sure that all the necessary arguments are present
            /* the ptm fitter has command-line args of :
                    <fitter location> -i <lp file location> -o <destination filepath> -f <rgb / lrgb>
            */
            ui->status->setText("Loading...");
            ui->generate_Btn->setDisabled(true);
            fitter_Location += fitter_Args.join(" ");   // entire command line executable with the arguments


            try {
                //run the executable with the command-line arguments
                QProcess *process = new QProcess(this);

                ui->progress_Bar->setMaximum(100);
                ui->progress_Bar->setMinimum(0);

                connect (process, SIGNAL(readyReadStandardOutput()), this, SLOT(result()));
                process->start(fitter_Location);


                if (process->waitForFinished(-1)){
                    // will wait forever until finished
                    ui->progress_Bar->setValue(100);
                    ui->status->setText("Finished...");

                    std_Output = process->readAllStandardOutput();
                    std_Error = process->readAllStandardError();
                    ui->fitter_Info->setText("Worked Sucessfully\n------------------\n"+std_Output);;
                    ui->generate_Btn->setDisabled(true);
                }



            }catch (exception e){

                ui->fitter_Info->setText("Failed to Work\n------------------\n"+std_Error);

            }
        }
        else{
                /*
                 * A summary is given containing all images that have been confirmed to be
                 * deleted as well as those that have confirmed to be cancelled.
                 */
               QString message = error_Message(false);

                QMessageBox Error_Summary;
                Error_Summary.setText("PTM Fitter Error");
                Error_Summary.setInformativeText(message);
                Error_Summary.setStandardButtons(QMessageBox::Ok);
                Error_Summary.setDefaultButton(QMessageBox::Ok);
                Error_Summary.exec();
            }
    }

    else if(ui->hsh_Fitter->isChecked()){
        // Clear all the fields.


        QString hsh_Option = ui->hsh_Order->currentText(); // check the current luminance option selected e.g {rgb / lrgb}

        if ( lp_Path != "" && output_Path != "" && hsh_Option != ""){
            //&& ui->temp->text() !="" && ui->fitter_Placeholder->text() !="" && ui->output_Placeholder->text()!="" && ui->hsh_Order->currentText() != ""
            /* the hsh has command-line args of :
                            <fitter location> <lp file location> <HSH order> <destination filepath>
            */



            fitter_Location += " "+ lp_Path + hsh_Option +" " + output_Path; // entire command line executablle with the arguments
            try {
                //run the executable with the command-line arguments
                qInfo()<<fitter_Location;

            QProcess *process = new QProcess(this);
            ui->progress_Bar->reset();
            ui->progress_Bar->setMaximum(100);
            ui->progress_Bar->setMinimum(0);

            connect (process, SIGNAL(readyReadStandardOutput()), this, SLOT(result()));
            process->start(fitter_Location);

            if (process->waitForFinished(-1)){
                // will wait forever until finished
                ui->progress_Bar->setValue(100);
                ui->status->setText("Finished...");

                std_Output = process->readAllStandardOutput();
                std_Error = process->readAllStandardError();
                ui->fitter_Info->setText("Worked Sucessfully\n------------------\n"+std_Output);;
                ui->generate_Btn->setDisabled(true);
            }



            }catch (exception e){
                ui->fitter_Info->setText("Failed to Work\n------------------\n"+std_Error);

            }

        }
        else{
            /*
             * A summary is given containing all images that have been confirmed to be
             * deleted as well as those that have confirmed to be cancelled.
             */
            QString message = error_Message(true);

            QMessageBox Error_Summary;
            Error_Summary.setText("HSH Fitter Error");
            Error_Summary.setInformativeText(message);
            Error_Summary.setStandardButtons(QMessageBox::Ok);
            Error_Summary.setDefaultButton(QMessageBox::Ok);
            Error_Summary.exec();

        }
    }


}

void system_Ui::result()
{
//    while(-1){
//       QString t = process->readLine();
//       if( t.isEmpty() ) break;
      ui->progress_Bar->setValue( ui->progress_Bar->value()+1);
//   }
}

QString system_Ui:: error_Message(bool hsh)
{
    empty_LP = "Light Position directory";
    empty_Fitter = "Fitter directory";
    empty_Output = "Output file directory";
    if (hsh){
        dropdown_Option = ui->hsh_Order->currentText() == "" ;
        empty_Order = "Hsh Order";
        fitter = ".hsh";

    }
    else {
        dropdown_Option = ui->ptm_Luminance->currentText() == "" ;
        empty_Order = "PTM Luminance";
        fitter = ".ptm";

    }


    if (ui->temp->text() =="" && ui->fitter_Placeholder->text() =="" && ui->output_Placeholder->text()=="" && dropdown_Option){
        summary = "The following fields were empty: \n - " +  empty_LP + "\n - " + empty_Fitter + "\n - " + empty_Output  + "\n - " + empty_Order +"\nPlease fill them in and then generate your output"+ fitter +" file";
    }

    else if (ui->temp->text() =="" && ui->fitter_Placeholder->text() =="" && dropdown_Option ){
        summary = "The following fields were empty:\n - " +  empty_LP + "\n - " + empty_Fitter  + "\n - " + empty_Order + "\n Please fill them in and then generate your output"+ fitter +" file";
    }

    else if (ui->temp->text() =="" && ui->fitter_Placeholder->text() =="" && ui->output_Placeholder->text() == "" ){
        summary = "The following fields were empty:\n - " +  empty_LP + "\n - " + empty_Fitter  + "\n - " + empty_Output + "\n Please fill them in and then generate your output"+ fitter +" file";
    }

    else if (ui->temp->text() ==""  && ui->output_Placeholder->text()=="" && dropdown_Option){
        summary = "The following fields were empty: \n - " +  empty_LP + "\n - " + empty_Output  + "\n - " + empty_Order + "\nPlease fill them in and then generate your output"+ fitter +" file";
    }

    else if ( ui->fitter_Placeholder->text() =="" && ui->output_Placeholder->text()=="" && dropdown_Option){
        summary = "The following fields were empty: \n - " +  empty_Fitter + "\n - " + empty_Output  + "\n - " + empty_Order + "\nPlease fill them in and then generate your output"+ fitter +" file";
    }

    else if ( ui->fitter_Placeholder->text() =="" && ui->output_Placeholder->text()=="" && ui->temp->text() == ""){
        summary = "The following fields were empty: \n - " + empty_LP  + "\n - " + empty_Fitter   + "\n - " + empty_Output  + "\nPlease fill them in and then generate your output"+ fitter +" file";
    }



    else if (ui->temp->text() =="" && ui->fitter_Placeholder->text() =="" ){
        summary = "The following fields were empty:\n - " +  empty_LP + "\n - " + empty_Fitter  + "\n Please fill them in and then generate your "+ fitter +" file";
    }

    else if (ui->temp->text() ==""  && dropdown_Option){
        summary = "The following fields were empty: \n - " +  empty_LP + "\n - " + empty_Order + "\nPlease fill them in and then generate your "+ fitter +" file";
    }

    else if ( ui->output_Placeholder->text()=="" && ui->temp->text() == ""){
        summary = "The following fields were empty: \n - " + empty_LP   + "\n - " + empty_Output  + "\nPlease fill them in and then generate your "+ fitter +" file";
    }


    else if ( ui->fitter_Placeholder->text() =="" && ui->output_Placeholder->text()==""){
        summary = "The following fields were empty: \n - " +  empty_Fitter + "\n - " + empty_Output  + "\nPlease fill them in and then generate your "+ fitter +" file";
    }


    else if ( ui->fitter_Placeholder->text() =="" && dropdown_Option){
        summary = "The following fields were empty: \n - " + empty_Fitter + "\n - " + empty_Order +"\nPlease fill them in and then generate your "+ fitter +" file";
    }


    else if ( ui->output_Placeholder->text()=="" && dropdown_Option){
        summary = "The following fields were empty: \n - " + empty_Output  + "\n - " + empty_Order  + "\nPlease fill them in and then generate your "+ fitter +" file";
    }



    else if (ui->temp->text() ==""){
        summary = "The following fields were empty: \n - " +  empty_LP + "\nPlease fill them in and then generate your "+ fitter +" file";
    }

    else if ( ui->fitter_Placeholder->text() =="" ){
        summary = "The following fields were empty: \n - " +  empty_Fitter + "\nPlease fill them in and then generate your "+ fitter +" file";
    }

    else if (ui->output_Placeholder->text()==""){
        summary = "The following fields were empty: \n - " +  empty_Output + "\nPlease fill them in and then generate your "+ fitter +" file";
    }
    else if (dropdown_Option){
        summary = "The following fields were empty: \n - " +  empty_Order + "\nPlease fill them in and then generate your "+ fitter +" file";
    }

    return summary;
}

void system_Ui::on_cancel_fitter_Btn_clicked()
{
    ui->progress_Bar->reset();
    ui->status->setText("");
    ui->fitter_Info->clear();
    ui->temp->clear();
    ui->fitter_Placeholder->clear();
    ui->output_Placeholder->clear();
    //********************************
    ui->ptm_Fitter->setChecked(false);
    ui->hsh_Fitter->setChecked(false);
    //********************************
    ui->hsh_Order->setDisabled(true);
    ui->ptm_Luminance->setDisabled(true);
    ui->generate_Btn->setEnabled(true);

}

void system_Ui::on_fitter_Location_clicked()
{
    QFileDialog dialog(this);

    QString filter_2 = "fitter(*.exe)";     //(ptm or hsh)


    fitter_Location = dialog.getOpenFileName(this, tr("Open File"),
                                                    "",
                                                    filter_2);

    ui->fitter_Placeholder->setText(fitter_Location);


}

void system_Ui::on_lp_Location_clicked()
{
        QFileDialog dialog(this);

        QString filter = "lp(*.lp)";


        QString fileName = dialog.getOpenFileName(this, tr("Open File"),
                                                        "",
                                                        filter);

        ui->temp->setText(fileName);
        if(ui->ptm_Fitter->isChecked()){
            fitter_Args += " -i " + fileName +" ";
        }else{
            lp_Path += fileName +" ";
        }


}

void system_Ui::on_output_Location_clicked()
{
    QFileDialog dialog(this);
    dialog.setFileMode(QFileDialog::ExistingFile);
    dialog.setOption(QFileDialog::ShowDirsOnly);
    QString output_Filename = "/output";

    // Stores the path of the user's choice.
    chosen_Location = dialog.getExistingDirectory() + output_Filename;

    if(ui->ptm_Fitter->isChecked()){
        chosen_Location+= ".ptm";
        fitter_Args += " -o " + chosen_Location + " ";
    }else{
        chosen_Location+= ".hsh";
        output_Path += chosen_Location + " ";
    }
    ui->output_Placeholder->setText(chosen_Location);
}

void system_Ui::on_resize_Checkbox_clicked()
{
    //TODO = RESIZE IMAGE
    ui->width_Measurement->setEnabled(true);
    ui->height_Measurement->setEnabled(true);
}

void system_Ui::on_ptm_Fitter_clicked()
{
    ui->hsh_Order->setDisabled(true);
    ui->ptm_Luminance->setEnabled(true);
    ui->generate_Btn->setEnabled(true);
    //*********************************
    ui->fitter_Info->clear();
    ui->temp->clear();
    ui->fitter_Placeholder->clear();
    ui->output_Placeholder->clear();
    ui->hsh_Order->setCurrentText("");
    ui->ptm_Luminance->setCurrentText("");

}

void system_Ui::on_hsh_Fitter_clicked()
{
    ui->hsh_Order->setEnabled(true);
    ui->ptm_Luminance->setDisabled(true);
    ui->fitter_Info->clear();
    ui->generate_Btn->setEnabled(true);

    //***********************************
    ui->fitter_Info->clear();
    ui->temp->clear();
    ui->fitter_Placeholder->clear();
    ui->output_Placeholder->clear();
    ui->hsh_Order->setCurrentText("");
    ui->ptm_Luminance->setCurrentText("");
}

QStringList system_Ui:: get_File_List()
{
    QStringList path_List = image_Management_Nui::get_Working_Image_Paths();//*splashScreen::project_Path
    QStringListIterator file_Iterator(path_List);
    QStringList file_Names;
    while (file_Iterator.hasNext())
    {
        QString path = file_Iterator.next().toLocal8Bit().constData(); //Path Location
        QString file_Name(path);
        file_Names.append(file_Name);

    }

    return file_Names;
}

void system_Ui::on_previous_Image_Btn_clicked()
{
    QStringList image_Paths = get_File_List();
    ui->image_Label_3->clear();
    ui->image_Name->clear();

    current_Slide--;

    if (current_Slide < 0)
        current_Slide = image_Paths.size()-1;


    QImage image = QImage(this->get_File_List().value(current_Slide));

    ui->image_Label_3->setPixmap(QPixmap::fromImage(image));
    ui->image_Label_3->update();

    ui->width_Measurement->setText(QString::number(image.width()));
    ui->height_Measurement->setText(QString::number(image.height()));
    QStringList pieces = image_Paths.value(current_Slide).split( "/" );
    QString neededWord = pieces.value( pieces.length() - 1 );
    ui->image_Name->setText(neededWord);
}

void system_Ui::on_next_Image_Btn_clicked()
{
    QStringList image_Paths = get_File_List();
    ui->image_Label_3->clear();
    ui->image_Name->clear();
    current_Slide++;
    if (current_Slide >= image_Paths.size())
      current_Slide = 0;

    QImage image = QImage(this->get_File_List().value(current_Slide));
    ui->image_Label_3->setPixmap(QPixmap::fromImage(image));
    ui->image_Label_3->update();

    ui->width_Measurement->setText(QString::number(image.width()));
    ui->height_Measurement->setText(QString::number(image.height()));
    QStringList pieces = image_Paths.value(current_Slide).split( "/" );
    QString neededWord = pieces.value( pieces.length() - 1 );
    ui->image_Name->setText(neededWord);
}

//==================== Metadata =========================







