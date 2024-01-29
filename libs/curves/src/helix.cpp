#include "helix.h"
#include <cmath>

Helix::Helix() : Helix(0, 0, 0, 1, 1) {}

Helix::Helix(const double &xCenter, const double &yCenter, const double &zCenter, const double &radius, const double &step) : m_xCenter(xCenter),
                                                                                                                              m_yCenter(yCenter),
                                                                                                                              m_zCenter(zCenter),
                                                                                                                              m_radius(radius <= 0 ? 1 : radius),
                                                                                                                              m_step(step == 0 ? 1 : step)
{
}

Helix::Helix(const Helix &helix) : Helix(helix.m_xCenter, helix.m_yCenter, helix.m_zCenter, helix.m_radius, helix.m_step) {}

Point Helix::get3DPoint(const double &t) const
{
    return {
        m_xCenter + m_radius * std::cos(t),
        m_yCenter + m_radius * std::sin(t),
        m_zCenter + m_step * t};
}

Vector Helix::get3DVector(const double &t) const
{
    return {
        (-m_radius) * std::sin(t),
        m_radius * std::cos(t),
        m_step};
}

Helix::~Helix(){};