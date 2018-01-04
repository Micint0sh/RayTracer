#include "BlinnPhong.hpp"
#include <vector>
#include <cmath>

using namespace std;

BlinnPhong::BlinnPhong() {
    phongExponent = 10;
}

BlinnPhong::BlinnPhong(const Color &cDiff, const Color &cSpec, double exp) {
    kd = cDiff;
    ks = cSpec;
    phongExponent = exp;
}

Color BlinnPhong::getColor(const vector<Light*>& lights, const vector<Primitive*>& objects, const Intersection& inter, double depth) {
    Color pixelColor;
    Vector viewDir = -inter.view.getDir();
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
        Color diffuseColor(kd.getR()*lightIntensity.getR()*cosine,kd.getG()*lightIntensity.getG()*cosine,kd.getB()*lightIntensity.getB()*cosine);
        Vector half = lightRay.getDir()+viewDir;
        half.normalize();
        double specCoeff = Point3D::vectDot(inter.localGeo.norm,half);
        if(specCoeff < 0) specCoeff = 0;
        else specCoeff = pow(specCoeff,phongExponent);
        Color specColor(ks.getR()*lightIntensity.getR()*specCoeff,ks.getG()*lightIntensity.getG()*specCoeff,ks.getB()*lightIntensity.getB()*specCoeff);
        pixelColor += diffuseColor + specColor;
    }
    return pixelColor;
}


