#include <iostream>
#include <fstream>
#include <cmath>

using namespace std;

// Функція для обчислення відстані між двома точками
double distance(double x1, double y1, double x2, double y2) {
    return sqrt((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1));
}

// Функція для обчислення медіани
double calculateMedian(double a, double b, double c) {
    return sqrt((2 * b * b + 2 * c * c - a * a) / 4.0);
}

// Функція для обчислення площі трикутника за формулою Герона
double calculateArea(double a, double b, double c) {
    double s = (a + b + c) / 2.0;
    return sqrt(s * (s - a) * (s - b) * (s - c));
}

// Функція для обчислення радіусу описаного кола
double calculateCircumradius(double a, double b, double c) {
    double area = calculateArea(a, b, c);
    return (a * b * c) / (4.0 * area);
}

int main() {
    ifstream infile("triangle_coords.txt");
    if (!infile) {
        cerr << "Error opening file!" << endl;
        return 1;
    }

    double x1, y1, x2, y2, x3, y3;

    // Зчитування координат з файлу
    infile >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;
    infile.close();

    // Обчислення довжин сторін трикутника
    double a = distance(x2, y2, x3, y3);
    double b = distance(x1, y1, x3, y3);
    double c = distance(x1, y1, x2, y2);

    // Перевірка на правильність введених сторін
    if (a <= 0 || b <= 0 || c <= 0 || (a + b <= c) || (a + c <= b) || (b + c <= a)) {
        cerr << "Invalid triangle sides." << endl;
        return 1;
    }

    // Обчислення медіан
    double median_a = calculateMedian(a, b, c);
    double median_b = calculateMedian(b, a, c);
    double median_c = calculateMedian(c, a, b);

    // Обчислення радіусу описаного кола
    double circumradius = calculateCircumradius(a, b, c);

    // Виведення результатів
    cout << "Median corresponding to side a: " << median_a << endl;
    cout << "Median corresponding to side b: " << median_b << endl;
    cout << "Median corresponding to side c: " << median_c << endl;
    cout << "Circumradius of the triangle: " << circumradius << endl;

    return 0;
}

