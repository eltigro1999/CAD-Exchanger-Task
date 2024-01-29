#pragma once
#include <vector>
#include <memory>
#include "curve.h"
#include "circle.h"

class TaskSolver
{
public:
    void addSomeValues(std::vector<std::shared_ptr<Curve>> &curves);
    void displayPointsAndVectors(std::vector<std::shared_ptr<Curve>> &curves);
    void populateSecondContainer(const std::vector<std::shared_ptr<Curve>> &curves, std::vector<std::shared_ptr<Circle>> &circles);
    void sortCircles(std::vector<std::shared_ptr<Circle>> &circles);
    void printRadiuses(std::vector<std::shared_ptr<Circle>> &circles);
    void addRandomValuesForCircles(std::vector<std::shared_ptr<Circle>> &circles, const int &count);
    double sumRadiuses(std::vector<std::shared_ptr<Circle>> &circles);
    double parallelSumRadiuses(std::vector<std::shared_ptr<Circle>> &circles);
};