# GCC & CMake Tasks

This repo contains code files for GCC and CMake tasks described below.

## Table of Contents
-----------------

* [Getting Started](#getting-started)
* [GCC Task 1](#gcc-task-1)
* [CMake Task 1](#cmake-task-1)
* [CMake Task 2](#cmake-task-2)

## Getting Started
---------------

To get started with this repository, simply clone it to your local machine:

```bash
git clone git@github.com:omer-io/gcc-cmake-tasks.git
```

## GCC Task 1
---------------

Compile with GCC a C++ program that uses a static and a dynamic library and optimize it using optimization flags.

**mymath Library:**

The following code defines a library called mymath, which includes two simple math functions: add and subtract. The main program uses these functions to add and subtract two numbers:

```cpp
// mymath.h
# ifndef MYMATH_H
# define MYMATH_H
namespace mymath{
int add(int a, int b);
int subtract(int a, int b);
}
# endif
```

```cpp
// mymath.cpp
# include "mymath.h"
int mymath::add(int a, int b) {    return a + b;}
int mymath::subtract(int a, int b) {    return a - b;}
```

Task:
- The library should be created as a static and dynamic library using GCC.
- Your program should use the library 1 million times to add and subtract different numbers
- Your program should be linked with the static library and the dynamic library separately using GCC.
- You should be able to explain the differences between static and dynamic libraries, and how to use them in a C++ program.

Subtask 1:
- Write a C++ program that uses the given code as a dynamic library
- Compile and link the program using GCC.
- Test the program to make sure it works as expected.

--------
After cloning this repo, use following commands to perform this subtask:

```bash
g++ -shared -fPIC -o mymath.so -I include/ src/mymath.cpp
g++ app/mainapp.cpp -I include/ -L. mymath.so -o mainshared
export LD_LIBRARY_PATH=./:$LD_LIBRARY_PATH
./mainshared
```
---
Subtask 2:
- Write a C++ program that uses the given code as a static library
- Compile and link the program using GCC.
- Test the program to make sure it works as expected.

---
After cloning this repo, use following commands to perform this subtask:

```bash
g++ -c src/mymath.cpp -I include/ -o src/mymath.o
ar rcs mymath.a src/mymath.o
g++ -o mianstatic app/mainapp.cpp -I include/ -L. mymath.a
./mainstatic
```
---
Subtask 3:
- Use GCC optimization flags to improve the performance of the program.
- Measure the performance of the program using a timing or profiling tool, and compare the execution time or performance metrics with the unoptimized version.
- Use GCC to compile your program in debug and release mode and compare the performance difference in both modes.

---
To perform this subtask use -g option for debug and -O3 option for optimization when compiling libraries and applicaton in previous subtasks.

---

## CMake Task 1
---------------

Perform the above gcc task using CMake.

## CMake Task 2
---------------

Create a CMake project that uses a third-party library [Nlohmann/JSON](https://github.com/nlohmann/json) using CMake external project. The project should have a main executable that parses config.json file using a third-party library. You need to create a CMakeLists.txt file that sets up the build system for the project, including compiling and linking the executable with the third-party library. You should also be able to handle any dependencies between the third-party libraries.