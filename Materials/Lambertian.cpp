#include "Lambertian.hpp"
#include "../Core-Dependencies/Point3D.hpp"

//Consturctors
Lambertian::Lambertian() {}

Lambertian::Lambertian(const Color &color) {
    kd = color;
}

//Lambertian
Color Lambertian::getColor(const Light* light, const LocalGeo& geo) {
    Ray lightRay;
    Color lightIntensity;
    light->generateLightRay(geo,lightRay,lightIntensity);
    double cosine = Point3D::vectDot(geo.norm,lightRay.getDir());
    if(cosine < 0 ) cosine = 0;
    Color pixelColor(kd.getR()*lightIntensity.getR()*cosine,kd.getG()*lightIntensity.getG()*cosine,kd.getB()*lightIntensity.getB()*cosine);
    return pixelColor;
}

