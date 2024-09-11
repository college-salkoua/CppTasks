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
	aanswer = (2 * sqrt(x + y) + 5) / (3 * x  + 1);
	banswer = (1 + cos(y -2)) / (pow(x, 4) / 2 + pow(sin(z), 2));
	cout << aanswer;
	cout << banswer;
	cin.get();
	return 0;
}
