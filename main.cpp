#include <iostream>
#include "Scene.hpp"
#include "PPMImage.hpp"
#include "Sphere.hpp"
#include "Point3D.hpp"
#include "Primitive.hpp"
#include "Vector.hpp"

using namespace std;

int main(int argc, char const *argv[]) {
    //Set up Scene basics
    Scene test(300,200);
    test.setUpTracer();

    //Set up Camera
    Point3D camPos(0,0,0);
    Vector camDir(1,1,0);
    Vector camUp(0,0,1);
    test.setUpCamera(camPos, camDir, camUp, 3, 2, 1);

    //Set up Film
    PPMImage img(300,200);
    test.setUpFilm(img,"./image.ppm");

    //Set up Objects
    Point3D center(3,0,0);
    Sphere s(center,1);
    test.newObject(&s);

    //Render
    test.render();
    return 0;
}
