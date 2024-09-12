#include <fstream>
#include <iostream>
#include <cmath>
#include <conio.h>

int main() {
    float a, b, y;

    std::ifstream file1("MyData.txt");

    if (!file1) {
        std::cerr << "Не вдалося відкрити файл MyData.txt" << std::endl;
        return 1;
    }

    file1 >> a >> b;

    y = (sqrt(a + b) + 5 * exp(0.2 * a)) / (pow(a, 2) + pow(b, 2));

    std::cout << "y = " << y << std::endl;

    file1.close();

    getch();

    std::ofstream file2("MyRez.txt");

    file2 << y;

    file2.close();

    return 0;
}

