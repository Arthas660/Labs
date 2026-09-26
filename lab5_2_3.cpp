#include <iostream>
#include <cmath>

int main() {
    double *x1 = new double;
    double *x2 = new double;
    double *x3 = new double;
    double *y1 = new double;
    double* y2 = new double;
    double* y3 = new double;
    std::cout << "Enter first coordinates (x1 y1): \n";
    std::cin >> *x1 >> *y1;
    std::cout << "Enter second coordinates (x2 y2): \n";
    std::cin >> *x2 >> *y2;
    std::cout << "Enter third coordinates (x3 y3): \n";
    std::cin >> *x3 >> *y3;

    double* A = new double(std::sqrt(std::pow(*x2 - *x1, 2) + std::pow(*y2 - *y1, 2)));
    double* B = new double(std::sqrt(std::pow(*x3 - *x2, 2) + std::pow(*y3 - *y2, 2)));
    double* C = new double(std::sqrt(std::pow(*x1 - *x3, 2) + std::pow(*y1 - *y3, 2)));
    double* h = new double(0.000001);
    if ((*A + *B - *C) < *h || (*A + *C - *B) < *h || (*B + *C - *A) < *h) {
        std::cout << "\nYes, S = 0\n";
    }
    else {
        std::cout << "\nNo\n";
    }

    delete x1; delete y1; delete x2; delete y2; delete x3; delete y3;
    delete A;  delete B;  delete C;  delete h;

    return 0;
}
