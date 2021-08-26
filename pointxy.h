#ifndef POINTXY_H
#define POINTXY_H


class PointXY
{
public:
    PointXY();                                      //Default constructor
    PointXY(float x, float y);                      //Constructs a point with the given coordinates (X, Y)
    PointXY(const PointXY &point);                  //Constructs a copy of the given point.

    bool isNull() const;                            //Returns true if both the X and Y coordinates are set to 0.0 (ignoring the sign); otherwise returns false
    void setX(float x);                             //Sets the X coordinate of this point to the given y coordinate
    void setY(float y);                             //Sets the Y coordinate of this point to the given y coordinate
    void setXY(float x, float y);                   //Sets the X and Y
    float x() const;                                //Returns the X coordinate of this point
    float y() const;                                //Returns the Y coordinate of this point

    //PointXY& operator=(const PointXY&);
    PointXY operator*=(float factor);              //e.g. p(-1.1, 4.1), p *= 2.5, p becomes (-2.75, 10.25)
    PointXY operator+=(const PointXY &point);      //e.g. p( 3.1, 7.1), q(-1.0, 4.1), p += q, p becomes (2.1, 11.2)
    PointXY operator-=(const PointXY &point);      //e.g. p( 3.1, 7.1), q(-1.0, 4.1), p -= q, p becomes (4.1, 3.0)
    PointXY operator/=(float divisor);             //e.g. p(-2.75, 10.25), p /= 2.5, p becomes (-1.1, 4.1)

private:
    float X;
    float Y;
};

#endif // POINTXY_H
