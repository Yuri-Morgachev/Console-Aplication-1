// ConsoleApplication1.cpp : Defines the entry point for the console application.
//
#include <iostream>
#include "windows.h"
#include "iomanip"

using namespace std;

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	//setlocale (LC_ALL,"Russian");

	int A, B, C;
	cout << "������ A - " << endl;
	cin >> A;
	cout << "������ B - " << endl;
	cin >> B;
	cout << "������ C - " << endl;
	cin >> C;
	if (A > B&&B > C)
	{
		cout << "�������";
	}
	else if (A < B&&B < C)
	{
		cout << "�� �������";
	}
	else if
	{
		cout << "\n�� ���� - ";
	}
	system("pause");
	return 0;