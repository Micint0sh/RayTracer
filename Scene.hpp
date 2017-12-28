#ifndef SCENE_HPP
#define SCENE_HPP

#include <string>
#include <vector>

#include "Sampler.hpp"
#include "Camera.hpp"
#include "RayTracer.hpp"
#include "Film.hpp"

using namespace std;

class Scene {
public:
    //Constructors
    Scene();
    Scene(int wid, int hei);
    
    void setUpCamera(Point3D& pos,Vector& dir, Vector& up, int camWidth, int camHeight ,double dist);
    void setUpCamera();
    void setUpTracer();
    void setUpFilm(Image& img);
    void setUpFilm(Image& img, string path);
    void newObject(Primitive* object);
    void render();

private:
    int imageWidth;
    int imageHeight;
    
    Sampler sampler;
    Camera* camera;
    RayTracer* rayTracer;
    Film* film;
    
    vector<Primitive*> objects;
};

#endif /* SCENE_HPP */

