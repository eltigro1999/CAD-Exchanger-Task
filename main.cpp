#define _USE_MATH_DEFINES

#include <iostream>
#include <vector>
#include "curve.h"
#include "circle.h"
#include "ellipse.h"
#include "helix.h"
#include <memory>
#include <cmath>
#include <algorithm>
#include <omp.h>

void addRandomValues(std::vector<std::shared_ptr<Curve>> &curves)
{
    curves.push_back(std::make_shared<Circle>(1, 3, 5));
    curves.push_back(std::make_shared<Circle>(3, 0, 2));
    curves.push_back(std::make_shared<Circle>(5, 2, 12));
    curves.push_back(std::make_shared<Circle>(0, 3, 7));
    curves.push_back(std::make_shared<Ellipse>(1, 2, 3, 4));
    curves.push_back(std::make_shared<Ellipse>(5, 6, 7, 8));
    curves.push_back(std::make_shared<Ellipse>(9, 10, 11, 12));
    curves.push_back(std::make_shared<Ellipse>(12, 13, 14, 15));
    curves.push_back(std::make_shared<Helix>(2, 2, 2, 3, 1));
    curves.push_back(std::make_shared<Helix>(9, 6, 7, 1, 4));
    curves.push_back(std::make_shared<Helix>(3, 6, 3, 12, 2));
    curves.push_back(std::make_shared<Helix>(2, 3, 10, 20, 3));
}

void displayPointsAndVectors(std::vector<std::shared_ptr<Curve>> &curves)
{
    for (const auto &curve : curves)
    {
        Point point = curve->get3DPoint(M_PI_4);
        Vector vector = curve->get3DVector(M_PI_4);
        std::cout << "Point (x,y,z): " << point.x << ", " << point.y << ", " << point.z << std::endl;
        std::cout << "Vector (x,y,z): " << vector.x << ", " << vector.y << ", " << vector.z << std::endl;
    }
}

void populateSecondContainer(const std::vector<std::shared_ptr<Curve>> &curves, std::vector<std::shared_ptr<Circle>> &circles)
{
    for (const auto &curve : curves)
    {
        if (auto circle = std::dynamic_pointer_cast<Circle>(curve))
        {
            circles.push_back(circle);
        }
    }
}

void sortCircles(std::vector<std::shared_ptr<Circle>> &circles)
{
    std::sort(circles.begin(), circles.end(), [](const auto &a, const auto &b)
              { return a->getRadius() < b->getRadius(); });
}

void printRadiuses(std::vector<std::shared_ptr<Circle>> &circles)
{
    std::cout << "Radiuses:" << std::endl;
    for (const auto &circle : circles)
    {
        std::cout << circle->getRadius() << std::endl;
    }
}

double sumRadiuses(std::vector<std::shared_ptr<Circle>> &circles)
{
    std::cout << "Radiuses:" << std::endl;
    double sum = 0;
    for (const auto &circle : circles)
    {
        sum += circle->getRadius();
    }
    std::cout << "The sum is: " << sum << std::endl;
    return sum;
}

int main()
{

    std::vector<std::shared_ptr<Curve>> curves;
    addRandomValues(curves);
    displayPointsAndVectors(curves);
    std::vector<std::shared_ptr<Circle>> circles;
    populateSecondContainer(curves, circles);
    sortCircles(circles);
    printRadiuses(circles);
    sumRadiuses(circles);
    int sum = 0;
#pragma omp parallel for reduction(+ : sum)
    for (size_t i = 0; i < circles.size(); ++i)
    {
        sum += circles[i]->getRadius();
    }
    std::cout << "Sum of radiuses is " << sum << std::endl;
    return 0;
}
