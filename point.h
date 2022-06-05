#ifndef POINT_H
#define POINT_H


class Point
{
public:
    Point() {}
    Point(int x, int y, int w);
    int getX();
    void setX(int newX);

    int getY();
    void setY(int newY);

    int getW();
    void setW(int newW);

protected:
    int x, y, w;
};

#endif // POINT_H
