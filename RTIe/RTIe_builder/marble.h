#ifndef MARBLE_H
#define MARBLE_H

#include <QObject>
#include <QFrame>

class marble : public QObject
{
    Q_OBJECT
public:
    explicit marble(QObject *parent = nullptr, double radius = 10);

    void draw_Marble();
    void set_X(int x);
    void set_Y(int y);
    void set_Radius(double radius);
    void set_Colour(int r, int g, int b);

private:
    int x = 0;
    int y = 0;
    double radius;

    short int red;
    short int green;
    short int blue;

signals:

};

#endif // MARBLE_H
