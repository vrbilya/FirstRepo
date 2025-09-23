#include <iostream>
#include <cmath>
using namespace std;

int main() {
	int a, b;
	float c;
	float perimiter;
	cin >> a;
	cin >> b;
	if (a > 0 and b > 0) {
		c = pow(a, 2) + pow(b, 2);
		c = pow(c, 0.5);
		perimiter = a + b + c;
		cout << "гипотенуза: " << c << " " << "периметр: " << perimiter << endl;
	}
	else {
		cout << "Стороны должны быть больше нуля" << endl;
	}
	cout << "int: 32 бита, макс.знач(2147483647), мин.знач(-2147483647 - 1)" << endl;
	cout << "float: 32 бита, макс.знач(3,4e+38), мин.знач(-3,4e-38)";
}