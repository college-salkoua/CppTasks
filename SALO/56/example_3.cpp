#include <iostream>
#include <conio.h>

int main() {
    int k, m;
    float cina;

    std::cout << "Naseleniy punkt k = " << std::endl;
    std::cin >> k;

    std::cout << "Kilkist biletiv m = " << std::endl;
    std::cin >> m;

    switch (k) {
        case 1:
            cina = 22;
            break;
        case 2:
        case 3:
        case 4:
            cina = 25;
            break;
        case 5:
        case 6:
            cina = 30;
            break;
        case 7:
        case 8:
            cina = 35;
            break;
        default:
            std::cout << "Error!" << std::endl;
            cina = 0;
    }

    std::cout << cina * m << " grn" << std::endl;

    getch();

    return 0;
}

