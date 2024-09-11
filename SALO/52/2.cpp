#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	int x;
	int y;
	int z;
	int aanswer;
	int banswer;
	cout << "Введіть x\n";
	cin >> x;
	cout << "Введіть y\n";
	cin >> y;
	cout << "Ведіть z\n";
	cin >> z;
	aanswer = 2 * cos(x - M_PI / 6) / (1 / 2) + pow(sin(y), 2);
	banswer = 1 + (pow(z, 2) / (3 + pow(z, 2) / 5));
	cout << aanswer;
	cout << banswer;
	cin.get();
	return 0;
}
