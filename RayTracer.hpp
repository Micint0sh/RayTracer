#ifndef RAYTRACER_HPP
#define RAYTRACER_HPP

#include "Color.hpp"
#include "Ray.hpp"
#include "Primitive.hpp"
#include <vector>

using namespace std;

class RayTracer {
public:
    Color trace(const Ray& ray, double depth, vector<Primitive*>& objects);
};

#endif /* RAYTRACER_HPP */

