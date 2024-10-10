#include <iostream>
#include <vector>
#include <cmath>
#include <limits>

int main() {
    const int SIZE = 10;
    std::vector<double> arr(SIZE);

    std::cout << "Введіть " << SIZE << " дійсних чисел:" << std::endl;
    for (int i = 0; i < SIZE; ++i) {
        std::cin >> arr[i];
    }

    double sumPositive = 0;
    double product = 1;
    bool found = false;
    int maxIndex = 0, minIndex = 0;

    for (int i = 0; i < SIZE; ++i) {
        if (arr[i] > 0) {
            sumPositive += arr[i];
        }
        if (std::fabs(arr[i]) > std::fabs(arr[maxIndex])) {
            maxIndex = i;
        }
        if (std::fabs(arr[i]) < std::fabs(arr[minIndex])) {
            minIndex = i;
        }
    }

    if (maxIndex > minIndex) {
        for (int i = minIndex + 1; i < maxIndex; ++i) {
            product *= arr[i];
            found = true;
        }
    } else {
        for (int i = maxIndex + 1; i < minIndex; ++i) {
            product *= arr[i];
            found = true;
        }
    }

    if (!found) {
        product = 0; // Якщо між макс. та мін. немає елементів
    }

    std::cout << "Сума додатних елементів: " << sumPositive << std::endl;
    std::cout << "Добуток елементів між максимальним та мінімальним за модулем: " << product << std::endl;

    return 0;
}

