#include "marble.h"

marble::marble(QObject *parent, double radius) : QObject(parent)
{
    this->radius = radius;
}


void marble::set_X(int x){
    this->x = x;
}

void marble::set_Y(int y){
    this->y = y;
}

void marble::set_Radius(double radius){
    this->radius = radius;
}

void marble::set_Colour(int r, int g, int b){
    this->red = r;
    this->green = g;
    this->blue = b;
}
