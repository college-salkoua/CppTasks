#include <iostream>

int main() {
    int a, b;

    std::cout << "Vvedit perше chislo: ";
    std::cin >> a;

    std::cout << "Vvedit drugе chislo: ";
    std::cin >> b;

    if (a > b) {
        std::cout << "Bil'she chislo: " << a << std::endl;
    } else if (b > a) {
        std::cout << "Bil'she chislo: " << b << std::endl;
    } else {
        std::cout << "Chisla rivni." << std::endl;
    }

    return 0;
}

