#include <iostream>
#include <vector>

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

    std::cout << "Середнє арифметичне парних рядків:\n";
    for (int i = 0; i < M; ++i) {
        if (i % 2 == 0) {
            double sum = 0;
            for (int j = 0; j < N; ++j) {
                sum += matrix[i][j];
            }
            double average = sum / N;
            std::cout << "Рядок " << i + 1 << ": " << average << std::endl;
        }
    }

    return 0;
}

