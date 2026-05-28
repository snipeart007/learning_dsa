# Learning DSA

A comprehensive collection of Data Structures and Algorithms implementations in C++.

## Overview

Learning DSA is an educational repository containing implementations of various data structures and algorithms in C++. It's designed for learning and practicing DSA concepts with clean, well-organized code examples.

## Features

- **Algorithm Implementations** - Multiple DSA problems solved
- **Problem Categories** - Arrays, strings, dynamic programming, and more
- **C++17 Standard** - Modern C++ with type safety
- **Makefile Build System** - Easy compilation and execution

## Implemented Algorithms

- **longest_subarray_with_sum_k.cpp** - Find longest subarray with given sum
- **majority_element_1.cpp** - Find majority element in array
- **max_subarray_sum.cpp** - Maximum subarray sum (Kadane's algorithm)
- **sort_012.cpp** - Sort array of 0s, 1s, and 2s
- **stock_buy_and_sell.cpp** - Best time to buy and sell stock
- **two_sum.cpp** - Find two numbers that sum to target

## Project Structure

```
learning_dsa/
├── Makefile           # Build configuration
├── *.cpp              # Algorithm implementations
├── Unorganised/       # Work in progress
└── .gitignore
```

## Prerequisites

- G++ compiler with C++17 support
- Make utility
- Clang-format (for code formatting)

## Building and Running

### Compile and run a file:
```bash
make run path/to/file.cpp
```

### Format a file:
```bash
make format path/to/file.cpp
```

### Build only:
```bash
make build path/to/file.cpp
```

### Clean:
```bash
make clean
```

## Example Usage

```bash
# Run two_sum.cpp
make run two_sum.cpp

# Format and run longest_subarray_with_sum_k.cpp
make format longest_subarray_with_sum_k.cpp
make run longest_subarray_with_sum_k.cpp
```

## Code Quality

The repository uses clang-format for consistent code formatting with the provided `.clang-format` configuration.

## Learning Goals

This repository is meant to:
- Practice implementing classic DSA problems
- Understand algorithm complexity (Time and Space)
- Learn proper C++ coding practices
- Build a reference library for algorithm implementations

## License

Specify your license here.

## Author

Created by snipeart007
