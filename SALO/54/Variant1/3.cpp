#include <iostream>
#include <cmath>  // Для математичних функцій

using namespace std;

// Функція для конвертації градусів у радіани
double degreesToRadians(double degrees) {
    return degrees * M_PI / 180.0;
}

int main() {
    // Введення кута в градусах
    double angleDegrees;
    cout << "Введіть кут у градусах: ";
    cin >> angleDegrees;

    // Конвертація кута у радіани
    double angleRadians = degreesToRadians(angleDegrees);

    // Обчислення синуса, косинуса і тангенса
    double sine = sin(angleRadians);
    double cosine = cos(angleRadians);
    double tangent = tan(angleRadians);

    // Виведення результатів
    cout << "Синус кута " << angleDegrees << "°: " << sine << endl;
    cout << "Косинус кута " << angleDegrees << "°: " << cosine << endl;
    cout << "Тангенс кута " << angleDegrees << "°: " << tangent << endl;

    return 0;
}

