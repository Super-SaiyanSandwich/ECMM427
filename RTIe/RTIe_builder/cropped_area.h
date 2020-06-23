#ifndef CROPPED_AREA_H
#define CROPPED_AREA_H

#include <QPainter>
#include <QGraphicsItem>

class cropped_Area : public QGraphicsItem
{
public:
    cropped_Area();

    QRectF boundingRect() const override;
    void paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget = nullptr) override;

    void set_Position(qreal x, qreal y);
    void set_Colour(int r, int g, int b);
    void set_Colour(QColor colour);
    void set_R(int r);
    void set_G(int g);
    void set_B(int b);
    void set_Height(qreal height);
    void set_Width(qreal width);
    void set_Selected(bool selected);

    std::tuple<int, int> get_Position();
    qreal get_Width();
    qreal get_Height();
    QColor get_Colour();


protected:
    void mouseMoveEvent(QGraphicsSceneMouseEvent *event) override;

private:
    qreal height;
    qreal width;
    QColor colour;

};

#endif // CROPPED_AREA_H
