#ifndef VECTOR_HPP
#define VECTOR_HPP

#include "Point3D.hpp"
#include <cmath>

class Vector: public Point3D {
public:
    //Constructor
    Vector();
    Vector(const Point3D& pStart, const Point3D& pEnd);
    Vector(double xVal, double yVal, double zVal);
    Vector(const Point3D& p);

    //Scalar *,/
    virtual Vector operator *(double value);
    virtual Vector operator /(double value);

    //Normalization
    Vector normalize();

};

#endif
