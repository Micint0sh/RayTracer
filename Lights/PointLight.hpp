#ifndef POINTLIGHT_HPP
#define POINTLIGHT_HPP

#include "Light.hpp"

class PointLight : public Light {
private:
    Point3D position;
    Color lightIntensity;

public:
    //Constructor
    PointLight(const Point3D& pos, const Color& lIntensity);

    void generateLightRay(const LocalGeo& local, Ray& lRay, Color& lIntensity) const;
    Point3D getPosition() {return position;}
    Color getIntensity() {return lightIntensity;}
};


#endif //POINTLIGHT_HPP
