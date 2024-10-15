cmake_minimum_required(VERSION 3.0)

project(02WriteColor)

file(GLOB_RECURSE PROJECT_SOURCES "*.cpp" "*.h")

add_executable(02WriteColor ${PROJECT_SOURCES})
set_property(TARGET 02WriteColor PROPERTY FOLDER "InOneWeekend")