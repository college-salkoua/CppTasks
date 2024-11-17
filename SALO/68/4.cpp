#include <iostream>
using namespace std;

int main() {
    const int rows = 3, cols = 5;
    double matrix[rows][cols];

    cout << "Введіть елементи матриці 3x5:" << endl;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cin >> matrix[i][j];
        }
    }

    double sum_col4 = 0;
    for (int i = 0; i < rows; i++) {
        sum_col4 += matrix[i][3];
    }

    double avg_col4 = sum_col4 / rows;
    cout << "Середнє арифметичне 4-го стовпця: " << avg_col4 << endl;

    return 0;
}

