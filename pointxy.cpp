#include "pointxy.h"

PointXY::PointXY()
{

}


PointXY::PointXY(float x, float y)
{
    X = x;
    Y = y;
}


PointXY::PointXY(const PointXY &point)
{
    X = point.x();
    Y = point.y();
}


bool PointXY::isNull() const
{
    return (X==0.0 && Y==0.0);
}


void PointXY::setX(float x)
{
    X = x;
}


void PointXY::setY(float y)
{
    Y = y;
}


void PointXY::setXY(float x, float y)
{
    X = x;
    Y = y;
}


float PointXY::x() const
{
    return X;
}


float PointXY::y() const
{
    return Y;
}


PointXY PointXY::operator*=(float factor)
{
    X = X * factor;
    Y = Y * factor;
    return *this;
}


PointXY PointXY::operator+=(const PointXY &point)
{
    X = X + point.x();
    Y = Y + point.y();
    return *this;
}


PointXY PointXY::operator-=(const PointXY &point)
{
    X = X - point.x();
    Y = Y - point.y();
    return *this;
}


PointXY PointXY::operator/=(float divisor)
{
    X = X / divisor;
    Y = Y / divisor;
    return *this;
}


