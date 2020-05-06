
#include <iostream>
#include "../../StaticLibForSTP/StaticLibForSTP/A_Sets.h"
using namespace std;
using namespace STP;
//atoi(c)

int main()
{
	setlocale(LC_ALL, "ru");

	cout << " /////////////////// Стек на основе массива" << endl;
	ArrayStack AS;
	int check1 = 0;
	char ch = 0;
	while (ch != 'e')
	{
		double t;
		cout << "Введите целое число: ";
		cin >> t;
		AS.Push(t);
		cout << "Если продолжаем дальше, то нажмите любую кнопку, а если всё, то <e>: ";
		cin >> ch;
	}
	AS.End();
	ch = 0;

	cout << " /////////////////// Стек на основе связанного списка" << endl;
	LinkedStack LS;
	int check2 = 0;
	while (ch != 'e')
	{
		double t;
		cout << "Введите целое число: ";
		cin >> t;
		LS.Push(t);
		cout << "Если продолжаем дальше, то нажмите любую кнопку, а если всё, то <e>: ";
		cin >> ch;
	}
	LS.End();
	ch = 0;

	cout << " /////////////////// Очередь на основе массива" << endl;
	ArrayQueue AQ;
	int check3 = 0;
	while (ch != 'e')
	{
		double t;
		cout << "Введите целое число: ";
		cin >> t;
		AQ.Enqueue(t);
		cout << "Если продолжаем дальше, то нажмите любую кнопку, а если всё, то <e>: ";
		cin >> ch;
	}
	AQ.End();
	ch = 0;

	cout << " /////////////////// Очередь на основе связанного списка" << endl;
	LinkedQueue LQ;
	int check4 = 0;
	while (ch != 'e')
	{
		double t;
		cout << "Введите целое число: ";
		cin >> t;
		LQ.Enqueue(t);
		cout << "Если продолжаем дальше, то нажмите любую кнопку, а если всё, то <e>: ";
		cin >> ch;
	}
	LQ.End();
	ch = 0;

	cout << " /////////////////// Очередь с приоритетом" << endl;
	PriorityQueue PQ;
	int check5 = 0;
	while (ch != 'e')
	{
		double t;
		cout << "Введите целое число: ";
		cin >> t;
		PQ.Enqueue(t);
		cout << "Если продолжаем дальше, то нажмите любую кнопку, а если всё, то <e>: ";
		cin >> ch;
	}
	PQ.End();

	return 0;


}