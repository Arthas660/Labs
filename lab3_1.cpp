#include <iostream>
#include <cmath>

int main() {
    double *a = new double;
    int *n = new int;
    std::cout << "Enter a: ";
    std::cin >> *a;
    std::cout << "Enter n: ";
    std::cin >> *n;

    double *bot =new double(1.0);
    double *sum =new double(0.0);

    for (int i = 1; i <= *n; i++) {
        *bot *= (*a + i - 1);
        *sum += (2.0 * i) / *bot;
    }
    std::cout << "\nResult = " << *sum << std::endl;
    delete a; delete n; delete bot; delete sum;
    return 0;
}
