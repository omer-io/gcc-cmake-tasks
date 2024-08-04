cmake_minimum_required(VERSION 3.30.1)
project(cmaketask1)

set(CMAKE_BUILD_TYPE Release)
set(CMAKE_CXX_FLAGS_RELEASE "-O3")

include_directories(include)
add_subdirectory(src)
add_subdirectory(app)
