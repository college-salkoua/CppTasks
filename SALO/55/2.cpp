#include <iostream>
#include <fstream>
#include <cmath>

// Функція для обчислення відстані між двома точками
double distance(double x1, double y1, double x2, double y2) {
    return std::sqrt((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1));
}

// Функція для обчислення площі трикутника за формулою Герона
double area(double a, double b, double c) {
    double s = (a + b + c) / 2;
    return std::sqrt(s * (s - a) * (s - b) * (s - c));
}

int main() {
    double x1, y1, x2, y2, x3, y3;

    // Відкриття файлу для читання
    std::ifstream file("dani.txt");
    if (!file) {
        std::cerr << "Не вдалося відкрити файл dani.txt" << std::endl;
        return 1;
    }

    // Читання координат з файлу
    file >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;
    file.close();

    // Обчислення сторін трикутника
    double a = distance(x1, y1, x2, y2);
    double b = distance(x2, y2, x3, y3);
    double c = distance(x3, y3, x1, y1);

    // Обчислення периметра
    double perimeter = a + b + c;

    // Обчислення площі
    double tri_area = area(a, b, c);

    // Виведення результатів
    std::cout << "Периметр трикутника: " << perimeter << std::endl;
    std::cout << "Площа трикутника: " << tri_area << std::endl;

    return 0;
}

