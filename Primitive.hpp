#ifndef PRIMITIVE_HPP
#define PRIMITIVE_HPP

#include "Ray.hpp"
#include "Intersection.hpp"
#include "BRDF.hpp"

class Primitive {
public:
    virtual bool intersect(const Ray& ray, double& tValue, Intersection* in) = 0;
    //virtual bool getBRDF(LocalGeo& local, BRDF* brdf) = 0;
};

#endif /* PRIMITIVE_HPP */

