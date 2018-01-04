#include "Triangle.hpp"
#include <iostream>

Triangle::Triangle(Point3D p1, Point3D p2, Point3D p3, Material* mat){
    pA = p1;
    pB = p2;
    pC = p3;
    material = mat;
}

bool Triangle::intersect(const Ray &ray, double &tValue, Intersection *in) {
    double _a = pA.x - pB.x;
    double _b = pA.y - pB.y;
    double _c = pA.z - pB.z;
    double _d = pA.x - pC.x;
    double _e = pA.y - pC.y;
    double _f = pA.z - pC.z;
    double _g = ray.getDir().x;
    double _h = ray.getDir().y;
    double _i = ray.getDir().z;
    double _j = pA.x - ray.getPos().x;
    double _k = pA.y - ray.getPos().y;
    double _l = pA.z - ray.getPos().z;

    double matDet = _a*(_e*_i-_h*_f) + _b*(_g*_f-_d*_i)+_c*(_d*_h-_e*_g);
    double t = -(_f*(_a*_k-_j*_b) + _e*(_j*_c-_a*_l) + _d*(_b*_l-_k*_c))/matDet;
    double gamma = (_i*(_a*_k-_j*_b) + _h*(_j*_c-_a*_l) + _g*(_b*_l-_k*_c))/matDet;
    double beta = (_j*(_e*_i-_h*_f)+_k*(_g*_f-_d*_i)+_l*(_d*_h-_e*_g))/matDet;
    if(gamma > 0 && beta > 0 && gamma+beta < 1 && t > 0.00001) {
        //hit
        //std::cout << "Triangle:" << t << std::endl;
        tValue = t;
        in->primitive = this;
        in->localGeo.pos = ray.getPos()+ray.getDir()*t;
        in->localGeo.norm = ((Vector)Point3D::vectCross(pA-pB,pA-pC)).normalize();
        in->view = ray;
        return true;
    }
    return false;
}

