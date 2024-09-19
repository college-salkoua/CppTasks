#include <iostream>
#include <cmath>

double calculateFunction(double x) {
    if (x >= 2) {
        return (2 * x + 1) * cos(x);
    } else {
        return sin(log(x) - 1);
    }
}

int main() {
    double x1 = 4;
    double x2 = 1;

    double z1 = calculateFunction(x1);
    double z2 = calculateFunction(x2);

    std::cout << "Значення функції для x = " << x1 << ": z = " << z1 << std::endl;
    std::cout << "Значення функції для x = " << x2 << ": z = " << z2 << std::endl;

    return 0;
}

