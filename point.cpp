#include "point.h"

Point::Point(int x, int y, int w)
{
    this->x = x;
    this->y = y;
    this->w = w;
}

int Point::getX()
{
    return x;
}

void Point::setX(int newX)
{
    x = newX;
}

int Point::getY()
{
    return y;
}

void Point::setY(int newY)
{
    y = newY;
}

int Point::getW()
{
    return w;
}

void Point::setW(int newW)
{
    w = newW;
}
