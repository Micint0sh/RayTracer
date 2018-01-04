//
// Created by Michael Jiang on 30/12/2017.
//

#ifndef BLINNPHONGWITHAMBIENT_HPP
#define BLINNPHONGWITHAMBIENT_HPP

#include "BlinnPhong.hpp"

class BlinnPhongWithAmbient : public BlinnPhong {
private:
    Color ambientColor;
public:
    BlinnPhongWithAmbient();
    BlinnPhongWithAmbient(const Color& cDiff, const Color& cSpec, double exp, const Color& amb);
    Color getColor(const vector<Light*>& lights, const vector<Primitive*>& objects, const Intersection& inter, double depth);
};


#endif //BLINNPHONGWITHAMBIENT_HPP
