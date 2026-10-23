#include <iostream>
#include <stdexcept>
#include <vector>

double positiveSum(const std::vector<double> &row) {
    double sum = 0.0;
    for (std::size_t j = 0; j < row.size(); ++j) {
        if (row[j] > 0) {
            sum += row[j];
        }
    }
    return sum;
}

int main() {
    int m, n;
    try {
        std::cout << "Enter m & n: ";
        if (!(std::cin >> m >> n) || m <= 0 || n <= 0) {
            throw std::invalid_argument("m & n must be > 0");
        }

        std::vector<std::vector<double>> a(m, std::vector<double>(n));
        for (int i = 0; i < m; ++i) {
            for (int j = 0; j < n; ++j) {
                std::cout << "a[" << i << "][" << j<< "] = ";
                if (!(std::cin >> a[i][j])) {
                    throw std::invalid_argument("must be a num");
                }
            }
        }

        std::cout << "-------------\n";
        for (int i = 0; i < m; ++i) {
            std::cout << "Result:  " << i + 1 << " Row: " << positiveSum(a[i]) << '\n';
        }
    } catch (const std::exception &e) {
        std::cout << "Error: " << e.what() << '\n';
        return 1;
    }
    return 0;
}
