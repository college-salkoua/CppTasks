#include <iostream>

int main() {
    int x;

    std::cout << "Vvedit chislo x: ";
    std::cin >> x;

    if ((x >= 2 && x <= 14) || (x >= 20 && x <= 25)) {
        std::cout << "Chislo x nalezhit odnomu z vidrizkiv." << std::endl;
    } else {
        std::cout << "Chislo x ne nalezhit vidrizkamu." << std::endl;
    }

    return 0;
}

