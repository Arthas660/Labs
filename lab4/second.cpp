#include <iostream>

int main() {
    const int MaxN = 20;
    int n;
    std::cout << "Enter n (must be <=20): ";
    std::cin >> n;
    if (n <= 0 || n>MaxN) {
        std::cout << "n must b >=0 & <=20!";
        return 1;
    }
    
    double A[MaxN][MaxN];

    std::cout << "Enter elements of array A (" << n << "x" << n << "):\n";
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            std::cin >> A[i][j];
        }
    }
    std::cout << "-----------Your Array-----------" << '\n';
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            std::cout << A[i][j] << "\t";
        }
        std::cout << '\n'; 
    }

    double X[MaxN];
    for (int i = 0; i < n; ++i) {
        double max_val = A[i][0];
        double min_val = A[i][0];
        for (int j = 0; j < n; ++j) {
            if (A[i][j] > max_val) {
                max_val = A[i][j];
            }
            if (A[i][j] < min_val) {
                min_val = A[i][j];
            }
        }
        X[i] = (std::abs(max_val) + std::abs(min_val)) / 2.0;
    }

    std::cout << "\n Array X:\n";
    for (int i = 0; i < n; ++i) {
        std::cout << "X[" << i << "] = " << X[i] << "\n";
    }

    return 0;
}
