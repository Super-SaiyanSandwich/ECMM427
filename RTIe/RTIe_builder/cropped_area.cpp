#include "cropped_area.h"
#include <QPainter>
#include <QGraphicsItem>
#include <QGraphicsWidget>
#include <QGraphicsScene>

#define CENTER_SCALE_FACTOR 0.3

cropped_Area::cropped_Area()
{
    height = 50.0;
    width = 50.0;
    setFlag(ItemIsMovable, true);
    colour = Qt::green;
}

QRectF cropped_Area::boundingRect() const
{
    return QRectF(0,0, (2 * width)- 10, (2 * height)- 10);
}

void cropped_Area::paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget)
{

    QPen pen(colour);
    pen.setWidth(10);

    // Rectangle
    painter->setPen(pen);
    painter->drawRect(5, 5, height, width+5);

    painter->drawLine((1 - CENTER_SCALE_FACTOR) * height, width, (1 + CENTER_SCALE_FACTOR) * height, width);
    painter->drawLine(height, (1 - CENTER_SCALE_FACTOR) * width, height,  (1 + CENTER_SCALE_FACTOR) * width);



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
    this->height = height;
    this->update();
}
void cropped_Area::set_Width(qreal width)
{
    this->width = width;
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
