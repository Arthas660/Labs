#include <iostream>
#include <vector>

double dot(const std::vector<double> &x, const std::vector<double> &y) {
    double sum = 0.0;
    for (size_t i = 0; i < x.size(); ++i) {
        sum += x[i] * y[i];
    }
    return sum;
}

int main() {
    int n;
    std::cout << "Enter n: ";
    std::cin >> n;
    std::vector<double> a(n), b(n), c(n);
    std::cout << "a: " << '\n';
    for (int i = 0; i < n; ++i) std::cin >> a[i];
    std::cout << "b: " << '\n';
    for (int i = 0; i < n; ++i) std::cin >> b[i];
    std::cout << "c: " << '\n';
    for (int i = 0; i < n; ++i) std::cin >> c[i];

    double s = 2 * dot(a, b) - 3 * dot(a, c);
    std::cout << "s = " << s << '\n';
    return 0;
}
