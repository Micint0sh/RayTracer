#include <iostream>
#include "Core-Dependencies/Scene.hpp"
#include "Core-Dependencies/PPMImage.hpp"
#include "Primitives/Sphere.hpp"
#include "Materials/Lambertian.hpp"
#include "Lights/PointLight.hpp"

using namespace std;

int main(int argc, char const *argv[]) {
    //Set up Scene basics
    Scene test(600,400);
    test.setUpTracer();

    //Set up Camera
    Point3D camPos(0,0,0);
    Vector camDir(1,0,0);
    Vector camUp(0,0,1);
    test.setUpCamera(camPos, camDir, camUp, 3, 2, 2);

    //Set up Film
    PPMImage img(600,400);
    test.setUpFilm(img,"./image.ppm");

    //Set up Objects
    Point3D center(3,0,0);
    Color blue(102,204,255);
    Lambertian* mat = new Lambertian(blue);
    Sphere s(center,0.5,mat);
    test.newObject(&s);

    //Set up Lights
    Color lightIntens(0.8,0.8,0.8);
    Point3D lightPos(0,1,1);
    PointLight point(lightPos,lightIntens);
    test.newLight(&point);

//    Color lightIntens1(1,1,1);
//    Point3D lightPos1(2,-1,-1);
//    PointLight point1(lightPos1,lightIntens1);
//    test.newLight(&point1);

    //Render
    test.render();
    return 0;
}
