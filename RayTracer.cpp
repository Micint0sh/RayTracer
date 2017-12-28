#include "RayTracer.hpp"
#include <vector>
#include "Intersection.hpp"

using namespace std;

Color RayTracer::trace(const Ray& ray, double depth, vector<Primitive*>& objects) {
    //double minTValue = 0;
    for(int i = 0; i < objects.size(); i++){
        double tValue = 0;
        Intersection fake;
        if(objects[i]->intersect(ray, tValue, &fake)) {
            Color tmp(0,0,255);
            return tmp;
        }
    }
    Color tmp(0,0,0);
    return tmp;
}