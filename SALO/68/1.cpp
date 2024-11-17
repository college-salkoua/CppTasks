#include <iostream>
using namespace std;

int main() {
    const int rows = 5, cols = 3;
    double matrix[rows][cols];

    cout << "Введіть елементи матриці 5x3:" << endl;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cin >> matrix[i][j];
        }
    }

    double sum = 0;

    for (int j = 0; j < cols; j++) {
        sum += matrix[2][j];
        sum += matrix[4][j];
    }

    cout << "Сума елементів 3 та 5 рядків: " << sum << endl;

    return 0;
}

