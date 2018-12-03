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
	cout << "Ââåä³òü A - " << endl;
	cin >> A;
	cout << "Ââåä³òü B - " << endl;
	cin >> B;
	cout << "Ââåä³òü C - " << endl;
	cin >> C;
	if (A > B&&B > C)
	{
		cout << "³ñòèííî";
	}
	else if (A < B&&B < C)
	{
		cout << "íå ³ñòèííî";
	}
	else if
	{
		cout << "\nÍå ³ñíóº - ";
	}
	system("pause");
	
	
	return 0;
