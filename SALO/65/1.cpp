#include <iostream>
#include <algorithm> // Для std::sort

int main() {
    const int SIZE = 10; // Розмір масиву
    int arr[SIZE];

    std::cout << "Введіть 10 цілих чисел:" << std::endl;
    for (int i = 0; i < SIZE; ++i) {
        std::cin >> arr[i];
    }

    std::sort(arr, arr + SIZE);

    std::cout << "Відсортований масив:" << std::endl;
    for (int i = 0; i < SIZE; ++i) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}

