cmake_minimum_required(VERSION 3.12)
project(app)

set(SOURCES main.cpp)
add_subdirectory(libs/curves)

add_executable(${PROJECT_NAME} ${SOURCES})
target_link_libraries(${PROJECT_NAME} PRIVATE CurvesLib)