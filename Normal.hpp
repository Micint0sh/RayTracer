#ifndef NORMAL_HPP
#define NORMAL_HPP

#include "Vector.hpp"

class Normal : public Vector {
public:
    Normal();
    Normal(Point3D pStart, Point3D pEnd);
    Normal(double xVal, double yVal, double zVal);
    Normal(const Point3D& p);

    //Scalar *,/
    Vector operator *(double value);
    Vector operator /(double value);
    Point3D operator +(const Point3D& p);
    Point3D operator -(const Point3D& p);
};

#endif /* NORMAL_HPP */

