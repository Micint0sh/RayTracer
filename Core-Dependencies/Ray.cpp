#include "Ray.hpp"

//Constructor
Ray::Ray() {
    t_min = 0;
    t_max = 0;
}

Ray::Ray(const Point3D& pos,Vector dir, double t_min,double t_max) {
    this->pos = pos;
    this->dir = dir.normalize();
    this->t_min = t_min;
    this->t_max = t_max;
}

//getter and setter
void Ray::setPos(Point3D pos){
    this->pos = pos;
}

void Ray::setDir(Vector dir) {
    this->dir = dir.normalize();
}

Point3D Ray::getPos() const {
    return pos;
}

Vector Ray::getDir() const {
    return dir;
}
