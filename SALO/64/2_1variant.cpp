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

    double sumNegative = 0;
    double product = 1;
    bool found = false;
    int maxIndex = 0, minIndex = 0;

    for (int i = 0; i < SIZE; ++i) {
        if (arr[i] < 0) {
            sumNegative += arr[i];
        }
        if (arr[i] > arr[maxIndex]) {
            maxIndex = i;
        }
        if (arr[i] < arr[minIndex]) {
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
        product = 0; // Якщо між макс. і мін. немає елементів
    }

    std::cout << "Сума від’ємних елементів: " << sumNegative << std::endl;
    std::cout << "Добуток елементів між максимальним та мінімальним: " << product << std::endl;

    return 0;
}

