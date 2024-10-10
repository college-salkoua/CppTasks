#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>

int main() {
    const int rows = 8;
    const int cols = 15;
    std::vector<std::vector<int>> array(rows, std::vector<int>(cols));
    std::vector<int> counts(10, 0); // Вектор для підрахунку входжень від 0 до 9

    std::srand(std::time(0));

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            array[i][j] = std::rand() % 10; // Випадкове число від 0 до 9
            counts[array[i][j]]++; // Підрахунок входжень
        }
    }

    std::cout << "Кількість входжень чисел у масиві:" << std::endl;
    for (int i = 0; i < 10; i++) {
        std::cout << i << " -> " << counts[i] << " раз" << std::endl;
    }

    return 0;
}

