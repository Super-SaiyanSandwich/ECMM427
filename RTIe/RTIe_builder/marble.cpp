#include "marble.h"
#include <QPainter>
#include <QGraphicsItem>
#include <QGraphicsWidget>
#include <QGraphicsScene>


#define CENTER_SCALE_FACTOR 0.3

marble::marble(){
    radius = 100.0;
    setFlag(ItemIsMovable, true);
    colour = Qt::green;
}

QRectF marble::boundingRect() const
{
    return QRectF(0,0, (2 * radius), (2 * radius));
}

void marble::paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget)
{

    QPen pen(colour);
    pen.setWidth(10);

    painter->setPen(pen);
    painter->drawEllipse(QRectF(5, 5, (2 * radius) - 10, (2 * radius) - 10));

    painter->drawLine((1 - CENTER_SCALE_FACTOR) * radius, radius, (1 + CENTER_SCALE_FACTOR) * radius, radius);
    painter->drawLine(radius, (1 - CENTER_SCALE_FACTOR) * radius, radius,  (1 + CENTER_SCALE_FACTOR) * radius);



}

void marble::setPosition(qreal x, qreal y)
{
    setPos(x,y);
}

void marble::setColour(int r, int g, int b)
{
    this->setColour(QColor::fromRgb(r,g,b));
}

void marble::setColour(QColor colour)
{
    this->colour = colour;
    this->update();
}

void marble::setR(int r)
{
    this->colour.setRed(r);
    this->update();
}

void marble::setG(int g)
{
    this->colour.setGreen(g);
    this->update();
}

void marble::setB(int b)
{
    this->colour.setBlue(b);
    this->update();
}

void marble::setRadius(qreal radius)
{
    this->radius = radius;
    this->update();
}

void marble::setSelected(bool selected)
{
    if(selected){
        this->setFlag(QGraphicsItem::ItemIsMovable, true);
        this->setZValue(10);
    }else{
        this->setFlag(QGraphicsItem::ItemIsMovable, false);
        this->setZValue(5);
    }
}

std::tuple<int, int> marble::getPosition()
{
    return std::make_tuple( this->x(), this->y());
}

qreal marble::getRadius()
{
    return this->radius;
}

QColor marble::getColour()
{
    return this->colour;
}


void marble::mouseMoveEvent(QGraphicsSceneMouseEvent *event)
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

