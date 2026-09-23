//Lab_02.cpp
//Єфіменко Софія Володимирівна
//Лабораторна робота №2
//Варіант 8
#include <iostream>
#include <cmath>
#include <Windows.h>
using namespace std;
int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	double x, y;
	cout << "Введіть x: ";
	cin >> x;
	cout << "Введіть y: ";
	cin >> y;
	//Обчислення виразів
	double z1 = pow(cos(x), 4) + pow(sin(y), 2) + 0.25 * pow(sin(2 * x), 2) - 1;
	double z2 = sin(y + x) * sin(y - x);
	//Виведення результатів
	cout << endl;
		cout << " z1 = " << z1 << endl;
		cout << " z2 = " << z2 << endl;
		//Щоб вікно у консолі не закривалося
		cin.get();
			return 0;
}