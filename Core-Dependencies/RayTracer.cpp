#include "RayTracer.hpp"
#include <vector>
#include "Intersection.hpp"

using namespace std;

Color RayTracer::trace(const Ray& ray, double depth, vector<Primitive*>& objects,vector<Light*>& lights) {
    double minTValue = depth;
    Color pixelColor(100,100,100);
    for(int i = 0; i < objects.size(); i++){
        Intersection intersect;
        double tValue = 0;
        if(objects[i]->intersect(ray, tValue, &intersect)) {
            if(tValue < minTValue)
            {
                Color sumColor;
                for(int j=0; j<lights.size(); j++) {
                    Color tmp;
                    tmp = intersect.primitive->getMaterial()->getColor(lights[j],intersect.localGeo);
                    sumColor += tmp;
                }
                pixelColor = sumColor;
            }
        }
    }
    return pixelColor;
}