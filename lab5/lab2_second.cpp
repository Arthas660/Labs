#include <iostream>
#include <cmath>

int main() {
    double *A = new double;
    double *C = new double;
    double *N = new double;
    double *y = new double;

    std::cout << "Enter A C N: ";
    std::cin >> *A >> *C >> *N;

    if (*A == *C && *C == *N) {
        *y = std::cos(*A + *C + *N);
    }
    else if (*A < *C && *C == *N) {
        *y = std::cos(*A * *C * *N);
    }
    else if (*A < *C && *C < *N) {
        *y = std::cos((*A + *C) * *N);
    }
    else {
        *y = 0;
    }

    std::cout << "\ny = " << *y << std::endl;
    delete A; delete C; delete N; delete y;
    return 0;
}
