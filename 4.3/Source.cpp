// Lab_03_2.cpp
// < Скіра Ярема >
// Лабораторна робота № 3.2
// Розгалуження, задане формулою: функція з параметрами.
// Варіант 17
#include <iostream>
#include <iomanip>

using namespace std;

void main()
{

	double x, x_end, x_delta, F, a, b, c;

	cout.setf(ios::left);
	cout << setw(10) << "x start" << "="; cin >> x;

	cout << setw(10) << "x end" << "="; cin >> x_end;

	cout << setw(10) << "x delta" << "="; cin >> x_delta;

	cout << setw(10) << "a" << "="; cin >> a;
	cout << setw(10) << "b" << "="; cin >> b;
	cout << setw(10) << "c" << "="; cin >> c;
	cout << "---------------------------"<< endl;//32 символи
	cout << "|" << setw(14) << "x" << " |"
		<< setw(14) << "y" << " |" << endl;
	cout << "---------------------------" << endl;
	
	cout << fixed;
	for(;x<= x_end; x+= x_delta)
	{
     //програма
	if (x + 10 < 0 && b != 0)
		F = (a * (x * x)) - (c * x) + b;

	if (x + 10 > 0 && b == 0)
		F = (x - a) / (x - c);

	if (!(x + 10 < 0 && b != 0) && !(x + 10 > 0 && b == 0))

		F = -x / (a - c);
	cout << "|" << setprecision(2) << setw(14) << x << "|" << setw(14) << setprecision(3) << F << "|" << endl;
	cout << "---------------------------" << endl;
	
	}

}


	

	
	
