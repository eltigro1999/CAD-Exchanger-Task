#pragma once
#include "curve.h"
#include "ellipse.h"

class Circle : public Curve
{
public:
    Circle();
    Circle(const double &xCenter, const double &yCenter, const double &radius);
    Circle(const Ellipse &ellipse);
    Point get3DPoint(const double &t) const override;
    Vector get3DVector(const double &t) const override;
    virtual ~Circle();

private:
    Ellipse m_ellipse;
};