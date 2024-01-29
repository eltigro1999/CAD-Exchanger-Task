#include "circle.h"

Circle::Circle() : m_ellipse(0, 0, 1, 1)
{
}
Circle::Circle(const double &xCenter, const double &yCenter, const double &radius) : m_ellipse(xCenter,
                                                                                               yCenter,
                                                                                               radius,
                                                                                               radius)
{
}

Circle::Circle(const Ellipse &ellipse)
{
    m_ellipse = ellipse;
}

Point Circle::get3DPoint(const double &t) const
{
    return m_ellipse.get3DPoint(t);
}

Vector Circle::get3DVector(const double &t) const
{
    return m_ellipse.get3DVector(t);
}

Circle::~Circle() {}
