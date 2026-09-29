// Lab_03_1.cpp
// < Торбик Ярослав >
// Лабораторна робота № 3.1
// Розгалуження, задане формулою: функція однієї змінної.
// Варіант 28
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	double x; // вхідний параметр
	double y; // результат обчислення виразу
	double A; // проміжний результат - функціонально стала частина виразу
	double B; // проміжний результат - функціонально змінна частина виразу
	cout << "x = "; cin >> x;

	A = (x * x)/(2.1+sin(abs(x)));
	// спосіб 1: розгалуження в скороченій формі
	if (x <= -5)
		B = 1.0/tan(exp(x));
	if (-5 < x && x < 0)
		B = 2-(x * x * x)/(abs(x)+1.0);
	if (x >= 0)
		B = log(sqrt(abs(x)-(x*x)/2.0));
	y = A + B;
	cout << endl;
	cout << "1) y = " << y << endl;
	// спосіб 2: розгалуження в повній формі
	if (x <= -5)
		B = 1.0 / tan(exp(x));
	else
		if (x < 0)
			B = 2 - (x * x * x) / (abs(x) + 1.0);
		else
			B = log(sqrt(abs(x) - (x * x) / 2.0));
	y = A + B;
	cout << "2) y = " << y << endl;
	cin.get();
	return 0;
}
