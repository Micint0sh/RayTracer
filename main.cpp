#include <iostream>
#include "Core-Dependencies/Scene.hpp"
#include "Core-Dependencies/PPMImage.hpp"
#include "Primitives/Sphere.hpp"
#include "Materials/Lambertian.hpp"
#include "Lights/PointLight.hpp"
#include "Materials/BlinnPhong.hpp"
#include "Materials/BlinnPhongWithAmbient.hpp"

using namespace std;

int main(int argc, char const *argv[]) {
    //Set up Scene basics
    Scene test(1200,800);
    test.setUpTracer();

    //Set up Camera
    Point3D camPos(0,0,0);
    Vector camDir(1,0,0);
    Vector camUp(0,0,1);
    test.setUpCamera(camPos, camDir, camUp, 6, 4, 4);

    //Set up Film
    PPMImage img(1200,800);
    test.setUpFilm(img,"./image.ppm");

    //Set up Objects
    Point3D center(6,0,0);
    Color blue(102,204,255);
    Color white(255,255,255);
    Color gray(20,20,20);
    BlinnPhongWithAmbient mat(blue,white,1000,gray);
    Sphere s(center,2,&mat);
    test.newObject(&s);

    Point3D center1(3.5,1.5,0);
    Sphere s1(center1,0.5,&mat);
    test.newObject(&s1);

    Point3D center2(3.5,-1.5,-1);
    Sphere s2(center2,0.5,&mat);
    test.newObject(&s2);

    //Set up Lights
    Color lightIntens(0.8,0.8,0.8);
    Point3D lightPos(2,4,3);
    PointLight point(lightPos,lightIntens);
    test.newLight(&point);

    Color lightIntens1(0.8,0,0.8);
    Point3D lightPos1(2,-4,-1);
    PointLight point1(lightPos1,lightIntens1);
    test.newLight(&point1);

    Color lightIntens2(0.8,0.8,0);
    Point3D lightPos2(2,4,-1);
    PointLight point2(lightPos2,lightIntens2);
    test.newLight(&point2);

    //Render
    test.render();
    return 0;
}
