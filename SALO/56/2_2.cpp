#include <iostream>
#include <cmath>

int main() {
    double x, y, R;

    std::cout << "Vvedit koordinati tochky (x y): ";
    std::cin >> x >> y;

    std::cout << "Vvedit radius krugu R: ";
    std::cin >> R;

    double distance_squared = x * x + y * y;
    double radius_squared = R * R;

    if (distance_squared < radius_squared) {
        std::cout << "Tochka nalezhit krugu." << std::endl;
    } else {
        std::cout << "Tochka ne nalezhit krugu." << std::endl;
    }

    return 0;
}

