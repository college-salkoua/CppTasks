#include <iostream>
#include <vector>
#include <limits>

int main() {
    int N;

    std::cout << "Введіть порядок квадратної матриці (N): ";
    std::cin >> N;

    std::vector<std::vector<double>> matrix(N, std::vector<double>(N));

    std::cout << "Введіть елементи матриці:\n";
    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < N; ++j) {
            std::cin >> matrix[i][j];
        }
    }

    double minVal = std::numeric_limits<double>::max();
    int minRowIndex = 0;

    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < N; ++j) {
            if (matrix[i][j] < minVal) {
                minVal = matrix[i][j];
                minRowIndex = i;
            }
        }
    }

    double rowSum = 0;
    for (int j = 0; j < N; ++j) {
        rowSum += matrix[minRowIndex][j];
    }

    std::cout << "Сума елементів рядка з найменшим значенням: " << rowSum << std::endl;

    return 0;
}

