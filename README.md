# 3D Curves Hierarchy Program in C++

1.  **_Support a few types of 3D geometric curves – circles, ellipses and 3D helixes. (Simplified
    definitions are below). Each curve should be able to return a 3D point and a first derivative (3D
    vector) per parameter t along the curve._**
    **_Files related to this task can be found in_**

                CAD-Exchanger-Task/libs/curves/include
                CAD-Exchanger-Task/libs/curves/src

2.  **_Populate a container (e.g. vector or list) of objects of these types created in random manner with
    random parameters._**
3.  **_Print coordinates of points and derivatives of all curves in the container at t=PI/4._**
4.  **_Populate a second container that would contain only circles from the first container. Make sure the
    second container shares (i.e. not clones) circles of the first one, e.g. via pointers._**
5.  **_Sort the second container in the ascending order of circles’ radii. That is, the first element has the
    smallest radius, the last - the greatest._**
6.  **_Compute the total sum of radii of all curves in the second container._**

    **_The 2-6 tasks can be found in_**

            CAD-Exchanger-Task/main.cpp
            CAD-Exchanger-Task/include/
            CAD-Exchanger-Task/src/


7.  **_Split implementation into a library of curves (.dll or .so) and executable which uses API of this library._**
    **_.so file can be found in_**
        CAD-Exchanger-Task/libs/curves/build/
    **_and it is connected to main.cpp and taskSolver class_**
8.  **_Implement computation of the total sum of radii using parallel computations (e.g. OpenMP or Intel
    TBB library)._**
        ***This task can be found in***

            CAD-Exchanger-Task/src/

```cpp
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
```
