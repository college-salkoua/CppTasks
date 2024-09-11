#include <iostream>

using namespace std;

int main() {
    // Виведення інформації про коледж
    cout << "ВКНЗ “Володимир-Волинський педагогічний коледж ім. А.Ю.Кримського»" << endl;
    cout << "циклова комісія викладачів комп’ютерних та математичних дисциплін" << endl;

    // Введення чисел
    double a, b;
    cout << "Введіть число a: ";
    cin >> a;
    cout << "Введіть число b: ";
    cin >> b;

    // Арифметичні операції
    double sum = a + b;
    double difference = a - b;
    double product = a * b;
    double quotient;

    // Перевірка на ділення на нуль
    if (b != 0) {
        quotient = a / b;
        cout << a << " / " << b << " = " << quotient << endl;
    } else {
        cout << "Ділення на нуль неможливе!" << endl;
    }

    // Виведення результатів
    cout << a << " + " << b << " = " << sum << endl;
    cout << a << " - " << b << " = " << difference << endl;
    cout << a << " * " << b << " = " << product << endl;

    // Виведення результату ділення
    if (b != 0) {
        cout << a << " / " << b << " = " << quotient << endl;
    }

    return 0;
}

