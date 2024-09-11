#include <iostream>
#include <cmath>

using namespace std;

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
    double a, b, c;
    
    // Введення довжин сторін трикутника
    cout << "Enter the length of side a: ";
    cin >> a;
    cout << "Enter the length of side b: ";
    cin >> b;
    cout << "Enter the length of side c: ";
    cin >> c;

    // Перевірка на правильність введених сторін
    if (a <= 0 || b <= 0 || c <= 0 || (a + b <= c) || (a + c <= b) || (b + c <= a)) {
        cout << "Invalid triangle sides." << endl;
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

