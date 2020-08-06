#ifndef MARBLEMARKER_H
#define MARBLEMARKER_H

#include <QPainter>
#include <QGraphicsItem>
#include <QListWidgetItem>

class marble : public QGraphicsItem
{
public:
    marble();

    QRectF boundingRect() const override;
    void paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget = nullptr) override;

    void setPosition(qreal x, qreal y);
    void setColour(int r, int g, int b);
    void setColour(QColor colour);
    void setR(int r);
    void setG(int g);
    void setB(int b);
    void setRadius(qreal radius);
    void setSelected(bool selected);

    std::tuple<int, int> getPosition();
    qreal getRadius();
    QColor getColour();
    QListWidgetItem* icon;


protected:
    void mouseMoveEvent(QGraphicsSceneMouseEvent *event) override;

private:
    qreal radius;
    QColor colour;

};

#endif // MARBLE_H
