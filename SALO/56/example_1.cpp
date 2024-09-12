#include <iostream>
#include <conio.h>
#include <cmath>

int main() {
    float r1, r2, s;

    std::cout << "Vvedit radius kilcia: " << std::endl;
    std::cin >> r1;

    std::cout << "Vvedit radius otvoru: " << std::endl;
    std::cin >> r2;

    if (r1 > r2) {
        s = M_PI * (r1 * r1 - r2 * r2);
        std::cout << "s = " << s << std::endl;
    } else {
        std::cout << "no" << std::endl;
    }

    getch();

    return 0;
}

