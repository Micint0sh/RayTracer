#ifndef LAMBERTIAN_HPP
#define LAMBERTIAN_HPP

#include "Material.hpp"
#include "../Core-Dependencies/Color.hpp"

class Lambertian : public Material {
private:
    Color kd;

public:
    //Constructor
    Lambertian();
    Lambertian(const Color& color);
    Color getColor(const Light* light, const LocalGeo& geo);
};



#endif //LAMBERTIAN_HPP
