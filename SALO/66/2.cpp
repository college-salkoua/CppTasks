#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>

int main() {
    const int rows = 8;
    const int cols = 15;
    std::vector<std::vector<int>> array(rows, std::vector<int>(cols));
    int count_fives = 0;

    std::srand(std::time(0));

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            array[i][j] = std::rand() % 10; // Випадкове число від 0 до 9
            if (array[i][j] == 5) {
                count_fives++;
            }
        }
    }

    std::cout << "Кількість разів, коли число 5 зустрічається в масиві: " << count_fives << std::endl;

    return 0;
}

