
#include "matrix.h"

// Constructor
Matrix::Matrix(int r, int c) : rows(r), cols(c), data(r * c, 0.0) {}

// Element access mutable
double& Matrix::operator()(int i, int j) {
    if (i >= rows || j >= cols)
        throw std::out_of_range("Index out of bounds");

    return data[i * cols + j];
}

// Element access const
double Matrix::operator()(int i, int j) const {
    if (i >= rows || j >= cols)
        throw std::out_of_range("Index out of bounds");

    return data[i * cols + j];
}

// Addition
Matrix Matrix::operator+(const Matrix& other) const {
    if (rows != other.rows || cols != other.cols)
        throw std::invalid_argument("Matrix dimensions must match for addition");

    Matrix result(rows, cols);

    for (int i = 0; i < rows * cols; i++) {
        result.data[i] = data[i] + other.data[i];
    }

    return result;
}

// Multiplication
Matrix Matrix::operator*(const Matrix& other) const {
    if (cols != other.rows)
        throw std::invalid_argument("Invalid dimensions for multiplication");

    Matrix result(rows, other.cols);

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < other.cols; j++) {
            for (int k = 0; k < cols; k++) {
                result(i, j) += (*this)(i, k) * other(k, j);
            }
        }
    }

    return result;
}

// Print
void Matrix::print() const {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            std::cout << (*this)(i, j) << " ";
        }
        std::cout << "\n";
    }
}

// Getters
int Matrix::getRows() const { return rows; }
int Matrix::getCols() const { return cols; }