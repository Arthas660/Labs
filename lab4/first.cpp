#include <iostream>

int main() {
    const int maxN = 200;
    int n;
    std::cout << "Enter n: ";
    std::cin >> n;
    if (n <= 0 || n >= maxN) {
        std::cout << "N must be >= 1 & <= 199!\n";
        return 1;
    }

    double a, b;
    std::cout << "Enter a: ";
    std::cin >> a;
    std::cout << "Enter b (b > a): ";
    std::cin >> b;

    if (b < a) {
        std::cout << "b must be > a!\n";
        return 1;
    }

    double arr[maxN];

    for (int i = 0; i < n; ++i) {
        std::cout << "arr[" << i << "] = ";
        std::cin >> arr[i];
    }

    std::cout << "\n-------------Your Array---------------\n";
    for (int i = 0; i < n; ++i) {
        std::cout << arr[i] << ' ';
    }
    std::cout << "\n--------------------------------------\n";

    double s = 0, p = 1, arr_min = 0, arr_max = 0;
    int count_a = 0, count_b = 0, count_ab = 0;
    for (int i = 0; i < n; ++i) {
        if (arr[i] < a) {
            s += arr[i];
            count_a++;
        }
        if (arr[i] > b) {
            p *= arr[i];
            count_b++;
        }
        if (arr[i] > a && arr[i] < b) {
            if (count_ab == 0) {
                arr_min = arr[i];
                arr_max = arr[i];
            }
            else {
                if (arr[i] < arr_min) arr_min = arr[i];
                if (arr[i] > arr_max) arr_max = arr[i];
            }
            count_ab++;
        }
    }

    std::cout << "\n--- RESULTS ---\n";
    if (count_a > 0) {
        std::cout << "Sum (X[i] < a): " << s << '\n';
    }
    else {
        std::cout << "No elements X[i] < a\n";
    }
    if (count_b > 0) {
        std::cout << "Product (X[i] > b): " << p << '\n';
    }
    else {
        std::cout << "No elements X[i] > b\n";
    }

    if (count_ab > 0) {
        std::cout << "Min in (a, b): " << arr_min << '\n';
        std::cout << "Max in (a, b): " << arr_max << '\n';
    }
    else {
        std::cout << "No elements in range (a, b)\n";
    }
    return 0;
}
