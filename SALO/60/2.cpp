#include <iostream>

// Функція для обчислення найбільшого спільного дільника (НСД)
int nsd(int m, int n) {
    while (n != 0) {
        int temp = n;
        n = m % n;
        m = temp;
    }
    return m;
}

// Функція для обчислення найменшого спільного кратного (НСК)
int nck(int a, int b) {
    return (a * b) / nsd(a, b);
}

int main() {
    int a, b, c, d;

    // Введення чотирьох чисел
    std::cout << "Введіть чотири цілі числа:\n";
    std::cin >> a >> b >> c >> d;

    // Знаходимо НСК для чотирьох чисел
    int lcm_ab = nck(a, b);
    int lcm_abc = nck(lcm_ab, c);
    int lcm_abcd = nck(lcm_abc, d);

    // Виводимо результат
    std::cout << "Найменше спільне кратне (НСК): " << lcm_abcd << std::endl;

    return 0;
}

