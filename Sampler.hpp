#ifndef SAMPLER_HPP
#define SAMPLER_HPP

#include "Sample.hpp"

class Sampler {
    //Used for further extension
public:
    Sample getSample(int xCor, int yCor) {
        Sample tmp(xCor,yCor);
        return tmp;
    } 
};

#endif /* SAMPLER_HPP */

