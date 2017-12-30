#include "Lambertian.hpp"
#include <vector>
#include "../Core-Dependencies/Point3D.hpp"

//Consturctors
Lambertian::Lambertian() {}

Lambertian::Lambertian(const Color &color) {
    kd = color;
}

//Lambertian
Color Lambertian::getColor(const vector<Light*>& lights, vector<Primitive*>& objects, const Intersection& inter) {
    Color pixelColor;
    for (int i = 0; i < lights.size(); i++) {
        Ray lightRay;
        Color lightIntensity;
        lights[i]->generateLightRay(inter.localGeo,lightRay,lightIntensity);
        bool isShadow = false;
        for(int i=0; i < objects.size(); i++)
        {
            double tValue = 0;
            Intersection in;
            if(objects[i]->intersect(lightRay,tValue,&in) == true) {
                if(tValue > 0.001) {
                    isShadow = true;
                    break;
                }
            }
        }
        if(isShadow == true) continue;
        double cosine = Point3D::vectDot(inter.localGeo.norm,lightRay.getDir());
        if(cosine < 0 ) cosine = 0;
        //Calculate the color given by one single light
        Color singleColor(kd.getR()*lightIntensity.getR()*cosine,kd.getG()*lightIntensity.getG()*cosine,kd.getB()*lightIntensity.getB()*cosine);
        pixelColor += singleColor;
    }
    return pixelColor;
}

