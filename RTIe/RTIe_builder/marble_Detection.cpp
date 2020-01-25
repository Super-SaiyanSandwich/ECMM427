#include "marble_Detection.h"
#include "ui_marble_Detection.h"

#include <QtWidgets>
#include <QTranslator>
#include <QLocale>
#include <QLibraryInfo>

// CONSTANT VALUES
#define CENTER_SCALE_FACTOR 0.3
#define SCROLL_AREA_HEIGHT 694
#define SCROLL_AREA_WIDTH 1044

///////////////////////////////////////////////////////////////
//
//    PAGE CREATION AND SETUP FUNCTIONS
//


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
/// Updates the images displayed on screen by painting over the base image
///
void marble_Detection::update_Marble_Marker()
{
    //qInfo() << "TWtatat";
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
    float height_Scale = this->base_Image.height() / SCROLL_AREA_HEIGHT;
    float width_Scale = this->base_Image.width() / SCROLL_AREA_WIDTH;

    return;
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
    this->radius = radius;
    ui->horizontal_Slider_Radius->setValue(radius);
    this->update_Marble_Marker();

    ui->spin_Box_X->setMaximum(base_Image.width() - 2*radius);
    ui->spin_Box_Y->setMaximum(base_Image.height() - 2*radius);
    ui->horizontal_Slider_X->setMaximum(base_Image.width() - 2*radius);
    ui->horizontal_Slider_Y->setMaximum(base_Image.height() - 2*radius);
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
    this->radius = value;
    ui->spin_Box_Radius->setValue(value);
    this->update_Marble_Marker();

    ui->spin_Box_X->setMaximum(base_Image.width() - 2*radius);
    ui->spin_Box_Y->setMaximum(base_Image.height() - 2*radius);
    ui->horizontal_Slider_X->setMaximum(base_Image.width() - 2*radius);
    ui->horizontal_Slider_Y->setMaximum(base_Image.height() - 2*radius);
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

    this->update_Marble_Marker();
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
