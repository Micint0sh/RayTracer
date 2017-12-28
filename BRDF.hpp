#ifndef BRDF_HPP
#define BRDF_HPP

#include "Color.hpp"

class BRDF {
public:
    //kd for diffuse, ks for specular, ka for ambient and kr for mirror reflection
    Color kd, ks, ka, kr;
};

#endif //BRDF_HPP
