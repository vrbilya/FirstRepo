#include <iostream>
#include <cmath>
using namespace std;

int main() {
	//Создание переменных
	int a, b;
	float c;
	float perimiter;
	//Ввод переменных
	cin >> a;
	cin >> b;
	c = pow(a, 2) + pow(b, 2);
	c = pow(c, 0.5);
	perimiter = a + b + c;
	cout << "гипотенуза(float) = " << c << ";  " << "периметр(float) = " << perimiter << endl;
	cout << "int равен: " << sizeof(int) * 8 << " бита; " << "мин.знач: " << numeric_limits<int>::min() << " макс.знач: " << numeric_limits<int>::max() << endl;
	cout << "float равен: " << sizeof(float) * 8 << " бита " << "мин.знач: " << numeric_limits<float>::min() << " макс.знач: " << numeric_limits<float>::max() << endl;
	/*Я выбрал тип int для катетов так как по условию задачи катеты даются в целочисленном формате, а тип данных float я выбрал
	для гипотенузы так как она может быть не целая и из за этого для периметра я выбрал тоже тип float*/
}