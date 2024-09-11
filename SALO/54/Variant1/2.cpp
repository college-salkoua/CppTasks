#include <iostream>

using namespace std;

int main() {
    // Оголошення змінних для трьох чисел
    double num1, num2, num3;
    
    // Введення трьох чисел
    cout << "Введіть перше число: ";
    cin >> num1;
    cout << "Введіть друге число: ";
    cin >> num2;
    cout << "Введіть третє число: ";
    cin >> num3;
    
    // Обчислення середнього арифметичного
    double average = (num1 + num2 + num3) / 3.0;
    
    // Виведення результату
    cout << "Середнє арифметичне трьох чисел: " << average << endl;
    
    return 0;
}

