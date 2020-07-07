#include "crop_Widget.h"
#include "image_Gatherer.h"
#include "image_Management_Nui.h"
#include "splash_Screen.h"
#include "ui_crop_Widget.h"

#include <QColorDialog>
#include <QFileDialog>
#include <QGraphicsPixmapItem>
#include <QImageReader>
#include <QImageWriter>
#include <QMessageBox>
#include <QProgressDialog>
#include <QStandardPaths>
#include <QThread>
#include <math.h>

using namespace std;

crop_Widget::crop_Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::crop_Widget)
{
    ui->setupUi(this);
}

crop_Widget::~crop_Widget()
{
    delete ui;
}


QImage crop_Widget::apply_Effect_To_Pixmap(QImage src, QGraphicsEffect *effect, int extent)
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

QPixmap crop_Widget::apply_Effect_To_Pixmap(QPixmap src, QGraphicsEffect *effect, int extent)
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

void crop_Widget::update_Main_Cropped_Image()
{
    ui->image_Graphics_View->update();
}

void crop_Widget::update_Crop_Preview_Image()
{
    int h = this->selected_Area->get_Height();
    int w = this->selected_Area->get_Width();

    QPixmap base_Pix = this->base_Image->pixmap();
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

void crop_Widget::reload_Preview()
{   int h = this->selected_Area->get_Height();
    int w = this->selected_Area->get_Width();
    QPixmap target(h, w);

    ui->preivew_Label_2->clear();
    ui->preivew_Label_2->setPixmap(target);
    ui->preivew_Label_2->update();
}

void crop_Widget::on_work_Images_itemDoubleClicked(QListWidgetItem *item)
{
    QString image_Path_2 = splashScreen::project_Path+ "/images/wd/" +item->text();
    this->base_Image->setPixmap(QPixmap::fromImage(QImage(image_Path_2)));

    this->update_Main_Cropped_Image();
    this->reset_Crop_Image_Zoom();
    this->reload_Preview();
}

void crop_Widget::on_crop_btn_clicked()
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
void crop_Widget::on_cancel_btn_clicked()
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
void crop_Widget::image_Crop_Zoom(int percent)
{
    zoom_Percentage += percent;

    ui->image_Graphics_View->scale((100 + percent) / 100.0, (100 + percent) / 100.0);


    ui->zoom_In_Button_2->setEnabled(zoom_Percentage < 300);
    ui->zoom_Out_Button_2->setEnabled(zoom_Percentage > 33);
}

void crop_Widget::set_RGB(int r, int g, int b)
{
    this->selected_Area->set_Colour(r,g,b);
}

void crop_Widget::reset_Crop_Image_Zoom()
{
    ui->image_Graphics_View->resetTransform();

    int w = ui->image_Graphics_View->viewport()->width();
    int h = ui->image_Graphics_View->viewport()->height();

    qreal s = fmin(w/float(base_Image->pixmap().width()),h/float(base_Image->pixmap().height()));

    ui->image_Graphics_View->scale(s, s);

}


void crop_Widget::on_spin_Box_X_2_valueChanged(int X)
{
    this->selected_Area->setX(X);
    ui->horizontal_Slider_X_2->setValue(X);
    this->update_Main_Cropped_Image();
    this->update_Crop_Preview_Image();
}

void crop_Widget::on_spin_Box_Y_2_valueChanged(int Y)
{
    this->selected_Area->setY(Y);
    ui->horizontal_Slider_Y_2->setValue(Y);
    this->update_Main_Cropped_Image();
    this->update_Crop_Preview_Image();

}

void crop_Widget::on_spin_Box_Height_valueChanged(double value)
{
//    double delta_heigth = value - selected_Area->get_Height();

    this->selected_Area->set_Height(value);
    this->selected_Area->set_Position(this->selected_Area->x() , this->selected_Area->y());// - delta_heigth);

    this->update_Main_Cropped_Image();
    this->update_Crop_Preview_Image();

    ui->spin_Box_Y_2->setMaximum(this->base_Image->pixmap().height() - (selected_Area->get_Height()));
    ui->horizontal_Slider_Y_2->setMaximum(this->base_Image->pixmap().height() - (selected_Area->get_Height()));

    ui->spin_Box_X_2->setValue(this->selected_Area->x());
    ui->spin_Box_Y_2->setValue(this->selected_Area->y());
    ui->horizontal_Slider_X_2->setValue(this->selected_Area->x());
    ui->horizontal_Slider_Y_2->setValue(this->selected_Area->y());

}

void crop_Widget::on_spin_Box_Width_valueChanged(double value)
{

//    double delta_width = value - selected_Area->get_Width();

    this->selected_Area->set_Width(value);
    this->selected_Area->set_Position(this->selected_Area->x(), this->selected_Area->y());// - delta_width);

    this->update_Main_Cropped_Image();
    this->update_Crop_Preview_Image();

    ui->spin_Box_X_2->setMaximum(this->base_Image->pixmap().width() - (selected_Area->get_Width()));
    ui->horizontal_Slider_X_2->setMaximum(this->base_Image->pixmap().width() - (selected_Area->get_Width()));

    ui->spin_Box_X_2->setValue(this->selected_Area->x());
    ui->spin_Box_Y_2->setValue(this->selected_Area->y());
    ui->horizontal_Slider_X_2->setValue(this->selected_Area->x());
    ui->horizontal_Slider_Y_2->setValue(this->selected_Area->y());

}

void crop_Widget::on_horizontal_Slider_X_2_valueChanged(int value)
{
    this->selected_Area->setX(value);
    ui->spin_Box_X_2->setValue(value);
    this->update_Main_Cropped_Image();
}

void crop_Widget::on_horizontal_Slider_Y_2_valueChanged(int value)
{
    this->selected_Area->setY(value);
    ui->spin_Box_Y_2->setValue(value);
    this->update_Main_Cropped_Image();
}

void crop_Widget::on_horizontal_Slider_Height_valueChanged(int value)
{
    this->selected_Area->set_Height(value);
    this->selected_Area->set_Position(this->selected_Area->x(), this->selected_Area->y());

    this->update_Main_Cropped_Image();
    this->update_Crop_Preview_Image();

    ui->spin_Box_Y_2->setMaximum(this->base_Image->pixmap().height() - (selected_Area->get_Height()));
    ui->horizontal_Slider_Y_2->setMaximum(this->base_Image->pixmap().height() - (selected_Area->get_Height()));
    this->set_Crop_Maximums();

    ui->spin_Box_X_2->setValue(this->selected_Area->x());
    ui->spin_Box_Y_2->setValue(this->selected_Area->y());
    ui->horizontal_Slider_X_2->setValue(this->selected_Area->x());
    ui->horizontal_Slider_Y_2->setValue(this->selected_Area->y());

    ui->spin_Box_Height->setValue(value);


}

void crop_Widget::on_horizontal_Slider_Width_valueChanged(int value)
{
    this->selected_Area->set_Width(value);
    this->selected_Area->set_Position(this->selected_Area->x(), this->selected_Area->y());

    this->update_Main_Cropped_Image();
    this->update_Crop_Preview_Image();

    ui->spin_Box_X_2->setMaximum(this->base_Image->pixmap().width() - (selected_Area->get_Width()));
    ui->horizontal_Slider_X_2->setMaximum(this->base_Image->pixmap().width() - (selected_Area->get_Width()));
    this->set_Crop_Maximums();

    ui->spin_Box_X_2->setValue(this->selected_Area->x());
    ui->spin_Box_Y_2->setValue(this->selected_Area->y());
    ui->horizontal_Slider_X_2->setValue(this->selected_Area->x());
    ui->horizontal_Slider_Y_2->setValue(this->selected_Area->y());

    ui->spin_Box_Width->setValue(value);
}

void crop_Widget::on_horizontal_Scroll_Bar_Red_2_valueChanged(int value)
{
    this->selected_Area->set_R(value);
    this->update_Main_Cropped_Image();
}

void crop_Widget::on_horizontal_Scroll_Bar_Green_2_valueChanged(int value)
{
    this->selected_Area->set_G(value);
    this->update_Main_Cropped_Image();
}

void crop_Widget::on_horizontal_Scroll_Bar_Blue_2_valueChanged(int value)
{
    this->selected_Area->set_B(value);
    this->update_Main_Cropped_Image();
}

void crop_Widget::on_colour_Selector_Button_2_clicked()
{
    QColor new_Colour = QColorDialog::getColor(this->selected_Area->get_Colour(), this );
    this->selected_Area->set_Colour(new_Colour);

    ui->horizontal_Scroll_Bar_Red_2->setValue(new_Colour.red());
    ui->horizontal_Scroll_Bar_Green_2->setValue(new_Colour.green());
    ui->horizontal_Scroll_Bar_Blue_2->setValue(new_Colour.blue());
}

bool crop_Widget::load_Cropping_File(const QString &fileName)
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
    base_Image->pixmap() = QPixmap::fromImage(new_Image_2);

    setWindowFilePath(fileName);

    const QString message = tr("Opened \"%1\", %2x%3, Depth: %4")
        .arg(QDir::toNativeSeparators(fileName)).arg(base_Image->pixmap().width()).arg(base_Image->pixmap().height()).arg(base_Image->pixmap().depth());

    this->set_Crop_Maximums();
    this->update_Main_Cropped_Image();
    this->reset_Crop_Image_Zoom();

    return true;
}

void crop_Widget::image_Zoom(int percent)
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

void crop_Widget::on_open_Button_2_clicked()
{
    QFileDialog dialog(this, tr("Open File"));
    initialize_Image_File_Dialog(dialog, QFileDialog::AcceptOpen);

    while (dialog.exec() == QDialog::Accepted && !load_Cropping_File(dialog.selectedFiles().first())) {};
}

void crop_Widget::on_zoom_Reset_Button_2_clicked()
{
    reset_Crop_Image_Zoom();
}

void crop_Widget::on_zoom_In_Button_2_clicked()
{
    image_Zoom(20);
}

void crop_Widget::on_zoom_Out_Button_2_clicked()
{
    image_Zoom(-20);
}

void crop_Widget::set_Crop_Maximums()
{
//    double center = ((0.5 * selected_Area->get_Width())+
//                     (0.5 * selected_Area->get_Height()));
//    ui->horizontal_Slider_X_2->setMaximum(selected_Area->x()- (center) * 2);
//    ui->horizontal_Slider_Y_2->setMaximum(selected_Area->y()- (center) * 2);

    ui->horizontal_Slider_X_2->setMaximum(this->base_Image->pixmap().width() - (selected_Area->get_Width())); // check this OVER!!
    ui->horizontal_Slider_Y_2->setMaximum(this->base_Image->pixmap().height() - (selected_Area->get_Height()));

    ui->spin_Box_X_2->setMaximum(this->base_Image->pixmap().width() - (selected_Area->get_Width()));
    ui->spin_Box_Y_2->setMaximum(this->base_Image->pixmap().height() - (selected_Area->get_Height()));
}

void crop_Widget::on_horizontal_Slider_X_2_sliderReleased()
{
    this->update_Crop_Preview_Image();
}

void crop_Widget::on_horizontal_Slider_Y_2_sliderReleased()
{
    this->update_Crop_Preview_Image();
}

QString crop_Widget::load_Crop_Image_Icons()
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

void crop_Widget::add_Crop_Item_To_List(QImage image, QString filename)
{
//    qInfo() << "ITEM BEING ADDED: " << filename;
    QListWidgetItem *item = new QListWidgetItem(QIcon(QPixmap::fromImage(image)),filename);
    ui->work_Images->addItem(item);

    this->thread_Count--;

    if (thread_Count == 0){
        this->base_Image->pixmap() = QPixmap::fromImage(image);
        this->update_Main_Cropped_Image();
        this->reset_Crop_Image_Zoom();
    }
}

void crop_Widget::showEvent(QShowEvent *ev)
{
    QWidget::showEvent(ev);

    //this->base_Image_2->setPixmap(QPixmap::fromImage(QImage(this->load_Crop_Image_Icons())));
    //ui->horizontal_Slider_Width->setMaximum(this->base_Image_2->pixmap().width());
    //ui->horizontal_Slider_Height->setMaximum(this->base_Image_2->pixmap().height());

    this->reset_Crop_Image_Zoom();
    this->update_Crop_Preview_Image();
    this->set_Crop_Maximums();
}

void crop_Widget::on_check_Box_Spherical_4_stateChanged(int arg)
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

        QPixmap* avg_Image = new QPixmap(base_Image->pixmap().size());
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

        this->base_Image->setPixmap(*avg_Image);
        this->update_Main_Cropped_Image();

    }
}

bool crop_Widget::eventFilter(QObject *object, QEvent *event)
{
    if (event->type() == QEvent::GraphicsSceneMouseRelease){
        ui->spin_Box_X_2->setValue(int(selected_Area->x()));
        ui->spin_Box_Y_2->setValue(int(selected_Area->y()));

        ui->horizontal_Slider_X_2->setValue(int(selected_Area->x()));
        ui->horizontal_Slider_Y_2->setValue(int(selected_Area->y()));
    }
    return QWidget::eventFilter( object, event );
}
