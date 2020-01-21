#include "marble_Detection.h"
#include "ui_marble_Detection.h"

#include <QtWidgets>
#include <QTranslator>
#include <QLocale>
#include <QLibraryInfo>


#define CENTER_SCALE_FACTOR 0.3


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

void marble_Detection::update_Marble_Marker()
{
    //qInfo() << "TWtatat";
    QPixmap base_Pix = QPixmap::fromImage(this->base_Image);
    QPainter *paint = new QPainter(&base_Pix);

    QPen pen;

    pen.setBrush(Qt::green);
    pen.setWidth(5);

    int r = this->radius;


    float scaled_Radius = this->radius * CENTER_SCALE_FACTOR;

    paint->setPen(pen);
    // -----------------------paint->drawArc(x,y,radius,radius,360);
    paint->drawEllipse(QPointF(this->x + r, this->y + r), r, r);
    paint->drawLine(this->x - scaled_Radius + r, this->y + r, this->x + scaled_Radius + r, this->y + r);
    paint->drawLine(this->x + r, this->y - scaled_Radius + r, this->x + r, this->y + scaled_Radius + r);
    paint->end();
    ui->image_Label->clear();
    ui->image_Label->setPixmap(base_Pix);
    ui->image_Label->update();

    QPixmap target(r * 2, r * 2);
    paint = new QPainter(&target);
    paint->fillRect(QRect(0, 0, r * 2, r * 2),Qt::gray);
    QRegion mask(QRect(0, 0, r * 2, r * 2), QRegion::Ellipse);
    paint->setClipRegion(mask);

    //base_Pix = QPixmap::fromImage(this->base_Image);
    paint->drawPixmap(-this->x, -this->y, base_Pix);
    ui->preivew_Label->clear();
    ui->preivew_Label->setPixmap(target);
    ui->preivew_Label->update();
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

void marble_Detection::on_colour_Selector_Button_triggered(QAction *arg1)
{

}
