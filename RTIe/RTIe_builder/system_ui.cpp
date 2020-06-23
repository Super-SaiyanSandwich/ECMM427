#include "system_ui.h"
#include "image_Management_Nui.h"
#include "splash_Screen.h"
#include "ui_system_ui.h"
#include "marble_Detection.h"
#include "project_Wizard.h"
#define dumpval(x) qDebug()<<#x<<'='<<x

#include <QTranslator>
#include <QFileDialog>
#include <QDebug>
#include <QPixmap>
#include <QListWidgetItem>
#include <QDebug>
#include <QFile>
#include <QFileDialog>
#include <QLabel>
#include <QLineEdit>
#include <QObject>
#include <QTextBrowser>
#include <QTableWidget>
#include <QDateTime>

#include <tuple>
#include <vector>
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

#include <QThread>
#include <QGraphicsPixmapItem>
#include <QGraphicsItem>


using namespace std;

// CONSTANT VALUES
#define CENTER_SCALE_FACTOR 0.3
#define SCROLL_AREA_HEIGHT 694.0
#define SCROLL_AREA_WIDTH 1044.0
#define CONTRAST_PIVOT_POINT 210
#define CONTRAST_SCALE 3


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
    crop_Selection_Screen->installEventFilter(this);



    this->base_Image_2 = crop_Selection_Screen->addPixmap(QPixmap(base_Image_2));
    this->base_Image_2->setFlag(QGraphicsItem::ItemClipsChildrenToShape, true);
    this->base_Image_2->setZValue(-10);


    //splashScreen::project_Path = "F:/Users/Dave/Documents/LearningQT/RTIe/fish_fossil-data-set_2000";



    this->selected_Area = new cropped_Area();
    selected_Area->setParentItem(this->base_Image_2);

    cropped_Area_List.append(selected_Area);

    QListWidgetItem *list_Icon = new QListWidgetItem("Area of Interest");
    ui->listWidget_3->addItem(list_Icon);
    ui->listWidget_3->setIconSize(QSize(60,60));

//    ui->listWidget_3->setViewMode(QListWidget::IconMode);
//    ui->listWidget_3->setResizeMode(QListWidget::Adjust);
//    ui->listWidget_3->setIconSize(QSize(100,50));


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
    //dialog.setNameFilter(tr("RTIe Files (*.rtie"));

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
        ui->listWidget_3->addItem(item);
    }


}

void system_Ui::on_listWidget_itemClicked(QListWidgetItem *item) //Produce the selected Image in the Thumbnail
{
    QString preview_Image = splashScreen::project_Path+ "/images/wd/" +item->text();
    qInfo() << "Item Selected:" << preview_Image;
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
        qInfo()<<" ";
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
//    ui->metadata_Table->setItem(2, 0, new QTableWidgetItem(item->text())); // Owner's Name
    ui->metadata_Table->setItem(3, 0, new QTableWidgetItem(editor)); // Editor's Name
    ui->metadata_Table->setItem(4, 0, new QTableWidgetItem(preview_Image)); // File location
    ui->metadata_Table->setItem(5, 0, new QTableWidgetItem(date_Created)); // Date Created
    ui->metadata_Table->setItem(6, 0, new QTableWidgetItem( QString::number(base_Image.width()))); // Image width
    ui->metadata_Table->setItem(7, 0, new QTableWidgetItem( QString::number(base_Image.height()))); // Image height


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
    ui->listWidget_3->clear();
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
    ui->listWidget_3->clear();
    system_Ui::image_Display();
}




// ===========================Cropped Image Page =========================================================

// From::   https://stackoverflow.com/questions/23698114/how-can-i-apply-a-graphic-effect-to-the-image-in-qlistview
QImage system_Ui::apply_Effect_To_Image(QImage src, QGraphicsEffect *effect, int extent)
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

QPixmap system_Ui::apply_Effect_To_Image(QPixmap src, QGraphicsEffect *effect, int extent)
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
    bool blur = false;
    int h = this->selected_Area->get_Height();
    int w = this->selected_Area->get_Width();

    QPixmap base_Pix = this->base_Image_2->pixmap();
    QPainter *paint = new QPainter(&base_Pix);
    QPixmap target(h * 2, w * 2);

    paint = new QPainter(&target);
    tuple<int, int> pos = this->selected_Area->get_Position();

    if (blur){
        QGraphicsBlurEffect *blur = new QGraphicsBlurEffect;
        blur->setBlurRadius(8);

        QPixmap blur_Pix = (apply_Effect_To_Image(base_Pix, blur));


        paint->drawPixmap(-get<0>(pos), -get<1>(pos), blur_Pix);
        paint->fillRect(0,0,h*2,w*2,QColor(0,0,0,14));
    }
    else{
        paint->fillRect(QRect(0,0,h*2,w*2),QBrush(Qt::gray));
    }


    QRegion mask(QRect(0, 0, h * 2, w * 2), QRegion::Ellipse);
    paint->setClipRegion(mask);

    paint->drawPixmap(-get<0>(pos), -get<1>(pos), base_Pix);


    ui->preivew_Label_2->clear();
    ui->preivew_Label_2->setPixmap(target);
    ui->preivew_Label_2->update();

    int brush_Size = int(h+w / 6.0);
    QPen rect_Brush = QPen(selected_Area->get_Colour());
    rect_Brush.setWidth(brush_Size);

    paint->setPen(rect_Brush);

    paint->drawRect(brush_Size / 2, brush_Size / 2, (h * 2) - (brush_Size), (w * 2) - (brush_Size));

    //ui->listWidget_2->item(cropped_Area_List.indexOf(selected_Area))->setIcon(QIcon(target));

    paint->end();
}

void system_Ui::inverted_Marker()
{


    ui->preivew_Label->clear();

    ui->preivew_Label->update();
}

void system_Ui::on_listWidget_3_itemClicked(QListWidgetItem *item)
{
    QString image_Path = splashScreen::project_Path+ "/images/wd/" +item->text();
    this->base_Image_2->setPixmap(QPixmap::fromImage(QImage(image_Path)));
    this->update_Main_Cropped_Image();
    this->reset_Image_Zoom();;
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

void system_Ui::on_cancel_btn_clicked()
{
    QApplication::exit();
}

/// \brief Updates the images displayed on screen by painting over the base image

//void system_Ui::update_Crop_Marker()
//{
//    //qInfo() << "TWtatat";
//    QPixmap base_Pix = QPixmap::fromImage(this->base_Image_2);
//    QPainter *paint = new QPainter(&base_Pix);

//    QPen pen;

//    pen.setBrush(QColor(r,g,b));
//    pen.setWidth(5);

//    int h = this->height;
//    int w = this->width;

//    paint->setPen(pen);

//    // Rectangle
//    paint->drawRect(this->x, this->y, h, w+5);

//    paint->end();


//    ui->image_Graphics_View->clear();
//    ui->image_Graphics_View->setPixmap(base_Pix);
//    ui->image_Graphics_View->update();

//    QPixmap target(h, w + 5);

//    paint = new QPainter(&target);


//    base_Pix = QPixmap::fromImage(this->base_Image_2);
//    paint->drawPixmap(-this->x, -this->y, base_Pix);


//    ui->preivew_Label_2->clear();
//    ui->preivew_Label_2->setPixmap(target);
//    ui->preivew_Label_2->update();
//}

void system_Ui::image_Crop_Zoom(int percent)
{
    zoom_Percentage += percent;

    ui->image_Graphics_View->scale((100 + percent) / 100.0, (100 + percent) / 100.0);


    ui->zoom_In_Button->setEnabled(zoom_Percentage < 300);
    ui->zoom_Out_Button->setEnabled(zoom_Percentage > 33);
}

void system_Ui::set_RGB(int r, int g, int b)
{
    this->selected_Area->set_Colour(r,g,b);
}

void system_Ui::reset_Image_Zoom()
{
    ui->image_Graphics_View->resetTransform();

    int w = ui->image_Graphics_View->viewport()->width();
    int h = ui->image_Graphics_View->viewport()->height();

    qreal s = fmin(w/float(base_Image_2->pixmap().width()),h/float(base_Image_2->pixmap().height()));

    ui->image_Graphics_View->scale(s, s);

}


//void system_Ui::image_Zoom_In(int percent)
//{
//    zoom_Percentage += percent;

//    float scaler =  SCROLL_AREA_HEIGHT / this->base_Image_2.height();
//    scaler = scaler < (SCROLL_AREA_WIDTH / this->base_Image_2.width()) ? scaler : (SCROLL_AREA_WIDTH / this->base_Image_2.width());

//    ui->image_Graphics_View->resize(this->base_Image_2.width() * scaler * zoom_Percentage / 100, this->base_Image_2.height() * scaler * zoom_Percentage / 100);
//    //ui->scrollArea->adjustSize();

//    adjust_Scroll_Bar(ui->scrollArea->horizontalScrollBar(), 100 + percent);
//    adjust_Scroll_Bar(ui->scrollArea->verticalScrollBar(), 100 + percent);

//    ui->zoom_In_Button_2->setEnabled(zoom_Percentage < 300);
//}

//void system_Ui::image_Zoom_Out(int percent)
//{
//    zoom_Percentage -= percent;

//    float scaler =  SCROLL_AREA_HEIGHT / this->base_Image_2.height();
//    scaler = scaler < (SCROLL_AREA_WIDTH / this->base_Image_2.width()) ? scaler : (SCROLL_AREA_WIDTH / this->base_Image_2.width());

//    ui->image_Graphics_View->resize(this->base_Image_2.width() * scaler * zoom_Percentage / 100, this->base_Image_2.height() * scaler * zoom_Percentage / 100);


//    adjust_Scroll_Bar(ui->scrollArea->horizontalScrollBar(), 100 - percent);
//    adjust_Scroll_Bar(ui->scrollArea->verticalScrollBar(), 100 - percent);

//    ui->zoom_Out_Button_2->setEnabled(zoom_Percentage > 33);
//}


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

//    qInfo() << "X Value Changed";
//    this->x = X;
//    ui->->setValue(X);
//    this->update_Crop_Marker();
}

void system_Ui::on_spin_Box_Y_2_valueChanged(int Y)
{
    this->selected_Area->setY(Y);
    ui->horizontal_Slider_Y_2->setValue(Y);
    this->update_Main_Cropped_Image();
    this->update_Crop_Preview_Image();

//    this->y = Y;
//    ui->horizontal_Slider_Y_2->setValue(Y);
//    this->update_Crop_Marker();
}

void system_Ui::on_spin_Box_Height_valueChanged(double height)
{
//    this->height = height;

//    ui->horizontal_Slider_Radius_2->setValue(height);
//    this->update_Crop_Marker();

//    ui->spin_Box_Y_2->setMaximum(base_Image_2.height() - height);
//    ui->horizontal_Slider_Y_2->setMaximum(base_Image_2.height() - height);

//    ui->spin_Box_X_2->setValue(this->x);
//    ui->spin_Box_Y_2->setValue(this->y);
//    ui->horizontal_Slider_X_2->setValue(this->x);
//    ui->horizontal_Slider_Y_2->setValue(this->y);


    double delta_heigth = height - selected_Area->get_Height();

    this->selected_Area->set_Height(height);
    this->selected_Area->set_Position(this->selected_Area->x() - delta_heigth, this->selected_Area->y() - delta_heigth);

    this->update_Main_Cropped_Image();
    this->update_Crop_Preview_Image();
    this->set_Crop_Maximums();

    ui->spin_Box_X->setValue(this->selected_Area->x());
    ui->spin_Box_Y->setValue(this->selected_Area->y());
    ui->horizontal_Slider_X->setValue(this->selected_Area->x());
    ui->horizontal_Slider_Y->setValue(this->selected_Area->y());

//    ui->horizontal_Slider_Radius->setValue(height);
}

void system_Ui::on_spin_Box_Width_valueChanged(double width)
{

//    this->width = width;

//    ui->horizontal_Slider_Radius_3->setValue(width);
//    this->update_Crop_Marker();

//    ui->spin_Box_X_2->setMaximum(base_Image_2.width() - 0.5*width);
//    ui->horizontal_Slider_X_2->setMaximum(base_Image_2.width() - 0.5*width);

//    ui->spin_Box_X_2->setValue(this->x);
//    ui->spin_Box_Y_2->setValue(this->y);
//    ui->horizontal_Slider_X_2->setValue(this->x);
//    ui->horizontal_Slider_Y_2->setValue(this->y);

    double delta_width = width - selected_Area->get_Width();

    this->selected_Area->set_Width(width);
    this->selected_Area->set_Position(this->selected_Area->x() - delta_width, this->selected_Area->y() - delta_width);

    this->update_Main_Cropped_Image();
    this->update_Crop_Preview_Image();
    this->set_Crop_Maximums();

    ui->spin_Box_X->setValue(this->selected_Area->x());
    ui->spin_Box_Y->setValue(this->selected_Area->y());
    ui->horizontal_Slider_X->setValue(this->selected_Area->x());
    ui->horizontal_Slider_Y->setValue(this->selected_Area->y());

//    ui->horizontal_Slider_Radius->setValue(height);
}

void system_Ui::on_horizontal_Slider_X_2_valueChanged(int value)
{
    this->selected_Area->setX(value);
    ui->spin_Box_X->setValue(value);
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


//    this->height = value;

//    ui->spin_Box_Radius_2->setValue(value);
//    this->update_Crop_Marker();

//    ui->spin_Box_Y_2->setMaximum(base_Image_2.height() - height);
//    ui->horizontal_Slider_Y_2->setMaximum(base_Image_2.height() - height);

//    ui->spin_Box_X_2->setValue(this->x);
//    ui->spin_Box_Y_2->setValue(this->y);
//    ui->horizontal_Slider_X_2->setValue(this->x);
//    ui->horizontal_Slider_Y_2->setValue(this->y);

    double delta_Height = value - selected_Area->get_Height();

    this->selected_Area->set_Height(value);
    this->selected_Area->set_Position(this->selected_Area->x() - delta_Height, this->selected_Area->y() - delta_Height);

    this->update_Main_Cropped_Image();
    this->update_Crop_Preview_Image();
    this->set_Crop_Maximums();

    ui->spin_Box_X_2->setValue(this->selected_Area->x());
    ui->spin_Box_Y_2->setValue(this->selected_Area->y());
    ui->horizontal_Slider_X_2->setValue(this->selected_Area->x());
    ui->horizontal_Slider_Y_2->setValue(this->selected_Area->y());

    ui->spin_Box_Height->setValue(value);


}

void system_Ui::on_horizontal_Slider_Width_valueChanged(int value)
{

//    this->width = width;


//    ui->spin_Box_Radius_3->setValue(value);
//    this->update_Crop_Marker();

//    ui->spin_Box_X_2->setMaximum(base_Image_2.width() - 0.5*width);
//    ui->horizontal_Slider_X_2->setMaximum(base_Image_2.width() - 0.5*width);

//    ui->spin_Box_X_2->setValue(this->x);
//    ui->spin_Box_Y_2->setValue(this->y);
//    ui->horizontal_Slider_X_2->setValue(this->x);
//    ui->horizontal_Slider_Y_2->setValue(this->y);


    double delta_Width = value - selected_Area->get_Width();

    this->selected_Area->set_Width(value);
    this->selected_Area->set_Position(this->selected_Area->x() - delta_Width, this->selected_Area->y() - delta_Width);

    this->update_Main_Cropped_Image();
    this->update_Crop_Preview_Image();
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

bool system_Ui::load_Cropping_File(const QString &file_Name)
{
//    QImageReader reader(fileName);
//    reader.setAutoTransform(true);
//    const QImage newImage = reader.read();
//    if (newImage.isNull()) {
//        QMessageBox::information(this, QGuiApplication::applicationDisplayName(),
//                                 tr("Cannot load %1: %2")
//                                 .arg(QDir::toNativeSeparators(fileName), reader.errorString()));
//        return false;
//    }
//    base_Image_2 = newImage;

//    setWindowFilePath(fileName);

//    const QString message = tr("Opened \"%1\", %2x%3, Depth: %4")
//        .arg(QDir::toNativeSeparators(fileName)).arg(base_Image_2.width()).arg(base_Image_2.height()).arg(base_Image_2.depth());
//    statusBar()->showMessage(message);

//    this->set_Maximums();
//    this->update_Crop_Marker();
//    this->reset_Image_Zoom();

//    return true;

    QImageReader reader(file_Name);
    reader.setAutoTransform(true);
    const QImage new_Image_2 = reader.read();
    qInfo()<<new_Image_2;
    if (new_Image_2.isNull()) {
        QMessageBox::information(this, QGuiApplication::applicationDisplayName(),
                                 tr("Cannot load %1: %2")
                                 .arg(QDir::toNativeSeparators(file_Name), reader.errorString()));
        return false;
    }
    base_Image_2->pixmap() = QPixmap::fromImage(new_Image_2);

    setWindowFilePath(file_Name);

    const QString message = tr("Opened \"%1\", %2x%3, Depth: %4")
        .arg(QDir::toNativeSeparators(file_Name)).arg(base_Image_2->pixmap().width()).arg(base_Image_2->pixmap().height()).arg(base_Image_2->pixmap().depth());
    statusBar()->showMessage(message);

    this->set_Crop_Maximums();
    this->update_Main_Cropped_Image();
    this->reset_Image_Zoom();

    return true;
}

void system_Ui::image_Zoom(int percent)
{
    zoom_Percentage += percent;

    ui->image_Graphics_View->scale((100 + percent) / 100.0, (100 + percent) / 100.0);


    ui->zoom_In_Button->setEnabled(zoom_Percentage < 300);
    ui->zoom_Out_Button->setEnabled(zoom_Percentage > 33);
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
    reset_Image_Zoom();
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
    double center = ((0.5 *selected_Area->get_Width()) + (0.5*selected_Area->get_Height()));
//    ui->horizontal_Slider_X_2->setMaximum(this->x - center * 2);
//    ui->horizontal_Slider_Y_2->setMaximum(this->y - center * 2);

//    ui->spin_Box_X_2->setMaximum(this->x - center * 2);
//    ui->spin_Box_Y_2->setMaximum(this->y - center * 2);

    ui->horizontal_Slider_X_2->setMaximum(this->selected_Area->x() - (center * 2)); // check this OVER!!
    ui->horizontal_Slider_Y_2->setMaximum(this->selected_Area->y() - (center * 2));
}


void system_Ui::on_test_Button_2_clicked()
{
    QRgb pixel;
    QColor col;
    int r, g, b;

    vector<tuple<int,int>> cluster_Points;

    QImage cropped_image = ui->preivew_Label_2->pixmap()->toImage();


    for(int x = 0; x < cropped_image.width(); x++)
    {
        for (int y = 0; y < cropped_image.height(); y++) {
            pixel  = cropped_image.pixel(x,y);
            col = QRgb(pixel);
            col.getRgb(&r, &g, &b);

            r -= CONTRAST_PIVOT_POINT;
            r *= CONTRAST_SCALE;
            r += CONTRAST_PIVOT_POINT;
            r = r > 255 ? 255 : r;
            r = r < 0 ? 0 : r;

            g -= CONTRAST_PIVOT_POINT;
            g *= CONTRAST_SCALE;
            g += CONTRAST_PIVOT_POINT;
            g = g > 255 ? 255 : g;
            g = g < 0 ? 0 : g;

            b -= CONTRAST_PIVOT_POINT;
            b *= CONTRAST_SCALE;
            b += CONTRAST_PIVOT_POINT;
            b = b > 255 ? 255 : b;
            b = b < 0 ? 0 : b;


            if ((r == g) and (g == b) and (b == 255))
            {
                cluster_Points.emplace_back(x ,y);
            }


            cropped_image.setPixel(x, y, qRgb(r, g, b));

        }
    }

    double sum_X = 0;
    double sum_Y = 0;
    int count = 0;

    for (tuple<int, int> p : cluster_Points)
    {
        sum_X += get<0>(p);
        sum_Y += get<1>(p);
        count++;
    }
    sum_X /= count;
    sum_Y /= count;

    sum_X = int(sum_X);
    sum_Y = int(sum_Y);


    QPixmap base_Pix = QPixmap::fromImage(cropped_image);
    ui->preivew_Label_2->setPixmap(base_Pix);
}

void system_Ui::on_horizontal_Slider_X_2_sliderReleased()
{
    this->update_Crop_Preview_Image();
}

void system_Ui::on_horizontal_Slider_Y_2_sliderReleased()
{
    this->update_Crop_Preview_Image();
}

//==================================== Page change buttons  ===============================

void system_Ui::on_marble_Detection_Btn_clicked()
{
    //ui->stackedWidget->setCurrentIndex(1);
    marble_Detection *md = new marble_Detection(this, ui->listWidget->item(0)->text());
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

//====================================================================================



//======================================== FITTERS PAGE ================================
/// Runs the selected fitter program on the images in the {@link CropExecuteLayout#lpImagesGrid} by creating a new
/// LP file for them, cropping them if the crop is selected, and running the fitter using the new LP file. Prints
/// the output of th e fitter to the {@link CropExecuteLayout#fitterOutputArea}.Deals with all errors that
/// could occur in this method through the use of an error dialog.

QStringList fitter_Args; // list of all arguments
QString fitter_Location;

void system_Ui::on_generate_Btn_clicked()
{
    QString ptm_Option = ui->ptm_Luminance->currentText(); // check t+he current luminance option selected e.g {rgb / lrgb}
    if(ptm_Option == "RGB"){  // add the selected luminace as an argument
        fitter_Args += " -f 0 ";
    }
    else if(ptm_Option == "LRGB"){
        fitter_Args += " -f 1 ";
    }


    QString hsh_Option = ui->hsh_Order->currentText(); // check the current luminance option selected e.g {rgb / lrgb}
    if(ptm_Option == "1"){  // add the selected luminace as an argument
        fitter_Args += "1";
    }
    else if(ptm_Option == "2"){
        fitter_Args += "2";
    }
    else if(ptm_Option == "3"){
        fitter_Args += "3";
    }

    if (ptm_Option != "" && ui->ptm_Fitter->isChecked() && fitter_Args.size() == 3){ // make sure that all the necessary arguments are present
        /* the ptm fitter has command-line args of :
                <fitter location> -i <lp file location> -o <destination filepath> -f <rgb / lrgb>
        */

        fitter_Location += fitter_Args.join(" "); // entire command line executablle with the arguments
        try {
            //run the executable with the command-line arguments
            qInfo()<<fitter_Location;
            qInfo()<<fitter_Args;
            QProcess *process = new QProcess(this);
            process->start(fitter_Location);
            QFile result;
            QDataStream inputStream{process}, outputStream{&result};

            dumpval(result.open(stdout, QFile::WriteOnly));
            ui->fitter_Info->setText("Worked Sucessfully");
            ui->generate_Btn->setDisabled(true);


        }catch (exception e){
            qInfo() << "This is an error message!";
        }
    }//TODO HSH FITTER
    else if (ui->hsh_Fitter->isChecked() && fitter_Args.size() == 3){
        /* the hsh has command-line args of :
                        <fitter location> <lp file location> <HSH order> <destination filepath>
        */

        // Clear all the fields.



        ui->fitter_Info->setText("HSH COMING SOON!!!");
        qInfo()<< "HSH COMING SOON";
    }
    else{
//        ui->fitter_Info->setText("Error Message: Fill all required boxes");
        /*
         * A summary is given containing all images that have been confirmed to be
         * deleted as well as those that have confirmed to be cancelled.
         */
        QString summary = "The following fields were empty:\n blah blah.\n Please fill them in and then generate your .ptm file.";

        QMessageBox Error_Summary;
        Error_Summary.setText("Delete operation summary.");
        Error_Summary.setInformativeText(summary );
        Error_Summary.setStandardButtons(QMessageBox::Ok);
        Error_Summary.setDefaultButton(QMessageBox::Ok);
        Error_Summary.exec();
        qInfo()<< "Error Message";
    }

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
        fitter_Args += " -i " + fileName +" ";

}


void system_Ui::on_output_Location_clicked()
{
    QFileDialog dialog(this);
    dialog.setFileMode(QFileDialog::ExistingFile);
    dialog.setOption(QFileDialog::ShowDirsOnly);
    QString output_Filename = "/output.ptm";
    // Stores the path of the user's choice.
    chosen_Location = dialog.getExistingDirectory() + output_Filename;

    ui->output_Placeholder->setText(chosen_Location);
    fitter_Args += " -o " + chosen_Location +" ";

}



void system_Ui::on_resize_Checkbox_clicked()
{
    ui->width_Measurement->setEnabled(true);
    ui->height_Measurement->setEnabled(true);

//    ui->width_Measurement->setDisabled(true);
//    ui->height_Measurement->setDisabled(true);
}



void system_Ui::on_ptm_Fitter_clicked()
{
    ui->Memory_Profile->setDisabled(true);
    ui->performance_Profile->setDisabled(true);
    ui->hsh_Order->setDisabled(true);

}

void system_Ui::on_hsh_Fitter_clicked()
{
    ui->Memory_Profile->setEnabled(true);
    ui->performance_Profile->setEnabled(true);
    ui->hsh_Order->setEnabled(true);
    ui->ptm_Luminance->setDisabled(true);
    ui->fitter_Info->clear();
    ui->generate_Btn->setEnabled(true);
}



//===============================================================

//QFile lp_File = NULL;
//    if(crop_Execute_Layout.isUseCrop()){
//        //if using crop, crop the files and create the lp file for them
//        lp_File = crop_And_Create_LP_File();

//    }else if(!crop_Execute_Layout.getImagesFormat().equals("jpg")){
//        //if not cropping, bu the images aren't jpg, we need to convert them to jpegs for the fitters
//        //so we'll convert them to jpg and create a new lp file for them
//        lp_File = convert_Images_And_Create_LP_File();

//    }else{
//        //otherwise, we can create an lp file straight from the images
//        lp_File = create_LP_File_JPEG_No_Crop();
//    }

//Main.showLoadingDialog("Running fitter...");



//    if(crop_Execute_Layout.ptmSelected()){


//    }else if(crop_Execute_Layout.hshSelected()){
//
//        fitter_Args += lp_File_Location + " ";
//        fitter_Args += tostring(crop_Execute_Layout.getHSHOrder()) + " ";
//        fitter_Args += destinationFileName;
//    }

//        std::array<char, 128> buffer;
//        std::string result;
//        std::unique_ptr<FILE, decltype(&pclose)> pipe(popen(process, "r"), pclose);
//        if (!pipe) {
//            throw std::runtime_error("popen() failed!");
//        }
//        while (fgets(buffer.data(), buffer.size(), pipe.get()) != nullptr) {
//            result += buffer.data();
//        }



        //reads to feed the output from the fitters to the text area in the crop execute layo

//        // read the output from the commandut
        //        std::istream stdInput =  new BufferedReader(new
        //                                                    InputStreamReader(process.getInputStream()));

        //        std::istream stdError = new BufferedReader(new
        //                InputStreamReader(process.getErrorStream()));
//        QString s = NULL;
//        while ((s = stdInput.readLine()) != NULL) {
//            if(crop_Execute_Layout.ptmSelected() && (!s.startsWith("Processing row"))) {
//                crop_Execute_Layout.printToFitterOutput(s);
//            }
//        }

//        // read any errors from the attempted command
//        while ((s = stdError.readLine()) != NULL) {
//            if(!s.matches("\\d+")) {
//                crop_Execute_Layout.printToFitterOutput(s);
//            }
//        }



//=================== Language ==========================

QStringList system_Ui::findQmFiles()
{
    QDir dir(":/translations");
    QStringList fileNames = dir.entryList(QStringList("*.qm"), QDir::Files,
                                          QDir::Name);
    for (QString &fileName : fileNames)
        fileName = dir.filePath(fileName);
    return fileNames;
}

void system_Ui::on_actionEnglish_triggered()
{
    const QStringList qmFiles = findQmFiles();
    for (int i = 0; i < qmFiles.size(); ++i) {
        const QString &qmlFile = qmFiles.at(i);
        qInfo()<< qmlFile;
    }
}


//=======================================================



//==================== Metadata =========================

