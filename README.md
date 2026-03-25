# matrix-lib

a lightweight C++ matrix library implementing core operations with clean design and operator overloading.

---

## Overview

This project is a simple implementation of a matrix library in C++, built to understand core concepts of:
  - Object oriented design
  - Operator overloading
  - Memory layout and performance
  - Basic linear algebra operations

---

## Features
  - Matrix creation with dynamic sizing
  - Element access using () operator
  - Matrix addition (+) & Matrix multiplication (*)
  - Bounds checking with exceptions
  - Efficient 1D memory storage (std::vector)

## Project Structure

```
matrix-lib
  ├── CMakeLists.txt
  └── src/
       ├── main.cpp
       ├── matrix.h
       └── matrix.cpp
```

### main.cpp
  - Entry point of the program
  - Demonstrates matrix creation and operations
  - Runs sample addition and multiplication

### matrix.h
  - Declares the Matrix class
  - Defines public interface
  - Contains method signatures and structure

### matrix.cpp
  - Implements all matrix operations
  - Handles logic for addition, multiplication, and access
  - Includes error handling for invalid operations

---

## How It Works

### Matrix Storage

The matrix is stored in a 1D vector:
```
index = row * cols + col
```

### Operations
  - Addition: Element wise addition of two matrices with the same dimensions
  - Multiplication: Standard matrix multiplication algorithm using nested loops
  - Access: Overloaded () operator for intuitive element access

---

## Run & Build

### Build

(Make sure you have a C++ compiler and CMake)

```
mkdir build
cd build
cmake ..
make
```

### Run

```
./matrix_app
```

---

## Usage Ex

```
Matrix A(2, 2);
Matrix B(2, 2);

A(0,0) = 1; A(0,1) = 2;
A(1,0) = 3; A(1,1) = 4;

B(0,0) = 5; B(0,1) = 6;
B(1,0) = 7; B(1,1) = 8;

Matrix C = A + B;
Matrix D = A * B;
```
