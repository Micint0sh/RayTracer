#include "Camera.hpp"
#include "Point3D.hpp"
#include "Ray.hpp"

Camera::Camera(Point3D pos,Vector dir, Vector up, int wid, int hei, double dist, int imgWid, int imgHeight) {
    camPos = pos;
    camDir = dir.normalize();
    camUp = up.normalize();
    camRight = ((Vector)Point3D::vectCross(camDir,camUp)).normalize();
    camUp = ((Vector)Point3D::vectCross(camRight, camDir)).normalize();
    viewWidth = wid;
    viewHeight = hei;
    viewDist = dist;
    imageWidth = imgWid;
    imageHeight = imgHeight;
}

Camera::Camera(int wid, int hei,int imgWid, int imgHeight) {
    Point3D pos(0,0,0);
    Vector dir(1,0,0);
    Vector up(0,0,1);
    double dist = 1;
    camPos = pos;
    camDir = dir.normalize();
    camUp = up.normalize();
    camRight = ((Vector)Point3D::vectCross(camDir,camUp)).normalize();
    camUp = ((Vector)Point3D::vectCross(camRight, camDir)).normalize();
    viewWidth = wid;
    viewHeight = hei;
    viewDist = dist;
    imageWidth = imgWid;
    imageHeight = imgHeight;
}

Ray Camera::generateCameraRay(Sample sample) {
    double normedX = sample.x / imageWidth - 0.5;
    double normedY = sample.y / imageHeight - 0.5;
    //Test ray generation
    Ray newRay(camPos, camDir*viewDist+camRight*normedX*viewWidth+camUp*normedY*viewHeight, 0 , 1000);
    return newRay;
}