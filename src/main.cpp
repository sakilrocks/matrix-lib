
#include "matrix.h"

int main() {
    Matrix A(2, 2);
    Matrix B(2, 2);

    // Initialize A
    A(0,0) = 1; A(0,1) = 2;
    A(1,0) = 3; A(1,1) = 4;

    // Initialize B
    B(0,0) = 5; B(0,1) = 6;
    B(1,0) = 7; B(1,1) = 8;

    std::cout << "Matrix A:\n";
    A.print();

    std::cout << "\nMatrix B:\n";
    B.print();

    Matrix C = A + B;
    std::cout << "\nA + B:\n";
    C.print();

    Matrix D = A * B;
    std::cout << "\nA * B:\n";
    D.print();

    return 0;
}