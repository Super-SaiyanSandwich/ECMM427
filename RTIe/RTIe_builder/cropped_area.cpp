#include "cropped_area.h"
#include <QPainter>
#include <QGraphicsItem>
#include <QGraphicsWidget>
#include <QGraphicsScene>
#include <math.h>

#define CENTER_SCALE_FACTOR 0.3
#define PEN_WIDTH 10

cropped_Area::cropped_Area()
{
    height = 300.0;
    width = 300.0;
    setFlag(ItemIsMovable, true);
    colour = Qt::blue;
}

QRectF cropped_Area::boundingRect() const
{
    return QRectF(-((PEN_WIDTH + 1)/ 2), -((PEN_WIDTH + 1)/ 2), width + PEN_WIDTH,height + PEN_WIDTH);
//    return QRectF(0,0, (2 * width)- 10, (2 * height)- 10);
}

void cropped_Area::paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget)
{

    QPen pen(colour);
    pen.setWidth(PEN_WIDTH);
    pen.setStyle(Qt::DashLine);


    // Rectangle
    painter->setPen(pen);
    painter->drawRect(0, 0, width, height);

}

void cropped_Area::set_Position(qreal x, qreal y)
{
    setPos(x,y);
}

void cropped_Area::set_Colour(int r, int g, int b)
{
    this->set_Colour(QColor::fromRgb(r,g,b));
}

void cropped_Area::set_Colour(QColor colour)
{
    this->colour = colour;
    this->update();
}

void cropped_Area::set_R(int r)
{
    this->colour.setRed(r);
    this->update();
}

void cropped_Area::set_G(int g)
{
    this->colour.setGreen(g);
    this->update();
}

void cropped_Area::set_B(int b)
{
    this->colour.setBlue(b);
    this->update();
}

void cropped_Area::set_Height(qreal height)
{
    qreal dheight = this->height - height;
    this->height = height;
    this->setY(this->y() + (dheight / 2));
    this->update();
}

void cropped_Area::set_Width(qreal width)
{
    qreal dwidth = this->width - width;
    this->width = width;
    this->setX(this->x() + (dwidth / 2));
    this->update();
}

void cropped_Area::set_Selected(bool selected)
{
    if(selected){
        this->setFlag(QGraphicsItem::ItemIsMovable, true);
        this->setZValue(10);
    }else{
        this->setFlag(QGraphicsItem::ItemIsMovable, false);
        this->setZValue(5);
    }
}

std::tuple<int, int> cropped_Area::get_Position()
{
    return std::make_tuple( this->x(), this->y());
}

qreal cropped_Area::get_Height()
{
    return this->height;
}

qreal cropped_Area::get_Width()
{
    return this->width;
}

QColor cropped_Area::get_Colour()
{
    return this->colour;
}

void cropped_Area::mouseMoveEvent(QGraphicsSceneMouseEvent *event)
{
    QGraphicsItem::mouseMoveEvent(event);

    if (x() < 0)
    {
        setPos(0, y());
    }
    else if (x() + boundingRect().right() > parentItem()->boundingRect().width())
    {
        setPos(parentItem()->boundingRect().width() - boundingRect().width(), y());
    }

    if (y() < 0)
    {
        setPos(x(), 0);
    }
    else if ( y() + boundingRect().bottom() > parentItem()->boundingRect().height())
    {
        setPos(x(), parentItem()->boundingRect().height() - boundingRect().height());
    }
}
