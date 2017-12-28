#ifndef COLOR_HPP
#define COLOR_HPP
#include "Vector.hpp"
#include <iostream>
using namespace std;
class Color: public Vector {
public:
    //Constructors
    Color():Vector::Vector() {}
    Color(double r,double g,double b):Vector::Vector(r,g,b) {}
    Color(const Color& c):Vector(c) {}

    //Getter and Setters
    void setR(double r) { x = r; }
    void setG(double g) { y = g; }
    void setB(double b) { z = b; }
    void setRGB(double r,double g, double b) { x=r; y=g; z=b; }
    double getR() const { return this->x; } 
    const double getG() const { return this->y; }
    const double getB() const { return this->z; }
    
    //output
    friend ostream& operator <<(ostream& out, const Color& c) {
        out << (int)c.getR() << " " << (int)c.getG() << " " << (int)c.getB();
        return out;
    }
};
#endif
