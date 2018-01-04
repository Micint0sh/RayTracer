//
// Created by Michael Jiang on 4/1/2018.
//

#ifndef BRDF_HPP
#define BRDF_HPP

#include "BlinnPhongWithAmbient.hpp"

class BRDF : public BlinnPhongWithAmbient {
private:
    Color km;
public:
    BRDF();
    BRDF(const Color& cDiff, const Color& cSpec, const Color& cMirr, double exp, const Color& amb);
    virtual Color getColor(const vector<Light*>& lights, const vector<Primitive*>& objects, const Intersection& inter, double depth);
};


#endif //BRDF_HPP
