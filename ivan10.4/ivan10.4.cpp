﻿// ivan 10.4.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//4. Дано вещественное число A и целое число N (> 0). Используя один цикл, найти сумму 1 + A + A2 + A3 + . . . + AN

#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	double s, a, p;
	int n;
	cout << "введите число N (N>0)" << endl;
	cin >> n;
	cout << "введите число a " << endl;
	cin >> a;
	s = 1;
	p = 1;
	for (int i = 1; i <= n; i++)
	{
		p = pow(a, i);
		s = s + p;

	}

	cout << " сумма =  " << s << endl;
	return 0;
}