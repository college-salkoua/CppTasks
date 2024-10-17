#include <iostream>
#include <vector>
#include <limits>

int main() {
    int M, N;
    
    std::cout << "Введіть кількість рядків (M): ";
    std::cin >> M;
    std::cout << "Введіть кількість стовпців (N): ";
    std::cin >> N;

    std::vector<std::vector<double>> matrix(M, std::vector<double>(N));

    std::cout << "Введіть елементи матриці:\n";
    for (int i = 0; i < M; ++i) {
        for (int j = 0; j < N; ++j) {
            std::cin >> matrix[i][j];
        }
    }

    double totalSum = 0;

    for (int i = 0; i < M; ++i) {
        double maxVal = std::numeric_limits<double>::min();
        for (int j = 0; j < N; ++j) {
            if (matrix[i][j] > maxVal) {
                maxVal = matrix[i][j];
            }
        }
        totalSum += maxVal;
    }

    std::cout << "Сума найбільших значень елементів рядків: " << totalSum << std::endl;

    return 0;
}

