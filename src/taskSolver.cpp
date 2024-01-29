#define _USE_MATH_DEFINES

#include "taskSolver.h"
#include "helix.h"
#include "ellipse.h"
#include "circle.h"
#include <iostream>
#include <cmath>
#include <algorithm>
#include <omp.h>
#include <ctime>
#include <cstdlib>

void TaskSolver::addSomeValues(std::vector<std::shared_ptr<Curve>> &curves)
{
    curves.push_back(std::make_shared<Circle>(1.1, 3.1, 5.1));
    curves.push_back(std::make_shared<Circle>(3.3, 0.44, 2.22));
    curves.push_back(std::make_shared<Circle>(5, 2, 12));
    curves.push_back(std::make_shared<Circle>(0, 3, 7));

    curves.push_back(std::make_shared<Ellipse>(1, 2, 3, 4));
    curves.push_back(std::make_shared<Ellipse>(5, 6, 7, 8));
    curves.push_back(std::make_shared<Ellipse>(9, 10, 11, 12));
    curves.push_back(std::make_shared<Ellipse>(12, 13, 14, 15));

    curves.push_back(std::make_shared<Helix>(2, 2, 2, 3, 1));
    curves.push_back(std::make_shared<Helix>(9, 6, 7, 1, 4));
    curves.push_back(std::make_shared<Helix>(3, 6, 3, 12, 2));
    curves.push_back(std::make_shared<Helix>(2, 3, 10, 20, 11)); // only z coordinate changes due to the step
    curves.push_back(std::make_shared<Helix>(2, 3, 10, 20, 22)); // only z coordinate changes due to the step
    curves.push_back(std::make_shared<Helix>(2, 3, 10, 20, 23)); // only z coordinate changes due to the step
    curves.push_back(std::make_shared<Helix>(2, 3, 10, 20, 45)); // only z coordinate changes due to the step
}
void TaskSolver::displayPointsAndVectors(std::vector<std::shared_ptr<Curve>> &curves)
{
    for (const auto &curve : curves)
    {
        Point point = curve->get3DPoint(M_PI_4);
        Vector vector = curve->get3DVector(M_PI_4);
        std::cout << "Point (x,y,z): " << point.x << ", " << point.y << ", " << point.z << std::endl;
        std::cout << "Vector (x,y,z): " << vector.x << ", " << vector.y << ", " << vector.z << std::endl;
    }
}

void TaskSolver::populateSecondContainer(const std::vector<std::shared_ptr<Curve>> &curves, std::vector<std::shared_ptr<Circle>> &circles)
{
    for (const auto &curve : curves)
    {
        if (auto circle = std::dynamic_pointer_cast<Circle>(curve))
        {
            circles.push_back(circle);
        }
    }
}

void TaskSolver::sortCircles(std::vector<std::shared_ptr<Circle>> &circles)
{
    std::sort(circles.begin(), circles.end(), [](const auto &a, const auto &b)
              { return a->getRadius() < b->getRadius(); });
}

void TaskSolver::printRadiuses(std::vector<std::shared_ptr<Circle>> &circles)
{
    std::cout << "Radiuses:" << std::endl;
    for (const auto &circle : circles)
    {
        std::cout << circle->getRadius() << std::endl;
    }
}

void TaskSolver::addRandomValuesForCircles(std::vector<std::shared_ptr<Circle>> &circles, const int &count)
{
    // Seed the random number generator
    std::srand(static_cast<unsigned int>(std::time(nullptr)));

    for (int i = 0; i < count; ++i)
    {
        // Generate random coordinates and radius
        double x = static_cast<double>(std::rand() % 10);          // Random x-coordinate (0 to 9)
        double y = static_cast<double>(std::rand() % 10);          // Random y-coordinate (0 to 9)
        double radius = static_cast<double>(std::rand() % 10 + 1); // Random radius (1 to 10)

        circles.push_back(std::make_shared<Circle>(x, y, radius));
    }
}

double TaskSolver::sumRadiuses(std::vector<std::shared_ptr<Circle>> &circles)
{
    double sum = 0;
    for (const auto &circle : circles)
    {
        sum += circle->getRadius();
    }
    std::cout << "The sum is: " << sum << std::endl;
    return sum;
}

double TaskSolver::parallelSumRadiuses(std::vector<std::shared_ptr<Circle>> &circles)
{
    double parallelSum = 0;
#pragma omp parallel for reduction(+ : parallelSum)
    for (size_t i = 0; i < circles.size(); ++i)
    {
        parallelSum += circles[i]->getRadius();
    }
    std::cout << "Parallel sum  " << parallelSum << std::endl;
    return parallelSum;
}
