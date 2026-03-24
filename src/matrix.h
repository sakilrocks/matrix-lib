
#ifndef MATRIX_H
#define MATRIX_H

#include <vector>
#include <iostream>
#include <stdexcept>


class Matrix {
private:
    int rows, cols;
    std::vector<double> data;

public:
    // Constructor
    Matrix(int r, int c);

    // Element access
    double& operator()(int i, int j);
    double operator()(int i, int j) const;

    // Operations
    Matrix operator+(const Matrix& other) const;
    Matrix operator*(const Matrix& other) const;

    // Utility
    void print() const;

    int getRows() const;
    int getCols() const;
    
};

#endif