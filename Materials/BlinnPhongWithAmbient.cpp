//
// Created by Michael Jiang on 30/12/2017.
//

#include "BlinnPhongWithAmbient.hpp"

BlinnPhongWithAmbient::BlinnPhongWithAmbient() : BlinnPhong::BlinnPhong() {
    Color deepGray(10,10,10);
    ambientColor = deepGray;
}

BlinnPhongWithAmbient::BlinnPhongWithAmbient(const Color &cDiff, const Color &cSpec, double exp, const Color& amb) : BlinnPhong::BlinnPhong(cDiff,cSpec,exp){
    ambientColor = amb;
}

Color BlinnPhongWithAmbient::getColor(const vector<Light*>& lights, const vector<Primitive*>& objects, const Intersection& inter, double depth) {
    Color pixelColor = BlinnPhong::getColor(lights,objects,inter,depth);
    return pixelColor + ambientColor;
}
