#include <iostream>
using namespace std;

int main() {
    int M, N;
    cout << "Введіть розміри матриці M (кількість рядків) та N (кількість стовпців): ";
    cin >> M >> N;

    double matrix[M][N];

    cout << "Введіть елементи матриці розміру " << M << "x" << N << ":" << endl;
    for (int i = 0; i < M; i++) {
        for (int j = 0; j < N; j++) {
            cin >> matrix[i][j];
        }
    }

    double sum_first3_rows = 0;
    int total_elements = 0;

    for (int i = 0; i < 3 && i < M; i++) {
        for (int j = 0; j < N; j++) {
            sum_first3_rows += matrix[i][j];
        }
        total_elements += N;
    }

    double avg_first3_rows = sum_first3_rows / total_elements;
    cout << "Середнє арифметичне елементів перших 3-х рядків: " << avg_first3_rows << endl;

    return 0;
}

