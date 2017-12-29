#ifndef RAYTRACER_HPP
#define RAYTRACER_HPP

#include "Color.hpp"
#include "Ray.hpp"
#include "../Primitives/Primitive.hpp"
#include <vector>

using namespace std;

class RayTracer {
public:
    Color trace(const Ray& ray, double depth, vector<Primitive*>& objects, vector<Light*>& lights);
};

#endif /* RAYTRACER_HPP */

