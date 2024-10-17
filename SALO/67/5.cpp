#include <iostream>
#include <vector>
#include <cmath>

int main() {
    int M, N;

    std::cout << "Введіть кількість рядків (M): ";
    std::cin >> M;
    std::cout << "Введіть кількість стовпців (N): ";
    std::cin >> N;

    std::vector<std::vector<double>> matrix(M, std::vector<double>(N));

    std::cout << "Введіть елементи матриці:\n";
    double sum = 0;
    for (int i = 0; i < M; ++i) {
        for (int j = 0; j < N; ++j) {
            std::cin >> matrix[i][j];
            sum += matrix[i][j];
        }
    }

    double average = sum / (M * N);
    double closestValue = matrix[0][0];
    int closestRow = 0;
    int closestCol = 0;

    for (int i = 0; i < M; ++i) {
        for (int j = 0; j < N; ++j) {
            if (std::fabs(matrix[i][j] - average) < std::fabs(closestValue - average)) {
                closestValue = matrix[i][j];
                closestRow = i;
                closestCol = j;
            }
        }
    }

    std::cout << "Середнє арифметичне: " << average << std::endl;
    std::cout << "Індекси елемента, найближчого до середнього: (" << closestRow << ", " << closestCol << ")" << std::endl;

    return 0;
}

