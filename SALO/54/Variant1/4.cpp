#include <iostream>

using namespace std;

int main() {
    int number;
    
    // Введення чотирьохцифрового числа
    cout << "Введіть чотирьохцифрове число: ";
    cin >> number;
    
    // Перевірка, чи введене число є чотирьохцифровим
    if (number < 1000 || number > 9999) {
        cout << "Число повинно бути чотирьохцифровим!" << endl;
        return 1;
    }
    
    // Отримання цифр числа
    int firstDigit = number / 1000; // Перша цифра
    int thirdDigit = (number / 10) % 10; // Третя цифра

    // Обчислення суми першої та третьої цифр
    int sum = firstDigit + thirdDigit;
    
    // Виведення результату
    cout << "Сума першої та третьої цифр числа: " << sum << endl;
    
    return 0;
}

