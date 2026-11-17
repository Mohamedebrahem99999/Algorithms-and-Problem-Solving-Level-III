# Algorithms and Problem Solving: Level Three

A collection of solutions to algorithm and problem-solving exercises, written in C++, along with a set of reusable helper headers and a banking system project.

## Repository Structure

```
.
├── Banking_System_Project/   # Larger project built with the helper headers
├── problem_1/ ... problem_51/ # One folder per exercise
├── array_library.h           # Helper functions for arrays
├── Fromats.h                 # Output formatting helpers
├── input.h                   # Input helper functions
├── MyLib.h                   # General-purpose utilities
├── NumberTheory.h            # Number theory functions (primes, GCD, etc.)
├── random.h                  # Random number helpers
└── string_lib.h              # String helper functions
```

## Problems

Each `problem_N` folder contains the solution for one exercise. Browse the folders to find a specific problem.

## Helper Headers

The `.h` files at the root are reusable libraries shared across the problems. Include them with a relative path from inside a problem folder, for example:

```cpp
#include "../NumberTheory.h"
```

## Requirements

- A C++ compiler such as `g++` (C++11 or later recommended)

## How to Compile and Run

From inside a problem folder:

```bash
g++ -std=c++17 solution.cpp -o solution
./solution
```

Adjust the source file name to match the one inside each folder.

## Notes

- This repository is for learning and practice.
- Problems are numbered in the order they were solved.
