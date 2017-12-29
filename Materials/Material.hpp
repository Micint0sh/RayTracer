#ifndef MATERIAL_HPP
#define MATERIAL_HPP

#include "../Core-Dependencies/Color.hpp"
#include "../Core-Dependencies/LocalGeo.hpp"
#include "../Lights/Light.hpp"

class Material {
public:
    virtual Color getColor(const Light* light, const LocalGeo& geo) = 0;
};


#endif //MATERIAL_HPP
