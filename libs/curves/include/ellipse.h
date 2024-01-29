#pragma once
#include "curve.h"

class Ellipse : public Curve
{
public:
    Ellipse();
    Ellipse(const double &xCenter, const double &yCenter, const double &xRadius, const double &yRadius);
    Ellipse(const Ellipse &ellipse);
    Point get3DPoint(const double &t) const override;
    Vector get3DVector(const double &t) const override;
    Ellipse &operator=(const Ellipse &ellipse);
    virtual ~Ellipse();

private:
    double m_xCenter;
    double m_yCenter;
    double m_xRadius;
    double m_yRadius;
    const double m_zCenter = 0;
};