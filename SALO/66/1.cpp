#include <iostream>
#include <vector>

int main() {
    int rows = 5, cols = 5;
    std::vector<std::vector<int>> matrix(rows, std::vector<int>(cols));
    
    // Генерація випадкових значень для матриці
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            matrix[i][j] = rand() % 21 - 10; // Від -10 до 10
        }
    }

    for (const auto& row : matrix) {
        for (int val : row) {
            std::cout << val << " ";
        }
        std::cout << std::endl;
    }

    int last_negative_column = -1;

    for (int col = 0; col < cols; col++) {
        bool all_negative = true;
        for (int row = 0; row < rows; row++) {
            if (matrix[row][col] >= 0) {
                all_negative = false;
                break;
            }
        }
        if (all_negative) {
            last_negative_column = col;
        }
    }

    if (last_negative_column != -1) {
        std::cout << "Номер крайнього стовпця з від'ємними елементами: " << last_negative_column << std::endl;
    } else {
        std::cout << "Стовпець з від'ємними елементами не знайдено." << std::endl;
    }

    return 0;
}

