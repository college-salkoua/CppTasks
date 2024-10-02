#include <iostream>
using namespace std;

// Перевантажені функції для обчислення суми
int sum(int a, int b, int c, int d, int e) {
    return a + b + c + d + e;
}

double sum(double a, double b, double c, double d, double e) {
    return a + b + c + d + e;
}

int main() {
    // Введення даних
    cout << "Введіть п'ять цілочисельних значень:\n";
    int a, b, c, d, e;
    cin >> a >> b >> c >> d >> e;
    cout << "Сума (цілі): " << sum(a, b, c, d, e) << endl;

    cout << "Введіть п'ять дійсних значень:\n";
    double x, y, z, w, v;
    cin >> x >> y >> z >> w >> v;
    cout << "Сума (дійсні): " << sum(x, y, z, w, v) << endl;

    return 0;
}

