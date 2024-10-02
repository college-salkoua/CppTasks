#include <iostream>
using namespace std;

// Функція для обчислення факторіалу
unsigned long long factorial(int n) {
    unsigned long long result = 1;
    for (int i = 1; i <= n; ++i) {
        result *= i;
    }
    return result;
}

// Функція для обчислення кількості комбінацій
unsigned long long combinations(int n, int m) {
    if (m > n) {
        return 0; // Якщо m більше за n, неможливо вибрати
    }
    return factorial(n) / (factorial(m) * factorial(n - m));
}

int main() {
    int n, m;
    cout << "Введіть кількість елементів (n): ";
    cin >> n;
    cout << "Введіть кількість вибраних елементів (m): ";
    cin >> m;

    unsigned long long result = combinations(n, m);
    cout << "Кількість комбінацій C(" << n << ", " << m << ") = " << result << endl;

    return 0;
}

