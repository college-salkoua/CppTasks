#include <iostream>

int main() {
    int a;

    std::cout << "Vvedit chislo a: ";
    std::cin >> a;

    if (a % 3 == 0 && a % 5 == 0) {
        std::cout << "Chislo a dilitsya na 3 i na 5." << std::endl;
    } else {
        std::cout << "Chislo a ne dilitsya na 3 i na 5." << std::endl;
    }

    return 0;
}

