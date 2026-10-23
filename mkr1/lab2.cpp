#include <iostream>
#include <string>
#include <stdexcept>
#include <vector>

enum Result { Negative, Positive, Zero, Tie };

Result func(const std::vector<double> &arr) {
    int pos = 0, neg = 0, nul = 0;
    for (std::size_t i = 0; i < arr.size(); ++i) {
        if (arr[i] > 0) {
            ++pos;
        } else if (arr[i] < 0) {
            ++neg;
        } else {
            ++nul;
        }
    }
    if (neg > pos && neg > nul) return Negative;
    if (pos > neg && pos > nul) return Positive;
    if (nul > neg && nul > pos) return Zero;
    return Tie;
}

std::string toStr(Result r) {
    switch (r) {
        case Negative:
            return "Найбільше від'ємних елементів";
        case Positive: 
            return "Найбільше додатних елементів";
        case Zero:
            return "Найбільше нульових елементів";
        case Tie:
            return "Найбільшої кількості немає: є рівні за кількістю групи";
        default:
            throw std::invalid_argument("Error");
    }
}

int main() {
    int n;
    try {
        std::cout << "Введіть n: ";
        if (!(std::cin >> n) || n <= 0) {
            throw std::invalid_argument("n must be > 0");
        }
        std::vector<double> arr(n);
        for (int i = 0; i < n; ++i) {
            std::cout << "a[" << i + 1 << "] = ";
            if (!(std::cin >> arr[i])) {
                throw std::invalid_argument("must be a num");
            }
        }

        std::cout << "-------------\n";
        std::cout << toStr(func(arr)) << '\n';

    } catch (const std::exception &e) {
        std::cout << "Error: " << e.what() << '\n';
        return 1;
    }
    return 0;
}
