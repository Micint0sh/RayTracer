#ifndef PRIMITIVE_HPP
#define PRIMITIVE_HPP

#include "../Core-Dependencies/Ray.hpp"
#include "../Core-Dependencies/Intersection.hpp"
#include "../Materials/Material.hpp"
#include <iostream>

using namespace std;

class Primitive {
public:
    Material* material = NULL;
    virtual bool intersect(const Ray& ray, double& tValue, Intersection* in) = 0;
    Material* getMaterial() { return material;}
};

#endif /* PRIMITIVE_HPP */

