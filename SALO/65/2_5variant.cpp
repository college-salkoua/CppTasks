#include <iostream>
#include <vector>
#include <limits>

int main() {
    const int SIZE = 10;
    std::vector<double> arr(SIZE);

    std::cout << "Введіть " << SIZE << " дійсних чисел:" << std::endl;
    for (int i = 0; i < SIZE; ++i) {
        std::cin >> arr[i];
    }

    double maxElement = std::numeric_limits<double>::lowest();
    double productBeforeZero = 1;
    bool foundZero = false;

    for (int i = 0; i < SIZE; ++i) {
        if (arr[i] > maxElement) {
            maxElement = arr[i];
        }
        if (arr[i] == 0) {
            foundZero = true;
            break;
        }
        productBeforeZero *= arr[i];
    }

    if (!foundZero) {
        productBeforeZero = 0; // Якщо нуль не знайдено
    }

    std::cout << "Максимальний елемент: " << maxElement << std::endl;
    std::cout << "Добуток елементів до першого нульового: " << productBeforeZero << std::endl;

    return 0;
}

