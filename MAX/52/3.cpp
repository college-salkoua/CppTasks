#include <iostream>

int main() {
    char character;

    std::cout << "Введіть символ: ";

    std::cin >> character;

    std::cout << "Десятковий ASCII-код символу '" << character << "' дорівнює " << static_cast<int>(character) << std::endl;
    return 0;
}

