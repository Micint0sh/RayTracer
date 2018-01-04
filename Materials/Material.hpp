#ifndef MATERIAL_HPP
#define MATERIAL_HPP

#include "../Core-Dependencies/Color.hpp"
#include "../Core-Dependencies/LocalGeo.hpp"
#include "../Lights/Light.hpp"
#include "../Core-Dependencies/Intersection.hpp"

class Material {
public:
    virtual Color getColor(const vector<Light*>& lights, const vector<Primitive*>& objects, const Intersection& inter, double depth) = 0;
};


#endif //MATERIAL_HPP
