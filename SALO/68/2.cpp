#include <iostream>
using namespace std;

int main() {
    int N;
    cout << "Введіть розмірність квадратної матриці N: ";
    cin >> N;

    double matrix[N][N];

    cout << "Введіть елементи матриці розміру " << N << "x" << N << ":" << endl;
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            cin >> matrix[i][j];
        }
    }

    double sum = 0;
    for (int j = 0; j < N; j++) {
        sum += matrix[0][j];
        sum += matrix[1][j];
    }

    cout << "Сума елементів двох перших рядків: " << sum << endl;

    return 0;
}

