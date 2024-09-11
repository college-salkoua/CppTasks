#include <iostream>
using namespace std;

int main()
{
	int a;
	int b;
	float c;
	cout << "Введіть ціле число\n";
	cin >> a;
	cout << "Введіть дійсне число\n";
	cin >> c;
	b = c * a;
	cout << "a= " << a << "\n";
	cout << "c= " << c << "\n";
	cout << "b= "; cout << b << "\n";
	cin.get();
	return 0;
}
