#ifndef SAMPLE_HPP
#define SAMPLE_HPP

#include "Point2D.hpp"


class Sample: public Point2D {
public:
    Sample():Point2D::Point2D() {}
    Sample(double xVal, double yVal): Point2D::Point2D(xVal, yVal){}
    Sample(const Point2D& p): Point2D::Point2D() {}
};

#endif
