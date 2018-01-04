#include "Sphere.hpp"
#include "../Core-Dependencies/Vector.hpp"
#include "../Core-Dependencies/Point3D.hpp"
#include "../Core-Dependencies/Normal.hpp"
#include <cmath>

using namespace std;

//Constructor
Sphere::Sphere(Point3D& cent, double rad, Material* mat) {
    center = cent;
    radius = rad;
    material = mat;
}

bool Sphere::intersect(const Ray& ray, double& tValue, Intersection* in) {
    double delta;
    Vector dire = ray.getDir();
    Vector pos = ray.getPos();
    double A, B, C;
    A = Point3D::vectDot(dire,dire);
    B = 2*Point3D::vectDot(dire,pos-center);
    C = -radius*radius + Point3D::vectDot(pos-center,pos-center);
    delta = B*B-4*A*C;
    double t = (-B-sqrt(delta))/(2*A);
    if(delta < 0 || t < 0.0001) return false;
    else {
        tValue = t;
        Point3D intersectPos = pos+dire*tValue;
        in->primitive = this;
        in->localGeo.pos = intersectPos;
        Normal norm(intersectPos - center);
        in->localGeo.norm = norm;
        in->view = ray;
        return true;
    }
}



//bool Sphere::getBRDF(LocalGeo& local, BRDF* brdf) {
//
//}