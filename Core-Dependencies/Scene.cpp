#include "Scene.hpp"

//Constructors 
Scene::Scene() {
    imageWidth = 0;
    imageHeight = 0;
    camera = NULL;
    rayTracer = NULL;
    film = NULL;
}

Scene::Scene(int wid, int hei) {
    imageWidth = wid;
    imageHeight = hei;
    camera = NULL;
    rayTracer = NULL;
    film = NULL;
}

void Scene::setUpCamera(Point3D& pos,Vector& dir, Vector& up, int camWidth, int camHeight ,double dist) {
    camera = new Camera(pos,dir,up,camWidth,camHeight,dist,imageWidth, imageHeight);
}

void Scene::setUpCamera() {
    camera = new Camera(2,2,imageWidth, imageHeight);
}

void Scene::setUpTracer() {
    rayTracer = new RayTracer();
}

void Scene::setUpFilm(Image& img) {
    if(film != NULL) delete film;
    film = new Film(img);
}

void Scene::setUpFilm(Image& img, string path) {
    if(film != NULL) delete film;
    film = new Film(img,path);
}

void Scene::newObject(Primitive* object) {
    objects.push_back(object);
}

void Scene::newLight(Light *light) {
    lights.push_back(light);
}

void Scene::render() {
    //Loop through every pixel
    for(int i = 0; i < imageWidth; i++) {
        for (int j = 0; j < imageHeight; j++) {
            Sample sample = sampler.getSample(i,j);
            Ray cameraRay = camera->generateCameraRay(sample);
            Color pixelColor = rayTracer->trace(cameraRay,1000,objects,lights);
            film->commit(sample,pixelColor);
        }
    }
    film->writeImage();
}


