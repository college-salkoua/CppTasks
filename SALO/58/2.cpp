#include <iostream>
#include <cmath>
#include <iomanip> // для std::setprecision

int main() {
    double a, b, step;

    // Введення діапазону та кроку
    std::cout << "Введіть початкове значення (a): ";
    std::cin >> a;
    std::cout << "Введіть кінцеве значення (b): ";
    std::cin >> b;
    std::cout << "Введіть крок: ";
    std::cin >> step;

    // Виведення заголовка таблиці
    std::cout << std::fixed << std::setprecision(4); // форматування для 4 знаків після коми
    std::cout << "x\t\ty\n";
    std::cout << "---------------------\n";

    // Табулювання функції
    for (double x = a; x <= b; x += step) {
        double y = 10 * sin(3.2 * x) - 1;
        std::cout << x << "\t\t" << y << std::endl;
    }

    return 0;
}

