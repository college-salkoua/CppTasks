#include <fstream>
#include <iostream>
#include <conio.h>

int main() {
    int a, b, s;

    std::ifstream file1("MyData.txt");

    if (!file1) {
        std::cerr << "Не вдалося відкрити файл MyData.txt" << std::endl;
        return 1;
    }

    file1 >> a >> b;
    s = a + b;

    std::cout << a << " + " << b << " = " << s << std::endl;

    file1.close();

    getch();

    return 0;
}

