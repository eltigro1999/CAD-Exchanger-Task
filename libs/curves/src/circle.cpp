#include "circle.h"

Circle::Circle() : Circle(0, 0, 1)
{
}
Circle::Circle(const double &xCenter, const double &yCenter, const double &radius) : m_ellipse(xCenter,
                                                                                               yCenter,
                                                                                               radius,
                                                                                               radius),
                                                                                     m_radius(radius)
{
}

Circle::Circle(const Circle &circle) : m_ellipse(circle.m_ellipse), m_radius(circle.m_radius)
{
}

Point Circle::get3DPoint(const double &t) const
{
    return m_ellipse.get3DPoint(t);
}

Vector Circle::get3DVector(const double &t) const
{
    return m_ellipse.get3DVector(t);
}

const double Circle::getRadius()
{
    return m_radius;
}

Circle::~Circle() {}
