#include "PointLight.hpp"

//Constructor
PointLight::PointLight(const Point3D &pos, const Color &lIntensity) {
    position = pos;
    lightIntensity = lIntensity;
}

void PointLight::generateLightRay(const LocalGeo& local, Ray& lRay, Color& lIntensity) const {
    lRay.setPos(local.pos);
    lRay.setDir(position-local.pos);
    lIntensity = lightIntensity;
}


