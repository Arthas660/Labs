#include <iostream>
#include <cmath>

void lab2_task1() {
    //Дано два дійсних числа: a,b. З'ясувати ,чи належать ці числа інтервалу [1;2] (3;7)
    std::cout << "\nLab 2 (Zavd 1)\n";
    double a, b;
    std::cout << "Enter a b: ";
    std::cin >> a >> b;

    if ((a >= 1 && a <= 2) || (a > 3 && a < 7)) {
        std::cout << a << " belongs to interval\n";
    }
    else {
        std::cout << a << " doesn't belong to interval\n";
    }
    if ((b >= 1 && b <= 2) || (b > 3 && b < 7)) {
        std::cout << b << " belongs to interval\n";
    }
    else {
        std::cout << b << " doesn't belong to interval\n";
    }
}

void lab2_task2() {
    std::cout << "\nLab 2 (Zavd 2)\n";
    double A, C, N, y;
    std::cout << "Enter A C N:  ";
    std::cin >> A >> C >> N;

    if (A == C && C == N) {
        y = cos(A + C + N);
    }
    else if (A < C && C == N) {
        y = cos(A * C * N);
    }
    else if (A < C && C < N) {
        y = cos((A + C) * N);
    }
    else { y = 0; }
    std::cout << "\ny = " << y << std::endl;
}

void lab2_task3() {
    /*Трикутник задається координатами своїх вершин на площині: A(x1,y1), B(x2,y2), C(x3,y3).
    Визначити чи є трикутник виродженим*/
    std::cout << "\nLab 2 (Zavd 3)\n";
    double x1, y1, x2, y2, x3, y3;
    std::cout << "Enter first coordinates (x1 y1): \n";
    std::cin >> x1 >> y1;
    std::cout << "Enter second coordinates (x2 y2): \n";
    std::cin >> x2 >> y2;
    std::cout << "Enter third coordinates (x3 y3): \n";
    std::cin >> x3 >> y3;

    double A = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
    double B = sqrt(pow(x3 - x2, 2) + pow(y3 - y2, 2));
    double C = sqrt(pow(x1 - x3, 2) + pow(y1 - y3, 2));
    double h = 0.000001;
    if ((A + B - C) < h || (A + C - B) < h || (B + C - A) < h) {
        std::cout << "\nYes, S = 0\n";
    }
    else {
        std::cout << "\nNo\n";
    }
}

void run_lab2() {
    int choice;
    bool Exit = false;

    do {
        std::cout << "\nSelect Lab 2 Task:\n";
        std::cout << "1) Task 1\n";
        std::cout << "2) Task 2\n";
        std::cout << "3) Task 3\n";
        std::cout << "4) Back to main menu\n";
        std::cin >> choice;

        switch (choice) {
        case 1:
            lab2_task1();
            break;
        case 2:
            lab2_task2();
            break;
        case 3:
            lab2_task3();
            break;
        case 4:
            Exit = true;
            break;
        default:
            std::cout << "Incorrect choice.\n";
            break;
        }
    } while (!Exit);
}

void lab3_task1() {
    std::cout << "\nLab 3 (Zavd 1)\n";
    double a;
    int n;
    std::cout << "Enter a: ";
    std::cin >> a;
    std::cout << "Enter n: ";
    std::cin >> n;

    double bot = 1.0;
    double sum = 0.0;

    for (int i = 1; i <= n; i++) {
        bot *= (a + i - 1);
        sum += (2.0 * i) / bot;
    }
    std::cout << "\nResult = " << sum << std::endl;
}

void lab3_task2() {
    std::cout << "\nLab 3 (Zavd 2)\n";

    double x, epsilon;
    std::cout << "Enter x (|x| > 1): ";
    std::cin >> x;
    std::cout << "Enter epsilon: ";
    std::cin >> epsilon;

    if (x <= 1 && x >= -1) {
        std::cout << "x must be |x| > 1" << std::endl;
        return;
    }

    double sum = 0.0;
    double a = 1.0 / x;
    int n = 0;

    while (abs(a) > epsilon) {
        sum += a;
        n++;
        a *= (2.0 * n - 1.0) / ((2.0 * n + 1.0) * x * x);
    }
    sum *= 2.0;
    std::cout << "\nResult ln((x+1)/(x-1)) = " << sum << std::endl;    
    std::cout << "\nIterations: " << n << std::endl;
}

void run_lab3() {
    int choice;
    bool Exit = false;

    do {
        std::cout << "\nSelect Lab 3 Task:\n";
        std::cout << "1) Task 1\n";
        std::cout << "2) Task 2\n";
        std::cout << "3) Back to main menu\n";
        std::cin >> choice;

        switch (choice) {
        case 1:
            lab3_task1();
            break;
        case 2:
            lab3_task2();
            break;
        case 3:
            Exit = true;
            break;
        default:
            std::cout << "Incorrect choice.\n";
            break;
        }
    } while (!Exit);
}

int main() {
    int choice;
    bool Exit = false;
    do {
        std::cout << "\n Select option: \n";
        std::cout << "1) Lab 1 \n";
        std::cout << "2) Lab 2 \n";
        std::cout << "3) Lab 3 \n";
        std::cout << "4) Exit \n";
        std::cout << "Enter option: ";
        std::cin >> choice;
        std::cout << "You selected option #" << choice << "\n";

        switch (choice) {
        case 1: {
            /*Трикутник задається координатами своїх вершин на площині: A(x1,y1), B(x2,y2), C(x3,y3).
            Скласти програму для знаходження площі трикутника за формолую Герона.*/

            double x1, y1, x2, y2, x3, y3;
            std::cout << "Enter first coordinates (x1 y1): \n";
            std::cin >> x1 >> y1;
            std::cout << "Enter second coordinates (x2 y2): \n";
            std::cin >> x2 >> y2;
            std::cout << "Enter third coordinates (x3 y3): \n";
            std::cin >> x3 >> y3;

            double A = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
            double B = sqrt(pow(x3 - x2, 2) + pow(y3 - y2, 2));
            double C = sqrt(pow(x1 - x3, 2) + pow(y1 - y3, 2));
            double h = 0.000001;
            if ((A + B - C) > h && (A + C - B) > h && (B + C - A) > h) {
                double p = (A + B + C) / 2.0;
                double S = sqrt(p * (p - A) * (p - B) * (p - C));
                std::cout << "\nS (ABC) = " << S << std::endl;
            }
            else {
                std::cout << "\nTriangle doesn't exist\n";
            }
            break;
        }
        case 2: {
            run_lab2();
            break;
        }
        case 3: {
            run_lab3();
            break;
        }
        case 4: {
            Exit = true;
            break;
        }
        default: {
            std::cout << "Incorrect choice.\n";
            break;
        }
        }
    } while (!Exit);

    return 0;
}
