#ifndef CAMERA_HPP
#define CAMERA_HPP

#include "Ray.hpp"
#include "Sample.hpp"
#include "Point3D.hpp"
#include "Vector.hpp"

class Camera {
public:
    //Constructors
    Camera(Point3D pos,Vector dir, Vector up, int wid, int hei, double dist, int imgWid, int imgHeight);
    Camera(int wid, int hei, int imgWid, int imgHeight);
    
    //returns a ray
    Ray generateCameraRay(Sample sample);
    
private:
    Point3D camPos;
    Vector camDir;
    Vector camUp;
    Vector camRight;
    
    int viewWidth;
    int viewHeight;
    double viewDist;

    int imageWidth;
    int imageHeight;
};

#endif /* CAMERA_HPP */

