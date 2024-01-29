#include "ellipse.h"
#include <cmath>

Ellipse::Ellipse() : Ellipse(0, 0, 1, 1)
{
    // Actually it is a circle in this variation
}

Ellipse::Ellipse(const double &xCenter, const double &yCenter, const double &xRadius, const double &yRadius) : m_xCenter(xCenter),
                                                                                                               m_yCenter(yCenter),
                                                                                                               m_xRadius(xRadius <= 0 ? 1 : xRadius),
                                                                                                               m_yRadius(yRadius <= 0 ? 1 : yRadius)
{
}

Ellipse::Ellipse(const Ellipse &ellipse) : Ellipse(ellipse.m_xCenter,
                                                   ellipse.m_yCenter,
                                                   ellipse.m_xRadius,
                                                   ellipse.m_yRadius)
{
}

Point Ellipse::get3DPoint(const double &t) const
{
    return {m_xCenter + m_xRadius * std::cos(t),
            m_yCenter + m_yRadius * std::sin(t),
            m_zCenter};
}
Vector Ellipse::get3DVector(const double &t) const
{
    // Taking the first derivatives
    return {
        -m_xRadius * std::sin(t),
        m_yRadius * std::cos(t),
        0};
}

Ellipse &Ellipse::operator=(const Ellipse &ellipse)
{
    if (this != &ellipse)
    {
        m_xCenter = ellipse.m_xCenter;
        m_yCenter = ellipse.m_yCenter;
        m_xRadius = ellipse.m_xRadius;
        m_yRadius = ellipse.m_yRadius;
    }
    return *this;
}

Ellipse::~Ellipse() {}