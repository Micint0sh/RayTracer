#ifndef COLOR_HPP
#define COLOR_HPP
#include "Vector.hpp"
#include <iostream>
using namespace std;
class Color: public Vector {
public:
    //Constructors
    Color():Vector::Vector() {}
    Color(double r,double g,double b):Vector::Vector(r > 255 ? 255 :r ,g > 255 ? 255 : g,b > 255 ? 255 : b) {}
    Color(const Color& c):Vector(c) {}

    //Getter and Setters
    void setR(double r) { x = r > 255? 255: r; }
    void setG(double g) { y = g > 255? 255: g; }
    void setB(double b) { z = b > 255? 255: b; }
    void setRGB(double r,double g, double b) { x=r > 255? 255: r; y=g > 255? 255: g; z=b > 255? 255: b; }
    double getR() const { return this->x; } 
    const double getG() const { return this->y; }
    const double getB() const { return this->z; }
    
    //output
    friend ostream& operator <<(ostream& out, const Color& c) {
        out << (int)c.getR() << " " << (int)c.getG() << " " << (int)c.getB();
        return out;
    }

    Point3D operator +=(const Point3D& p) {
        x = (x+p.x) > 255 ? 255 : (x+p.x);
        y = (y+p.y) > 255 ? 255 : (y+p.y);
        z = (z+p.z) > 255 ? 255 : (z+p.z);
        return (*this);
    }
};
#endif
