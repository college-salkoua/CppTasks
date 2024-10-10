#include <iostream>
#include <vector>

int main() {
    std::vector<int> array = {12, 7, 5, 14, 3, 10, 6, 9, 8, 1};

    std::cout << "Елементи масиву у зворотному порядку:" << std::endl;
    for (int i = array.size() - 1; i >= 0; i--) {
        std::cout << array[i] << " ";
    }
    std::cout << std::endl;

    std::cout << "Елементи з парними індексами:" << std::endl;
    for (int i = 0; i < array.size(); i += 2) {
        std::cout << array[i] << " ";
    }
    std::cout << std::endl;

    std::cout << "Елементи з непарними індексами:" << std::endl;
    for (int i = 1; i < array.size(); i += 2) {
        std::cout << array[i] << " ";
    }
    std::cout << std::endl;

    std::cout << "Парні числа:" << std::endl;
    for (int num : array) {
        if (num % 2 == 0) {
            std::cout << num << " ";
        }
    }
    std::cout << std::endl;

    std::cout << "Непарні числа:" << std::endl;
    for (int num : array) {
        if (num % 2 != 0) {
            std::cout << num << " ";
        }
    }
    std::cout << std::endl;

    return 0;
}

