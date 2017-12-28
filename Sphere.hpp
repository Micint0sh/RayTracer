#ifndef SPHERE_HPP
#define SPHERE_HPP

#include "Primitive.hpp"
#include "Normal.hpp"

class Sphere : public Primitive {
    
private:
    Point3D center;
    double radius;
    
public:
    //Constructor
    Sphere(Point3D& cent ,double rad);
    
    //Implementation of Primitive features
    bool intersect(const Ray& ray, double& tValue, Intersection* in);
    //bool getBRDF(LocalGeo& local, BRDF* brdf);
};

#endif /* SPHERE_HPP */

