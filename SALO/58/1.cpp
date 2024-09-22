#include <iostream>

bool isPrime(int num) {
    if (num < 2) return false;
    for (int i = 2; i * i <= num; ++i) {
        if (num % i == 0) return false;
    }
    return true;
}

int main() {
    int a, b;

    std::cout << "Введіть два цілі числа (a і b, не більше 32000): ";
    std::cin >> a >> b;

    // Перевірка на коректність вводу
    if (a > b || a < 0 || b > 32000) {
        std::cout << "Некоректний ввід. Переконайтесь, що a <= b і числа не перевищують 32000." << std::endl;
        return 1;
    }

    std::cout << "Прості числа в діапазоні від " << a << " до " << b << ":\n";
    for (int i = a; i <= b; ++i) {
        if (isPrime(i)) {
            std::cout << i << " ";
        }
    }
    std::cout << std::endl;

    return 0;
}

