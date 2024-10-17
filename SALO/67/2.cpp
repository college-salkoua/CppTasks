#include <iostream>
#include <vector>
#include <limits>

int main() {
    const int M = 4;
    const int N = 6;
    std::vector<std::vector<double>> matrix(M, std::vector<double>(N));

    std::cout << "Введіть елементи матриці (4x6):\n";
    for (int i = 0; i < M; ++i) {
        for (int j = 0; j < N; ++j) {
            std::cin >> matrix[i][j];
        }
    }

    double minVal = std::numeric_limits<double>::max();
    double maxVal = std::numeric_limits<double>::min();

    for (int i = 0; i < M; ++i) {
        for (int j = 0; j < N; ++j) {
            if (matrix[i][j] < minVal) {
                minVal = matrix[i][j];
            }
            if (matrix[i][j] > maxVal) {
                maxVal = matrix[i][j];
            }
        }
    }

    double average = (minVal + maxVal) / 2;
    std::cout << "Середнє арифметичне найбільшого (" << maxVal << ") і найменшого (" << minVal << ") значень: " << average << std::endl;

    return 0;
}

