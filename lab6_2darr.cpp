#include <iostream>

int main() {
    const int maxN = 20;
    int n;
    std::cout << "Enter n (<=20): ";
    std::cin >> n;
    if (n <= 0 || n > 20) {
        std::cout << "error";
        return 1;
    }

    double** arr = new double* [n];

    for (int i = 0; i < n;i++) arr[i] = new double[n];

    std::cout << "Enter elements (" << n << "x" << n << "):\n";
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            std::cin >> arr[i][j];
        }
    }

    double* X = new double[n];
    for (int i = 0; i < n; ++i) {
        double max_val = arr[i][0];
        double min_val = arr[i][0];
        for (int j = 0; j < n; ++j) {
            if (arr[i][j] > max_val) {
                max_val = arr[i][j];
            }
            if (arr[i][j] < min_val) {
                min_val = arr[i][j];
            }
        }
        X[i] = (std::abs(max_val) + std::abs(min_val)) / 2.0;
    }

    std::cout << "\nArray X:\n";
    for (int i = 0; i < n; ++i) {
        std::cout << "X[" << i << "] = " << X[i] << "\n";
    }

    for (int i = 0; i < n; ++i) {
        delete[] arr[i];
    }
    delete[] arr;
    delete[] X;
    return 0;
}
