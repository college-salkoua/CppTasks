#include <iostream>
#include <cmath>

int main() {
    int t = 1; // Початкове значення t
    // Використовуємо do-while цикл
    do {
        double value = 3 - 3 * sin(t * t); // Обчислюємо значення
        if (value < 0) { // Перевіряємо, чи є значення від’ємним
            std::cout << "Номер: " << t << ", Значення: " << value << std::endl;
        }
        t++; // Збільшуємо t
    } while (t <= 20); // Умова продовження циклу

    return 0;
}

