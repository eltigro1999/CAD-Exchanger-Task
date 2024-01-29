#pragma once
#include "point.h"
#include "vector.h"

class Curve
{
public:
    virtual Point get3DPoint(const double &t) const = 0;
    virtual Vector get3DVector(const double &t) const = 0;
    virtual ~Curve();
};