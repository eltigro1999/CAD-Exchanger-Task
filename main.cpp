#include <vector>
#include "curve.h"
#include "circle.h"
#include <memory>
#include "taskSolver.h"

int main()
{
    std::vector<std::shared_ptr<Curve>> curves;
    std::vector<std::shared_ptr<Circle>> circles;
    TaskSolver taskSolver;
    taskSolver.addSomeValues(curves);
    taskSolver.displayPointsAndVectors(curves);
    taskSolver.populateSecondContainer(curves, circles);
    taskSolver.sortCircles(circles);
    taskSolver.printRadiuses(circles);
    // taskSolver.addRandomValuesForCircles(circles, 1000000); // optional
    taskSolver.sumRadiuses(circles);
    taskSolver.parallelSumRadiuses(circles);

    return 0;
}
