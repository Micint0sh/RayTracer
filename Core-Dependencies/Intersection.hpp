#ifndef INTERSECTION_HPP
#define INTERSECTION_HPP

#include "LocalGeo.hpp"
#include "../Primitives/Primitive.hpp"

class Primitive;

class Intersection {
public:
    LocalGeo localGeo;
    Primitive* primitive;
};

#endif /* INTERSECTION_HPP */

