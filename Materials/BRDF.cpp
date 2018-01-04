//
// Created by Michael Jiang on 4/1/2018.
//

#include "BRDF.hpp"
#include "../Core-Dependencies/RayTracer.hpp"

BRDF::BRDF() :BlinnPhongWithAmbient::BlinnPhongWithAmbient() {
    Color mirror(1,1,1);
    km = mirror;
}

BRDF::BRDF(const Color &cDiff, const Color &cSpec, const Color &cMirr, double exp, const Color &amb):
        BlinnPhongWithAmbient::BlinnPhongWithAmbient(cDiff,cSpec,exp,amb) {
    km = cMirr;
}

Color BRDF::getColor(const vector<Light *> &lights, const vector<Primitive *> &objects, const Intersection &inter, double depth) {
    Color c = BlinnPhongWithAmbient::getColor(lights,objects,inter,depth);
    Color black;
    if(km == black || depth == 0) {return c;}
    Vector refPos = inter.view.getDir()-((Vector)inter.localGeo.norm)*Point3D::vectDot(inter.view.getDir(),inter.localGeo.norm)*2;
    Ray reflect(inter.localGeo.pos,refPos,0,1000);
    Color reflected = RayTracer::trace(reflect,1000,depth-1,objects,lights);
    Color pixelColor(c.getR()+km.getR()*reflected.getR(),c.getG()+km.getG()*reflected.getG(),c.getB()+km.getB()*reflected.getB());
    return pixelColor;
}
