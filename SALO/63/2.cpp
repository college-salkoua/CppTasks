#include <iostream>
#include <cstdlib> 
#include <ctime> 

int main() {
    const int SIZE = 10; 
    int arr[SIZE];
    int count = 0;
    std::srand(static_cast<unsigned int>(std::time(0)));

    for (int i = 0; i < SIZE; ++i) {
        arr[i] = std::rand() % 31 + 20;
    }

    for (int i = 0; i < SIZE; ++i) {
        if (arr[i] % 5 == 0) {
            count++;
        }
    }

    std::cout << "Сгенерований масив:" << std::endl;
    for (int i = 0; i < SIZE; ++i) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;

    std::cout << "Кількість чисел, кратних 5: " << count << std::endl;

    return 0;
}

