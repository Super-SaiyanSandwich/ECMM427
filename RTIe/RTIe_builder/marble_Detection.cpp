#include "marble_Detection.h"
#include "ui_marble_Detection.h"

#include <tuple>
#include <vector>

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

//|=======================================
//|
//|    PAGE CREATION AND SETUP FUNCTIONS
//|


///
/// \brief Page creation function - returns a "marble detection" page
/// \param parent window
///
marble_Detection::marble_Detection(QWidget *parent) : QMainWindow(parent),
    ui(new Ui::marble_Detection)
{
    qInfo() << "Begin MD";

    ui->setupUi(this);

    this->base_Image = QImage(":/marble_Test_Image.jpg");

    ui->image_Label->setPixmap(QPixmap::fromImage(this->base_Image));

    //this->image_Label->setPixmap(QPixmap::fromImage(base_Image));

    //connect(this->findChild<QSpinBox>("spin_Box_X"),SIGNAL(valueChanged(int X)),this,on_spin_Box_X_Value_Changed());



    this->x = ui->spin_Box_X->value();
    this->y = ui->spin_Box_Y->value();
    this->radius = ui->spin_Box_Radius->value();
    this->update_Marble_Marker();

    ui->spin_Box_X->setMaximum(base_Image.width() - 2*radius);
    ui->spin_Box_Y->setMaximum(base_Image.height() - 2*radius);
    ui->horizontal_Slider_X->setMaximum(base_Image.width() - 2*radius);
    ui->horizontal_Slider_Y->setMaximum(base_Image.height() - 2*radius);

    this->show();
}

marble_Detection::~marble_Detection()
{
    delete ui;
}

//////////////////////////////////////////////////////////////////////



///
/// \brief Updates the images displayed on screen by painting over the base image
///
void marble_Detection::update_Marble_Marker()
{

    QPixmap base_Pix = QPixmap::fromImage(this->base_Image);
    QPainter *paint = new QPainter(&base_Pix);

    QPen pen;

    pen.setBrush(QColor(r,g,b));
    pen.setWidth(5);

    int rad = this->radius;

    float scaled_Radius = this->radius * CENTER_SCALE_FACTOR;

    paint->setPen(pen);

    // Cirlce
    paint->drawEllipse(QPointF(this->x + rad, this->y + rad), rad, rad);

    // Cross
    paint->drawLine(this->x - scaled_Radius + rad, this->y + rad, this->x + scaled_Radius + rad, this->y + rad);
    paint->drawLine(this->x + rad, this->y - scaled_Radius + rad, this->x + rad, this->y + scaled_Radius + rad);

    paint->end();


    ui->image_Label->clear();
    ui->image_Label->setPixmap(base_Pix);
    ui->image_Label->update();


    QPixmap target(rad * 2, rad * 2);

    paint = new QPainter(&target);
    paint->fillRect(QRect(0, 0, rad * 2, rad * 2),Qt::gray);
    QRegion mask(QRect(0, 0, rad * 2, rad * 2), QRegion::Ellipse);
    paint->setClipRegion(mask);

    base_Pix = QPixmap::fromImage(this->base_Image);
    paint->drawPixmap(-this->x, -this->y, base_Pix);


    ui->preivew_Label->clear();
    ui->preivew_Label->setPixmap(target);
    ui->preivew_Label->update();
}


void marble_Detection::reset_Image_Zoom()
{
    zoom_Percentage = 100;

    float scaler =  SCROLL_AREA_HEIGHT / this->base_Image.height();
    scaler = scaler < (SCROLL_AREA_WIDTH / this->base_Image.width()) ? scaler : (SCROLL_AREA_WIDTH / this->base_Image.width());


    ui->image_Label->resize(this->base_Image.width() * scaler, this->base_Image.height() * scaler);

    return;
}



void marble_Detection::image_Zoom(int percent)
{
    zoom_Percentage += percent;

    float scaler =  SCROLL_AREA_HEIGHT / this->base_Image.height();
    scaler = scaler < (SCROLL_AREA_WIDTH / this->base_Image.width()) ? scaler : (SCROLL_AREA_WIDTH / this->base_Image.width());

    ui->image_Label->resize(this->base_Image.width() * scaler * zoom_Percentage / 100, this->base_Image.height() * scaler * zoom_Percentage / 100);
    //ui->scrollArea->adjustSize();

    adjust_Scroll_Bar(ui->scrollArea->horizontalScrollBar(), 100 - percent);
    adjust_Scroll_Bar(ui->scrollArea->verticalScrollBar(), 100 - percent);

    ui->zoom_In_Button->setEnabled(zoom_Percentage < 300);
    ui->zoom_Out_Button->setEnabled(zoom_Percentage > 33);
}


void marble_Detection::adjust_Scroll_Bar(QScrollBar *scrollBar, double factor)
{
    factor = factor / 100.0;
    scrollBar->setValue(int(factor * scrollBar->value()
                            + ((factor - 1) * scrollBar->pageStep()/2)));
}


void marble_Detection::on_spin_Box_X_valueChanged(int X)
{
    this->x = X;
    ui->horizontal_Slider_X->setValue(X);
    this->update_Marble_Marker();
}


void marble_Detection::on_spin_Box_Y_valueChanged(int Y)
{
    this->y = Y;
    ui->horizontal_Slider_Y->setValue(Y);
    this->update_Marble_Marker();
}

void marble_Detection::on_spin_Box_Radius_valueChanged(double radius)
{
    double delta_Radius = radius - this->radius;

    this->radius = radius;
    this->x -= int(delta_Radius);
    this->y -= int(delta_Radius);

    ui->horizontal_Slider_Radius->setValue(radius);
    this->update_Marble_Marker();

    ui->spin_Box_X->setMaximum(base_Image.width() - 2*radius);
    ui->spin_Box_Y->setMaximum(base_Image.height() - 2*radius);
    ui->horizontal_Slider_X->setMaximum(base_Image.width() - 2*radius);
    ui->horizontal_Slider_Y->setMaximum(base_Image.height() - 2*radius);

    ui->spin_Box_X->setValue(this->x);
    ui->spin_Box_Y->setValue(this->y);
    ui->horizontal_Slider_X->setValue(this->x);
    ui->horizontal_Slider_Y->setValue(this->y);
}

void marble_Detection::on_horizontal_Slider_X_valueChanged(int value)
{
    this->x = value;
    ui->spin_Box_X->setValue(value);
    this->update_Marble_Marker();
}

void marble_Detection::on_horizontal_Slider_Y_valueChanged(int value)
{
    this->y = value;
    ui->spin_Box_Y->setValue(value);
    this->update_Marble_Marker();
}

void marble_Detection::on_horizontal_Slider_Radius_valueChanged(int value)
{
    int delta_Radius = value - this->radius;

    this->radius = value;
    this->x -= int(delta_Radius);
    this->y -= int(delta_Radius);

    ui->spin_Box_Radius->setValue(value);
    this->update_Marble_Marker();

    ui->spin_Box_X->setMaximum(base_Image.width() - 2*radius);
    ui->spin_Box_Y->setMaximum(base_Image.height() - 2*radius);
    ui->horizontal_Slider_X->setMaximum(base_Image.width() - 2*radius);
    ui->horizontal_Slider_Y->setMaximum(base_Image.height() - 2*radius);

    ui->spin_Box_X->setValue(this->x);
    ui->spin_Box_Y->setValue(this->y);
    ui->horizontal_Slider_X->setValue(this->x);
    ui->horizontal_Slider_Y->setValue(this->y);
}

void marble_Detection::on_horizontal_Scroll_Bar_Red_valueChanged(int value)
{
    this->r = value;
    this->update_Marble_Marker();
}

void marble_Detection::on_horizontal_Scroll_Bar_Green_valueChanged(int value)
{
    this->g = value;
    this->update_Marble_Marker();
}

void marble_Detection::on_horizontal_Scroll_Bar_Blue_valueChanged(int value)
{
    this->b = value;
    this->update_Marble_Marker();
}

void marble_Detection::on_colour_Selector_Button_clicked()
{
    QColor new_Colour = QColorDialog::getColor(QColor(r,g,b), this );
    r = new_Colour.red();
    g = new_Colour.green();
    b = new_Colour.blue();

    ui->horizontal_Scroll_Bar_Red->setValue(r);
    ui->horizontal_Scroll_Bar_Green->setValue(g);
    ui->horizontal_Scroll_Bar_Blue->setValue(b);
}


bool marble_Detection::load_File(const QString &fileName)
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
    base_Image = newImage;

    setWindowFilePath(fileName);

    const QString message = tr("Opened \"%1\", %2x%3, Depth: %4")
        .arg(QDir::toNativeSeparators(fileName)).arg(base_Image.width()).arg(base_Image.height()).arg(base_Image.depth());
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


void marble_Detection::on_open_Button_clicked()
{
    QFileDialog dialog(this, tr("Open File"));
    initializeImageFileDialog(dialog, QFileDialog::AcceptOpen);

    while (dialog.exec() == QDialog::Accepted && !load_File(dialog.selectedFiles().first())) {};
}

void marble_Detection::on_zoom_Reset_Button_clicked()
{
    reset_Image_Zoom();
}

void marble_Detection::on_zoom_In_Button_clicked()
{
    image_Zoom(25);
}

void marble_Detection::on_zoom_Out_Button_clicked()
{
    image_Zoom(-25);
}


void marble_Detection::set_Maximums()
{
    ui->horizontal_Slider_X->setMaximum(this->x - radius * 2);
    ui->horizontal_Slider_Y->setMaximum(this->y - radius * 2);

    ui->spin_Box_X->setMaximum(this->x - radius * 2);
    ui->spin_Box_Y->setMaximum(this->y - radius * 2);
}

void marble_Detection::on_test_Button_clicked()
{
    QRgb pixel;
    QColor col;
    int r, g, b;

    vector<tuple<int,int>> cluster_Points;

    QImage marble = ui->preivew_Label->pixmap()->toImage();


    for(int x = 0; x < marble.width(); x++)
    {
        for (int y = 0; y < marble.height(); y++) {
            pixel  = marble.pixel(x,y);
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


            marble.setPixel(x, y, qRgb(r, g, b));

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

    
    QPixmap base_Pix = QPixmap::fromImage(marble);
    ui->preivew_Label->setPixmap(base_Pix);
}


