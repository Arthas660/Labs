#include <iostream>
#include <cmath>

double integrate(double (*f)(double), double a, double b, int n) {
    double h = (b - a) / n;
    double sum = 0.0;
    for (int i = 1; i <= n; ++i) {
        sum += f(a + i * h);
    }

    return h * sum;
}

double f1(double x) {
    return x * x + 1;
}

double f2(double x) {
    return std::sin(x);
}

double f3(double x) {
    return 1.0 / (1.0 + x * x);
}

int main() {
    const int n = 1000;
    const double pi = std::acos(-1.0);

    double i1 = integrate(f1, 0.0, 2.0, n);
    double i2 = integrate(f2, 0.0, pi / 2.0, n);
    double i3 = integrate(f3, 0.0, 1.0, n);

    double s = i1 + i2 + i3;

    std::cout << std::fixed;
    std::cout << "I1 = " << i1 << '\n';
    std::cout << "I2 = " << i2 << '\n';
    std::cout << "I3 = " << i3 << '\n';
    std::cout << "S = " << s << '\n';

    return 0;
}
