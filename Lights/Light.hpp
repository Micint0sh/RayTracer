#ifndef LIGHT_HPP
#define LIGHT_HPP

#include "../Core-Dependencies/LocalGeo.hpp"
#include "../Core-Dependencies/Ray.hpp"
#include "../Core-Dependencies/Color.hpp"

class Light {
public:
    virtual void generateLightRay(const LocalGeo& local, Ray& lRay, Color& lColor) const = 0;
    virtual Color getIntensity() = 0;
};


#endif //RAYTRACER_LIGHT_HPP
