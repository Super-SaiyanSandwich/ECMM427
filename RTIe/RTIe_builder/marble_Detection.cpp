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

    this->show();
}

marble_Detection::~marble_Detection()
{
    delete ui;
}

void marble_Detection::update_Marble_Marker()
{
    //qInfo() << "TWtatat";
    QPixmap basePix = QPixmap::fromImage(this->base_Image);
    QPainter *paint = new QPainter(&basePix);

    QPen pen;

    pen.setBrush(Qt::green);
    pen.setWidth(5);


    float scaled_Radius = this->radius * CENTER_SCALE_FACTOR;

    paint->setPen(pen);
    //paint->drawArc(x,y,radius,radius,360);
    paint->drawEllipse(QPointF(this->x,this->y),this->radius,this->radius);
    //qInfo() << this->x << this->y << this->radius;
    paint->drawLine(this->x - scaled_Radius, this->y, this->x + scaled_Radius, this->y);
    paint->drawLine(this->x, this->y - scaled_Radius, this->x, this->y + scaled_Radius);
    paint->end();
    ui->image_Label->clear();
    ui->image_Label->setPixmap(basePix);
    ui->image_Label->update();
}

void marble_Detection::on_spin_Box_X_valueChanged(int X)
{
    this->x = X;
    this->update_Marble_Marker();
}


void marble_Detection::on_spin_Box_Y_valueChanged(int Y)
{
    this->y = Y;
    this->update_Marble_Marker();
}

void marble_Detection::on_spin_Box_Radius_valueChanged(double radius)
{
    this->radius = radius;
    this->update_Marble_Marker();
}
