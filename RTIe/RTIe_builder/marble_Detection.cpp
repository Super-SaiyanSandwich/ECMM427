#include "marble_Detection.h"
#include "ui_marble_Detection.h"

#include <QtWidgets>
#include <QTranslator>
#include <QLocale>
#include <QLibraryInfo>

marble_Detection::marble_Detection(QWidget *parent) : QMainWindow(parent),
    ui(new Ui::marble_Detection)
{
    qInfo() << "Begin MD";

    ui->setupUi(this);

    this->base_Image = QImage(":/marble_Test_Image.jpg");
    this->image_Label = this->findChild<QLabel *>("image_Label");

    //this->image_Label->setPixmap(QPixmap::fromImage(base_Image));

    //connect(this->findChild<QSpinBox>("spin_Box_X"),SIGNAL(valueChanged(int X)),this,on_spin_Box_X_Value_Changed());



    this->show();
}

marble_Detection::~marble_Detection()
{
    delete ui;
}

void marble_Detection::update_Marble_Marker()
{
    qInfo() << "TWtatat";
    QPixmap basePix = QPixmap::fromImage(this->base_Image);
    QPainter *paint = new QPainter(&basePix);
    paint->setPen(*(new QColor(255,255,255,255)));
    //paint->drawArc(x,y,radius,radius,360);
    paint->drawArc(this->x,this->y,this->radius,this->radius,0,360);
    paint->drawLine(50,50,250,250);
    paint->end();
    this->image_Label->setPixmap(basePix);
    image_Label->update();
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

