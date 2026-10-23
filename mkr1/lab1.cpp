#include <iostream>
#include <string>
#include <cmath>
#include <stdexcept>

std::string func(const double &x1, const double &y1, const double &x2, const double &y2) {
    double r1 = x1 * x1 + y1 * y1;
    double r2 = x2 * x2 + y2 * y2;
    if (std::fabs(r1 - r2) < 1e-9) {
        return "Точки лежать на одному колі з центром у початку координат";
    }
    return "Точки не лежать на одному колі з центром у початку координат";
}

int main() {
    double x1, y1, x2, y2;
    std::cout << "Enter first coordinates (x1 y1): ";
    try{
        if (!(std::cin >> x1 >> y1)) {
            throw std::invalid_argument("No first coordinates");
            return 1;
        }
        std::cout << "Enter second coordinates (x2 y2): ";
        if (!(std::cin >> x2 >> y2)) {
            throw std::invalid_argument("No second coordinates");
            return 1;
        }
    
        std::cout << "-------------\n";
        std::cout << func(x1, y1, x2, y2) << '\n';
    }catch(const std::exception &e){
        std::cout << "Error" << e.what() << "\n";
        return 1;
    }
    return 0;
}
