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
	cout << "¬вед≥ть A - " << endl;
	cin >> A;
	cout << "¬вед≥ть B - " << endl;
	cin >> B;
	cout << "¬вед≥ть C - " << endl;
	cin >> C;
	if (A > B&&B > C)
	{
		cout << "≥стинно";
	}
	else if (A < B&&B < C)
	{
		cout << "не ≥стинно";
	}
	else if
	{
		cout << "\nЌе ≥снуЇ - ";
	}
	system("pause");
	return 0;