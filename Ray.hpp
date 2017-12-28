#ifndef RAY_HPP
#define RAY_HPP

#include "Point3D.hpp"
#include "Vector.hpp"

class Ray {
private:
    Point3D pos;
    Vector dir;
    double t_min,t_max;

public:
    //Constructor
    Ray();
    Ray(const Point3D& pos,Vector dir, double t_min,double t_max);

    //getter and setter
    void setPos(Point3D pos);
    void setDir(Vector dir);
    Point3D getPos() const;
    Vector getDir() const;

};

#endif
