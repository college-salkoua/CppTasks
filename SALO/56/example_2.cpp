#include <iostream>
#include <conio.h>

int main() {
    int a;

    std::cout << "Vvedit cile chislo: " << std::endl;
    std::cin >> a;

    if (a % 2 == 0) {
        std::cout << "Parne" << std::endl;
    } else {
        std::cout << "Neparne" << std::endl;
    }

    getch();

    return 0;
}

