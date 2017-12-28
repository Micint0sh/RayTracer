#include "Point2D.hpp"

// Constructors
Point2D::Point2D() {
    x = 0;
    y = 0;
}

Point2D::Point2D(double xVal, double yVal) {
    x = xVal;
    y = yVal;
}

Point2D::Point2D(const Point2D& p){
    x = p.x;
    y = p.y;
}

//Operators
Point2D Point2D::operator +(const Point2D& p){
    Point2D temp(this->x+p.x,this->y+p.y);
    return temp;
}

Point2D Point2D::operator -(const Point2D& p) {
    Point2D temp(this->x-p.x,this->y-p.y);
    return temp;
}

bool Point2D::operator ==(const Point2D& p){
    if(x == p.x && y == p.y) return true;
    else return false;
}
