#ifndef POINT2D_HPP
#define POINT2D_HPP

class Point2D {
public:
    double x;
    double y;
    //Constructors
    Point2D();
    Point2D(double xVal, double yVal);
    Point2D(const Point2D& p);
    //Operators
    Point2D operator +(const Point2D& p);
    Point2D operator -(const Point2D& p);
    bool operator ==(const Point2D& p);
};

#endif
