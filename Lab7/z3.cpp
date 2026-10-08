#include <iostream>

int S(int n, int m) {
    if (n == 1 && m == 1) {
        return 1;
    } else if (n > 1) {
        return S(n - 1, m) + 1;
    } else {
        return S(n, m - 1);
    }
}

int main() {
    int n, m;
    std::cout << "Enter n and m: ";
    std::cin >> n >> m;

    if (n < 1 || m < 1) {
        std::cout << "must be >= 1" << '\n';
        return 1;
    }

    std::cout << "S(" << n << ", " << m << ") = " << S(n, m) << '\n';
    return 0;
}
