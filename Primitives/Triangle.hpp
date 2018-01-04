#ifndef TRIANGLE_HPP
#define TRIANGLE_HPP

#include "Primitive.hpp"
#include "../Core-Dependencies/Point3D.hpp"
#include "../Core-Dependencies/Ray.hpp"
#include "../Core-Dependencies/Intersection.hpp"

class Triangle : public Primitive{
private:
    Point3D pA;
    Point3D pB;
    Point3D pC;
public:
    Triangle(Point3D p1,Point3D p2,Point3D p3, Material* mat);
    virtual bool intersect(const Ray& ray, double& tValue, Intersection* in);
};


#endif //TRIANGLE_HPP
