#include <iostream>
#include <cmath>

int main() {
    std::cout << "\nLab 2 (Zavd 1)\n";
    double *a = new double;
    double *b = new double;
    std::cout << "Enter a b: ";
    std::cin >> *a >> *b;

    if ((*a >= 1 && *a <= 2) || (*a > 3 && *a < 7)) {
        std::cout << *a << " belongs to interval\n";
    }
    else {
        std::cout << *a << " doesn't belong to interval\n";
    }
    if ((*b >= 1 && *b <= 2) || (*b > 3 && *b < 7)) {
        std::cout << *b << " belongs to interval\n";
    }
    else {
        std::cout << *b << " doesn't belong to interval\n";
    }
    delete a; delete b;
    return 0;
}
