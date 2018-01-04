#include <iostream>
#include "Core-Dependencies/Scene.hpp"
#include "Core-Dependencies/PPMImage.hpp"
#include "Primitives/Sphere.hpp"
#include "Materials/Lambertian.hpp"
#include "Lights/PointLight.hpp"
#include "Materials/BlinnPhong.hpp"
#include "Materials/BlinnPhongWithAmbient.hpp"
#include "Primitives/Triangle.hpp"
#include "Materials/BRDF.hpp"

using namespace std;

int main(int argc, char const *argv[]) {
    //Set up Scene basics
    Scene test(1200,800);
    test.setUpTracer();

    //Set up Camera
    Point3D camPos(-1.7,1.7,0);
    Vector camDir(2.3,-1,0);
    Vector camUp(0,0,1);
    test.setUpCamera(camPos, camDir, camUp, 6, 4, 4);

    //Set up Film
    PPMImage img(1200,800);
    test.setUpFilm(img,"./image.ppm");

    //Set up Objects
    Point3D center(6,0,0);
    Color blue(102,204,255);
    Color red(255,102,204);
    Color green(102,255,204);
    Color white(255,255,255);
    Color darkGray(20,20,20);
    Color gray(200,200,200);
    Color ref(0.2,0.2,0.2);
    Color black(0,0,0);
    Color fullRef(1,1,1);
    BRDF matBlue(blue,white,ref,1000,darkGray);
    BRDF matMirror(darkGray,darkGray,fullRef,1000,darkGray);
    BRDF matRed(red,white,ref,1000,darkGray);
    BRDF matGreen(green,white,ref,1000,darkGray);
    BRDF matGray(gray,white,ref,1000,darkGray);
    Sphere s(center,2,&matBlue);
    test.newObject(&s);

    Point3D center1(3.5,1.5,0);
    Sphere s1(center1,0.5,&matRed);
    test.newObject(&s1);

    Point3D center2(3.5,-1.5,-1);
    Sphere s2(center2,0.5,&matGreen);
    test.newObject(&s2);

    Point3D p1(-1,0,-2);
    Point3D p2(1000,-4000,-2);
    Point3D p3(1000,4000,-2);
    Triangle t(p1,p2,p3,&matGray);
    test.newObject(&t);

    Point3D p4(1.5,-0.5,0);
    Point3D p5(-0,0,-0.5);
    Point3D p6(3,-1.5,2);
    Triangle t1(p4,p5,p6,&matMirror);
    test.newObject(&t1);

    //Set up Lights
    Color lightIntens(0.2,0.2,0.2);
    Point3D lightPos(2,6,3);
    PointLight point(lightPos,lightIntens);
    test.newLight(&point);

    Color lightIntens1(0.5,0.5,0.5);
    Point3D lightPos1(2,-6,-1);
    PointLight point1(lightPos1,lightIntens1);
    test.newLight(&point1);

    Color lightIntens2(0.8,0.8,0.8);
    Point3D lightPos2(2,6,-1);
    PointLight point2(lightPos2,lightIntens2);
    test.newLight(&point2);

    //Render
    test.render();
    return 0;
}
