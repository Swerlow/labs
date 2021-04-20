/*
	Author: Асмус Александр
	Group: СБС-001-O-01
	Task: 1.2
*/

#include<iostream>
#include<math.h>

using namespace std;

int main()
{
	const double g = 9.81;
	const double PI = 3.14159265;
	double L, V, a, x1, x2, x3, x4;

	cout << "This program determines the range of the flight\n";

	cout << "Enter the variable speed, V=";

	while (!(cin >> V))
	{
		cin.clear();
		while (cin.get() != '\n');
		cout << "Error! A letter is entered, repeat the input\n";
		cout << "Enter the variable speed, V=";
	}

	cout << "Enter the variable, a=";

	while (!(cin >> a))
	{
		cin.clear();
		while (cin.get() != '\n');
		cout << "Error!A letter is entered, repeat the input\n";
		cout << "Enter the variable a =";
	}


	L =(V * V * sin(2*a*PI/180)) / g;
	/*cout << "x1=" << x1 << endl;

	x2 = V * V;
	cout << "x2=" << x2 << endl;

	x3 = x2 * x1;
	cout << "x3=" << x3 << endl;

	x4 = x3 / g;
	cout << "x4=" << x4 << endl;
	*/

	cout << "L=" << L << endl;

	return 0;
}