#pragma once
#include "curve.h"
#include "ellipse.h"

#pragma message("circle.h is being included from libcurves.so")

class Circle : public Curve
{
public:
    Circle();
    Circle(const double &xCenter, const double &yCenter, const double &radius);
    Circle(const Circle &Circle);
    Point get3DPoint(const double &t) const override;
    Vector get3DVector(const double &t) const override;
    const double getRadius();
    virtual ~Circle();

private:
    Ellipse m_ellipse;
    double m_radius;
};