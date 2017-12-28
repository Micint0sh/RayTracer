#include "Normal.hpp"

Normal::Normal(): Vector::Vector() {
    (*this).normalize();
}

Normal::Normal(Point3D pStart, Point3D pEnd) : Vector::Vector(pStart,pEnd) {
    (*this).normalize();
}

Normal::Normal(double xVal, double yVal, double zVal) : Vector::Vector(xVal,yVal,zVal){
    (*this).normalize();
}

Normal::Normal(const Point3D& p) : Vector::Vector(p){
    (*this).normalize();
}

//Scalar *,/

Vector Normal::operator *(double value){
    Vector tmp = (*this).Vector::operator *(value);
    return tmp.normalize();
}

Vector Normal::operator /(double value) {
    Vector tmp = (*this).Vector::operator /(value);
    return tmp.normalize();
}

Point3D Normal::operator +(const Point3D& p) {
    Vector tmp = (*this).Vector::operator +(p);
    return tmp.normalize();
}
Point3D Normal::operator -(const Point3D& p) {
    Vector tmp = (*this).Vector::operator -(p);
    return tmp.normalize();
}