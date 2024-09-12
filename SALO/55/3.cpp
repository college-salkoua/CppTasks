#include <iostream>
#include <fstream>
#include <cmath>

int main() {
    double x1, x2;
    std::ifstream file("MyData.txt");
    if (!file) {
        std::cerr << "Не вдалося відкрити файл MyData.txt" << std::endl;
        return 1;
    }

    file >> x1 >> x2;
    file.close();

    double w1_1 = ((std::atan(x1 + 0.5) + 2 * x1) / (std::sin(x1) + x1 + std::pow(5, x1))) + 2 * x1;

    double w2_1 = 1 + std::pow(x1, 3) + (std::log10(x1 + 3.4) + 2) / (std::sin(x1) + std::pow(1.2, (x1 + 2)));

    double w1_2 = ((std::atan(x2 + 0.5) + 2 * x2) / (std::sin(x2) + x2 + std::pow(5, x2))) + 2 * x2;

    double w2_2 = 1 + std::pow(x2, 3) + (std::log10(x2 + 3.4) + 2) / (std::sin(x2) + std::pow(1.2, (x2 + 2)));

    std::cout << "Для x1 = " << x1 << ":\n";
    std::cout << "w1 = " << w1_1 << std::endl;
    std::cout << "w2 = " << w2_1 << std::endl;

    std::cout << "Для x2 = " << x2 << ":\n";
    std::cout << "w1 = " << w1_2 << std::endl;
    std::cout << "w2 = " << w2_2 << std::endl;

    return 0;
}

