#include <iostream>
#include <vector>

int main() {
    const int SIZE = 10;
    std::vector<int> arr(SIZE);

    std::cout << "Введіть " << SIZE << " цілих чисел:" << std::endl;
    for (int i = 0; i < SIZE; ++i) {
        std::cin >> arr[i];
    }

    int productOddIndices = 1;
    bool hasOddIndices = false;
    int firstNegativeIndex = -1;
    int lastNegativeIndex = -1;

    for (int i = 0; i < SIZE; ++i) {
        if (i % 2 != 0) {
            productOddIndices *= arr[i];
            hasOddIndices = true;
        }
        if (arr[i] < 0) {
            if (firstNegativeIndex == -1) {
                firstNegativeIndex = i;
            }
            lastNegativeIndex = i;
        }
    }

    int sumBetweenNegatives = 0;
    if (firstNegativeIndex != -1 && lastNegativeIndex != -1 && firstNegativeIndex < lastNegativeIndex) {
        for (int i = firstNegativeIndex + 1; i < lastNegativeIndex; ++i) {
            sumBetweenNegatives += arr[i];
        }
    }

    if (!hasOddIndices) {
        productOddIndices = 0;
    }

    std::cout << "Добуток елементів з непарними індексами: " << productOddIndices << std::endl;
    std::cout << "Сума елементів між першим і останнім від’ємними: " << sumBetweenNegatives << std::endl;

    return 0;
}

