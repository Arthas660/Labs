#include <iostream>
#include <cmath>

int main() {
    double *x = new double;
    double *epsilon = new double;

    std::cout << "Enter x (|x| > 1): ";
    std::cin >> *x;
    std::cout << "Enter epsilon: ";
    std::cin >> *epsilon;

    if (*x <= 1 && *x >= -1) {
        std::cout << "x must be |x| > 1" << std::endl;
        delete x; delete epsilon;
        return 1;
    }

    double *sum = new double(0.0);
    double *a = new double(1.0 / *x);
    int *n = new int(0);

    while (std::abs(*a) > *epsilon) {
        *sum += *a;
        (*n)++;
        *a *= (2.0 * (*n) - 1.0) / ((2.0 * (*n) + 1.0) * (*x) * (*x));
    }

    *sum *= 2.0;
    std::cout << "\nResult ln((x+1)/(x-1)) = " << *sum << std::endl;
    std::cout << "Iterations: " << *n << std::endl;
    delete x; delete epsilon; delete sum; delete a; delete n;
    return 0;
}
