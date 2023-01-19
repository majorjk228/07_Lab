// Лабораторная работа №7, Вариант 3 (2 семестр).
//

#include <iostream>
#include "Vector.h"
#include "Time.h"
#include <windows.h>    // Библиотека для русской локализации
using namespace std;

void main()
{
	setlocale(LC_ALL, "Russian");

	//инициализация, ввод и вывод значений вектора
	Vector<int>A(5, 0);
	cout << "Введите значения вектора: ";
	cin >> A;
	cout << A << endl;
	//инициализация и вывод значений вектора
	Vector <int>B(10, 1);
	cout << B << endl;
	//операция присваивания
	B = A;
	cout << B << endl;
	//доступ по индексу
	cout << A[2] << endl;
	//сложение векторов
	cout << A[2] + A[2] << endl;
	//получение длины вектора
	cout << "size=" << A() << endl;
	//операция сложения с константой
	B = A + 10;
	cout << B << endl;

	Time t;
	cin >> t;
	cout << t;

	Time k;
	cout << " Введите новый объект: \n";
	cin >> k;
	Time p;
	p = t + k;
	cout << "Сложение двух времен: " << p;
}

