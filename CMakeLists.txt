cmake_minimum_required(VERSION 3.12)
project(app)

set(SOURCES main.cpp)
add_subdirectory(libs/curves)

find_package(OpenMP REQUIRED)
if(OpenMP_CXX_FOUND) 
    set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} ${OpenMP_CXX_FLAGS}")
endif()

add_executable(${PROJECT_NAME} ${SOURCES})
target_link_libraries(${PROJECT_NAME} PRIVATE CurvesLib)