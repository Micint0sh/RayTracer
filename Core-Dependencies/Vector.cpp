#include "Vector.hpp"
#include <cmath>

//Constructor
Vector::Vector(): Point3D::Point3D(){}

Vector::Vector(const Point3D& pStart, const Point3D& pEnd) {
    x = pEnd.x-pStart.x;
    y = pEnd.y-pStart.y;
    z = pEnd.z-pStart.z;
}

Vector::Vector(double xVal, double yVal, double zVal): Point3D::Point3D(xVal,yVal,zVal) {}

Vector::Vector(const Point3D& p) : Point3D::Point3D(p){}

//Scalar *,/
Vector Vector::operator *(double value) {
    Vector temp(this->x*value,this->y*value,this->z*value);
    return temp;
}

Vector Vector::operator /(double value) {
    Vector temp(x/value,y/value,z/value);
    return temp;
}

//Normalization
Vector Vector::normalize() {
    if(x != 0 || y != 0 || z != 0) {
        double sum = sqrt(x*x+y*y+z*z);
        x /= sum;
        y /= sum;
        z /= sum;
    }
    return (*this);
}


