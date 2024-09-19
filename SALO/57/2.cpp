#include <iostream>
#include <algorithm> // для std::sort

int main() {
    double a, b, c;
    
    // Введення трьох чисел
    std::cout << "Введіть три числа: ";
    std::cin >> a >> b >> c;

    // Поміщаємо числа в масив
    double numbers[3] = {a, b, c};

    // Сортуємо масив
    std::sort(numbers, numbers + 3);

    // Сума двох більших чисел
    double sum = numbers[1] + numbers[2];

    // Виведення результату
    std::cout << "Сума двох більших чисел: " << sum << std::endl;

    return 0;
}

