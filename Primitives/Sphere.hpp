#ifndef SPHERE_HPP
#define SPHERE_HPP

#include "Primitive.hpp"
#include "../Core-Dependencies/Normal.hpp"
#include "../Materials/Material.hpp"

class Sphere : public Primitive {
    
private:
    Point3D center;
    double radius = 0;
public:
    //Constructor
    Sphere(Point3D& cent ,double rad, Material* mat);
    
    //Implementation of Primitive features
    bool intersect(const Ray& ray, double& tValue, Intersection* in);
};

#endif /* SPHERE_HPP */

