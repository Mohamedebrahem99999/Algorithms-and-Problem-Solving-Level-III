# Algorithms and Problem Solving: Level Three

An educational repository for learning how to solve algorithmic problems step by step. It contains 51 practice problems, reusable C++ helper headers, and a larger banking system project that puts those helpers to use.

The goal is not just to have working solutions. It is to build the habit of thinking through a problem before writing code.

## How to Use This Repository

Each problem is a learning opportunity. Work through it in this order:

1. **Read the problem carefully.** Identify the input, the expected output, and any constraints.
2. **Work through examples by hand.** Trace a small case on paper before you touch the keyboard.
3. **Plan an approach.** Decide which data structure or technique fits, and why. Write the idea in plain words or pseudocode.
4. **Implement it yourself.** Try to write the solution before looking at the existing one.
5. **Test your solution.** Check edge cases such as empty input, a single element, very large values, or duplicates.
6. **Compare and reflect.** Only after you've made a real attempt, compare with the solution in the folder. Ask: was my approach different, and is theirs simpler or faster?

Looking at the solution too early skips the most valuable part of the exercise.

## Repository Structure

```
.
├── Banking_System_Project/    # Larger project that uses the helper headers
├── problem_1/ ... problem_51/ # One folder per exercise
├── array_library.h            # Helper functions for arrays
├── Fromats.h                  # Output formatting helpers
├── input.h                    # Input helper functions
├── MyLib.h                    # General-purpose utilities
├── NumberTheory.h             # Number theory functions (primes, GCD, etc.)
├── random.h                   # Random number helpers
└── string_lib.h               # String helper functions
```

Problems are numbered in a suggested order, so work through them from the beginning. Later problems often reuse ideas from earlier ones.

## Using the Helper Headers

The `.h` files at the root are shared libraries. Include them with a relative path from inside a problem folder:

```cpp
#include "../NumberTheory.h"
```

Try solving a problem with your own code first. Use the helpers when they save you repeated work, and read them to see how they're implemented.

## Requirements

- A C++ compiler such as `g++` (C++11 or later recommended)

## Compiling and Running

From inside a problem folder:

```bash
g++ -std=c++17 solution.cpp -o solution
./solution
```

Adjust the source file name to match the one in each folder.

## Adding Your Own Solutions

If you find a different or cleaner approach, add it as a separate file in the same folder, such as `alternative.cpp`. Comparing approaches is one of the best ways to learn.

## Contributing

Corrections, clearer explanations, and additional test cases are welcome.
