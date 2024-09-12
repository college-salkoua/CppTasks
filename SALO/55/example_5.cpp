#include <iostream>
#include <fstream>
#include <conio.h>

int main() {
    char slovo1[100], slovo2[100];

    std::ifstream file1("MyText.txt");

    if (!file1) {
        std::cerr << "Не вдалося відкрити файл MyText.txt" << std::endl;
        return 1;
    }

    file1 >> slovo1 >> slovo2;

    std::cout << slovo1 << "\n" << slovo2 << std::endl;

    file1.close();

    getch();

    return 0;
}

