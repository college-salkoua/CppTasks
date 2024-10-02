#include <iostream>
#include <cmath>

int main() {
    double x; // Змінна для кута
    int n;    // Кількість членів

    // Запитуємо у користувача значення x і n
    std::cout << "Введіть значення x (в градусах): ";
    std::cin >> x;
    std::cout << "Введіть значення n: ";
    std::cin >> n;

    // Перетворюємо x з градусів в радіани
    x = x * M_PI / 180.0;

    double numerator = 0.0; // Чисельник
    double denominator = 0.0; // Знаменник

    // Обчислюємо чисельник і знаменник
    for (int i = 1; i <= n; ++i) {
        numerator += i * cos(i * x);
        denominator += sin(i * x);
    }

    // Перевірка на 0 в знаменнику
    if (denominator != 0) {
        double y = numerator / denominator; // Обчислюємо y
        std::cout << "y = " << y << std::endl;
    } else {
        std::cout << "Знаменник дорівнює нулю, обчислення неможливе." << std::endl;
    }

    return 0;
}

