#include "Point3D.hpp"

// Constructors
Point3D::Point3D() {
    x = 0;
    y = 0;
    z = 0;
}

Point3D::Point3D(double xVal, double yVal, double zVal) {
    x = xVal;
    y = yVal;
    z = zVal;
}

Point3D::Point3D(const Point3D& p){
    x = p.x;
    y = p.y;
    z = p.z;
}

//Operators
Point3D Point3D::operator +(const Point3D& p) const{
    Point3D temp(this->x+p.x,this->y+p.y,this->z+p.z);
    return temp;
}

Point3D Point3D::operator -(const Point3D& p) const{
    Point3D temp(this->x-p.x,this->y-p.y,this->z-p.z);
    return temp;
}

bool Point3D::operator ==(const Point3D& p) const{
    if(x == p.x && y == p.y && z == p.z) return true;
    else return false;
}

double Point3D::vectDot(const Point3D& v1, const Point3D& v2) {
    return v1.x*v2.x+v1.y*v2.y+v1.z*v2.z;
}

Point3D Point3D::vectCross(const Point3D& v1, const Point3D& v2) {
    Point3D temp(v1.y*v2.z - v1.z*v2.y, v1.z*v2.x - v1.x*v2.z, v1.x*v2.y - v1.y*v2.x);
    return temp;
}

Point3D Point3D::operator+=(const Point3D &p) {
    x+=p.x;
    y+=p.y;
    z+=p.z;
    return (*this);
}
