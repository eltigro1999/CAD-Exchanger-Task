#pragma once
#include "curve.h"

class Helix : public Curve
{
public:
    Helix();
    Helix(const double &xCenter, const double &yCenter, const double &zCenter, const double &radius, const double &step);
    Helix(const Helix &helix);
    Point get3DPoint(const double &t) const override;
    Vector get3DVector(const double &t) const override;
    virtual ~Helix();

private:
    double m_xCenter;
    double m_yCenter;
    double m_zCenter;
    double m_radius;
    double m_step;
};