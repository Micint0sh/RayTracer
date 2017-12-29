#ifndef POINT3D_HPP
#define POINT3D_HPP



class Point3D {
public:
    double x;
    double y;
    double z;
    //Constructors
    Point3D();
    Point3D(double xVal, double yVal, double zVal);
    Point3D(const Point3D& p);
    //Operators
    virtual Point3D operator +(const Point3D& p) const;
    virtual Point3D operator -(const Point3D& p) const;
    bool operator ==(const Point3D& p) const;
    virtual Point3D operator +=(const Point3D& p);
    static double vectDot(const Point3D& v1, const Point3D& v2);
    static Point3D vectCross(const Point3D& v1, const Point3D& v2);
};

#endif
