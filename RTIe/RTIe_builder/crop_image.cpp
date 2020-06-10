#include "crop_image.h"
//#include "ui_crop_image.h"

#include <tuple>
#include <vector>
#include <QApplication>
#include <QtWidgets>
#include <QTranslator>
#include <QLocale>
#include <QLibraryInfo>

using namespace std;

// CONSTANT VALUES
#define CENTER_SCALE_FACTOR 0.3
#define SCROLL_AREA_HEIGHT 694.0
#define SCROLL_AREA_WIDTH 1044.0
#define CONTRAST_PIVOT_POINT 210
#define CONTRAST_SCALE 3



crop_image::crop_image(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::crop_image)
{
    qInfo() << "Begin MD";

    ui->setupUi(this);

    this->base_Image_2 = QImage("C:/Users/Tolu/Desktop/images/bruce-dixon--lYtsl62gyU-unsplash.jpg");

    ui->image_Label_2->setPixmap(QPixmap::fromImage(this->base_Image_2));


    this->x = ui->spin_Box_X_2->value();
    this->y = ui->spin_Box_Y_2->value();
    this->height = ui->spin_Box_Radius_2->value();
    this->width = ui->spin_Box_Radius_3->value();


    ui->spin_Box_X_2->setMaximum(base_Image_2.width() - 2*width);
    ui->spin_Box_Y_2->setMaximum(base_Image_2.height() - 2*height);
    ui->horizontal_Slider_X_2->setMaximum(base_Image_2.width() - 2*width);
    ui->horizontal_Slider_Y_2->setMaximum(base_Image_2.height() - 2*height);


    this->set_Maximums();
    this->update_Marble_Marker();
    this->reset_Image_Zoom();


    this->show();
}

crop_image::~crop_image()
{
    delete ui;
}

/// \brief Updates the images displayed on screen by painting over the base image
void crop_image::update_Marble_Marker()
{
    //qInfo() << "TWtatat";
    QPixmap base_Pix = QPixmap::fromImage(this->base_Image_2);
    QPainter *paint = new QPainter(&base_Pix);

    QPen pen;

    pen.setBrush(QColor(r,g,b));
    pen.setWidth(5);

    int h = this->height;
    int w = this->width;



//    float scaled_Radius = this->radius * CENTER_SCALE_FACTOR;

    paint->setPen(pen);

    // Rectangle
    paint->drawRect(this->x, this->y, h, w+5);

    // Cross
//    paint->drawLine(this->x - scaled_Radius + rad, this->y + rad, this->x + scaled_Radius + rad, this->y + rad);
//    paint->drawLine(this->x + rad, this->y - scaled_Radius + rad, this->x + rad, this->y + scaled_Radius + rad);

    paint->end();


    ui->image_Label_2->clear();
    ui->image_Label_2->setPixmap(base_Pix);
    ui->image_Label_2->update();

    QPixmap target(h, w + 5);

    paint = new QPainter(&target);
//    paint->fillRect(QRect(0, 0, h, w);
//    QRegion mask(QRect(0, 0, rad * 2, rad * 2), QRegion::Ellipse);
//    paint->setClipRegion(mask);


    base_Pix = QPixmap::fromImage(this->base_Image_2);
    paint->drawPixmap(-this->x, -this->y, base_Pix);


    ui->preivew_Label->clear();
    ui->preivew_Label->setPixmap(target);
    ui->preivew_Label->update();
}

void crop_image::reset_Image_Zoom()
{
    zoom_Percentage = 100;

    float scaler =  SCROLL_AREA_HEIGHT / this->base_Image_2.height();
    scaler = scaler < (SCROLL_AREA_WIDTH / this->base_Image_2.width()) ? scaler : (SCROLL_AREA_WIDTH / this->base_Image_2.width());


    ui->image_Label_2->resize(this->base_Image_2.width() * scaler, this->base_Image_2.height() * scaler);

    return;
}

void crop_image::image_Zoom_In(int percent)
{
    zoom_Percentage += percent;

    float scaler =  SCROLL_AREA_HEIGHT / this->base_Image_2.height();
    scaler = scaler < (SCROLL_AREA_WIDTH / this->base_Image_2.width()) ? scaler : (SCROLL_AREA_WIDTH / this->base_Image_2.width());

    ui->image_Label_2->resize(this->base_Image_2.width() * scaler * zoom_Percentage / 100, this->base_Image_2.height() * scaler * zoom_Percentage / 100);
    //ui->scrollArea->adjustSize();

    adjust_Scroll_Bar(ui->scrollArea->horizontalScrollBar(), 100 + percent);
    adjust_Scroll_Bar(ui->scrollArea->verticalScrollBar(), 100 + percent);

    ui->zoom_In_Button_2->setEnabled(zoom_Percentage < 300);
}

void crop_image::image_Zoom_Out(int percent)
{
    zoom_Percentage -= percent;

    float scaler =  SCROLL_AREA_HEIGHT / this->base_Image_2.height();
    scaler = scaler < (SCROLL_AREA_WIDTH / this->base_Image_2.width()) ? scaler : (SCROLL_AREA_WIDTH / this->base_Image_2.width());

    ui->image_Label_2->resize(this->base_Image_2.width() * scaler * zoom_Percentage / 100, this->base_Image_2.height() * scaler * zoom_Percentage / 100);
    //ui->scrollArea->adjustSize();

    adjust_Scroll_Bar(ui->scrollArea->horizontalScrollBar(), 100 - percent);
    adjust_Scroll_Bar(ui->scrollArea->verticalScrollBar(), 100 - percent);

    ui->zoom_Out_Button_2->setEnabled(zoom_Percentage > 33);
}

void crop_image::adjust_Scroll_Bar(QScrollBar *scrollBar, double factor)
{
    factor = factor / 100.0;
    scrollBar->setValue(int(factor * scrollBar->value()
                            + ((factor - 1) * scrollBar->pageStep()/2)));
}

void crop_image::on_spin_Box_X_2_valueChanged(int X)
{
    qInfo() << "X Value Changed";
    this->x = X;
    ui->horizontal_Slider_X_2->setValue(X);
    this->update_Marble_Marker();
}

void crop_image::on_spin_Box_Y_2_valueChanged(int Y)
{
    this->y = Y;
    ui->horizontal_Slider_Y_2->setValue(Y);
    this->update_Marble_Marker();
}

void crop_image::on_spin_Box_Radius_2_valueChanged(double height)
{
    this->height = height;

    ui->horizontal_Slider_Radius_2->setValue(height);
    this->update_Marble_Marker();

    ui->spin_Box_Y_2->setMaximum(base_Image_2.height() - height);
    ui->horizontal_Slider_Y_2->setMaximum(base_Image_2.height() - height);

    ui->spin_Box_X_2->setValue(this->x);
    ui->spin_Box_Y_2->setValue(this->y);
    ui->horizontal_Slider_X_2->setValue(this->x);
    ui->horizontal_Slider_Y_2->setValue(this->y);
}

void crop_image::on_spin_Box_Radius_3_valueChanged(double width)
{

    this->width = width;

    ui->horizontal_Slider_Radius_3->setValue(width);
    this->update_Marble_Marker();

    ui->spin_Box_X_2->setMaximum(base_Image_2.width() - 0.5*width);
    ui->horizontal_Slider_X_2->setMaximum(base_Image_2.width() - 0.5*width);

    ui->spin_Box_X_2->setValue(this->x);
    ui->spin_Box_Y_2->setValue(this->y);
    ui->horizontal_Slider_X_2->setValue(this->x);
    ui->horizontal_Slider_Y_2->setValue(this->y);
}

void crop_image::on_horizontal_Slider_X_2_valueChanged(int value)
{
    this->x = value;
    ui->spin_Box_X_2->setValue(value);
    this->update_Marble_Marker();
}

void crop_image::on_horizontal_Slider_Y_2_valueChanged(int value)
{
    this->y = value;
    ui->spin_Box_Y_2->setValue(value);
    this->update_Marble_Marker();
}

void crop_image::on_horizontal_Slider_Radius_2_valueChanged(int value)
{


    this->height = value;

    ui->spin_Box_Radius_2->setValue(value);
    this->update_Marble_Marker();

    ui->spin_Box_Y_2->setMaximum(base_Image_2.height() - height);
    ui->horizontal_Slider_Y_2->setMaximum(base_Image_2.height() - height);

    ui->spin_Box_X_2->setValue(this->x);
    ui->spin_Box_Y_2->setValue(this->y);
    ui->horizontal_Slider_X_2->setValue(this->x);
    ui->horizontal_Slider_Y_2->setValue(this->y);
}

void crop_image::on_horizontal_Slider_Radius_3_valueChanged(int value)
{

    this->width = value;


    ui->spin_Box_Radius_3->setValue(value);
    this->update_Marble_Marker();

    ui->spin_Box_X_2->setMaximum(base_Image_2.width() - 0.5*width);
    ui->horizontal_Slider_X_2->setMaximum(base_Image_2.width() - 0.5*width);

    ui->spin_Box_X_2->setValue(this->x);
    ui->spin_Box_Y_2->setValue(this->y);
    ui->horizontal_Slider_X_2->setValue(this->x);
    ui->horizontal_Slider_Y_2->setValue(this->y);
}

void crop_image::on_horizontal_Scroll_Bar_Red_2_valueChanged(int value)
{
    this->r = value;
    this->update_Marble_Marker();
}

void crop_image::on_horizontal_Scroll_Bar_Green_2_valueChanged(int value)
{
    this->g = value;
    this->update_Marble_Marker();
}

void crop_image::on_horizontal_Scroll_Bar_Blue_2_valueChanged(int value)
{
    this->b = value;
    this->update_Marble_Marker();
}

void crop_image::on_colour_Selector_Button_2_clicked()
{
    QColor new_Colour = QColorDialog::getColor(QColor(r,g,b), this );
    r = new_Colour.red();
    g = new_Colour.green();
    b = new_Colour.blue();

    ui->horizontal_Scroll_Bar_Red_2->setValue(r);
    ui->horizontal_Scroll_Bar_Green_2->setValue(g);
    ui->horizontal_Scroll_Bar_Blue_2->setValue(b);
}

bool crop_image::load_File(const QString &fileName)
{
    QImageReader reader(fileName);
    reader.setAutoTransform(true);
    const QImage newImage = reader.read();
    if (newImage.isNull()) {
        QMessageBox::information(this, QGuiApplication::applicationDisplayName(),
                                 tr("Cannot load %1: %2")
                                 .arg(QDir::toNativeSeparators(fileName), reader.errorString()));
        return false;
    }
    base_Image_2 = newImage;

    setWindowFilePath(fileName);

    const QString message = tr("Opened \"%1\", %2x%3, Depth: %4")
        .arg(QDir::toNativeSeparators(fileName)).arg(base_Image_2.width()).arg(base_Image_2.height()).arg(base_Image_2.depth());
    statusBar()->showMessage(message);

    this->set_Maximums();
    this->update_Marble_Marker();
    this->reset_Image_Zoom();

    return true;
}

static void initializeImageFileDialog(QFileDialog &dialog, QFileDialog::AcceptMode acceptMode)
{
    static bool firstDialog = true;

    if (firstDialog) {
        firstDialog = false;
        const QStringList picturesLocations = QStandardPaths::standardLocations(QStandardPaths::PicturesLocation);
        dialog.setDirectory(picturesLocations.isEmpty() ? QDir::currentPath() : picturesLocations.last());
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

void crop_image::on_open_Button_2_clicked()
{
    QFileDialog dialog(this, tr("Open File"));
    initializeImageFileDialog(dialog, QFileDialog::AcceptOpen);

    while (dialog.exec() == QDialog::Accepted && !load_File(dialog.selectedFiles().first())) {};
}

void crop_image::on_zoom_Reset_Button_2_clicked()
{
    reset_Image_Zoom();
}

void crop_image::on_zoom_In_Button_2_clicked()
{
    image_Zoom_In(25);
}

void crop_image::on_zoom_Out_Button_2_clicked()
{
    image_Zoom_Out(25);
}

void crop_image::set_Maximums()
{
    double center = ((0.5 *width) + (0.5*height));
    ui->horizontal_Slider_X_2->setMaximum(this->x - center * 2);
    ui->horizontal_Slider_Y_2->setMaximum(this->y - center * 2);

    ui->spin_Box_X_2->setMaximum(this->x - center * 2);
    ui->spin_Box_Y_2->setMaximum(this->y - center * 2);
}

void crop_image::on_test_Button_2_clicked()
{
    QRgb pixel;
    QColor col;
    int r, g, b;

    vector<tuple<int,int>> cluster_Points;

    QImage cropped_image = ui->preivew_Label->pixmap()->toImage();


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
    ui->preivew_Label->setPixmap(base_Pix);
}

void crop_image::on_cancel_btn_clicked()
{
    QApplication::exit();
}

void crop_image::on_crop_btn_clicked()
{
    QString image_Path = QFileDialog::getSaveFileName(
            this,
            tr("Save File"),
            "",
            tr("JPEG(*.jpg *.jpeg);;PNG(*.png)")
            );
    QImage crop = ui->preivew_Label->pixmap()->toImage();
    crop.save(image_Path);
//    auto filename = QFileDialog::getSaveFileName(this,"crop");
//    QPixmap::copy(QRect());
}
