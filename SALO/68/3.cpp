#include <iostream>
using namespace std;

int main() {
    const int rows = 4, cols = 3;
    double matrix[rows][cols];

    cout << "Введіть елементи матриці 4x3:" << endl;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cin >> matrix[i][j];
        }
    }

    double sum_col2 = 0, sum_col3 = 0;
    for (int i = 0; i < rows; i++) {
        sum_col2 += matrix[i][1];
        sum_col3 += matrix[i][2];
    }

    double avg_col2 = sum_col2 / rows;
    double avg_col3 = sum_col3 / rows;

    cout << "Середнє арифметичне 2-го стовпця: " << avg_col2 << endl;
    cout << "Середнє арифметичне 3-го стовпця: " << avg_col3 << endl;

    return 0;
}

