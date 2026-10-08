#include <iostream>
#include <cmath>


double func(double a, double b){
    if (a>b){
        return pow(a,3.0) + sqrt(pow(a,2.0)+ pow(b,4.0));
    }
    else{
        return (pow(a,2.0) + -2.0*a + sqrt(a))/pow(a,3.0/5.0);
    }
}

int main(){
    double a,b;
    std::cout << "Enter a&b: ";
    std::cin >> a >> b;
    double u = func(a,b) + func(2,a) + 2;
    std::cout << "u=" << u << '\n';
    return 0;
}
