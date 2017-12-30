#ifndef LAMBERTIAN_HPP
#define LAMBERTIAN_HPP

#include "Material.hpp"
#include "../Core-Dependencies/Color.hpp"

class Lambertian : public Material {
protected:
    Color kd;

public:
    //Constructor
    Lambertian();
    Lambertian(const Color& color);
    Color getColor(const vector<Light*>& lights, vector<Primitive*>& objects, const Intersection& inter);
};



#endif //LAMBERTIAN_HPP
