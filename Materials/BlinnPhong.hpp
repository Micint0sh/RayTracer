#ifndef BLINNPHONG_HPP
#define BLINNPHONG_HPP


#include "Lambertian.hpp"

class BlinnPhong : public Lambertian{
protected:
    Color ks;
    double phongExponent;
public:
    BlinnPhong();
    BlinnPhong(const Color& cDiff, const Color& cSpec, double exp);
    Color getColor(const vector<Light*>& lights, const vector<Primitive*>& objects, const Intersection& inter, double depth);

};


#endif //BLINNPHONG_HPP
