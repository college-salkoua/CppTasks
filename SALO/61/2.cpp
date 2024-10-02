#include <iostream>
using namespace std;

// Функція для знаходження більшого з двох чисел
int max(int a, int b) {
    return (a > b) ? a : b;
}

int main() {
    // Введення трьох чисел
    cout << "Введіть три цілочисельних значення:\n";
    int num1, num2, num3;
    cin >> num1 >> num2 >> num3;

    // Знаходження найбільшого з трьох
    int maxOfTwo = max(num1, num2);
    int maxOfThree = max(maxOfTwo, num3);

    cout << "Найбільше з трьох чисел: " << maxOfThree << endl;

    return 0;
}

