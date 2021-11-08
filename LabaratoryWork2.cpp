#include <math.h>
#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
	double c, d, z, x, f, res;
	int variant;
	cout << "Please, write c = ";
	cin >> c;
	cout << "Please, write d = ";
	cin >> d;
	cout << "Please, write z = ";
	cin >> z;
	if (cin.get() != '\n') {
		cout << "\nError, please write numbers!";
		return 0;
	}
	if (z < 0) {
		x = pow(z, 2) - z;
		cout << "z < 0, so x = z^2 - z" << endl;
	}
	else {
		x = pow(z, 3);
		cout << "z >= 0, so x = z^3" << endl;
	}
	cout << "Please, choose variant of f(x):\n" << "1. f(x) = 2x\n" << "2. f(x) = x^2\n" << "3. f(x) = x/3" << endl;
	cin >> variant;
	switch (variant) {
	case 1: f = 2 * x;
		cout << "1 variant selected, f(x) = 2x" << endl;
		break;
	case 2: f = pow(x, 2);
		cout << "2 variant selected, f(x) = x^2" << endl;
		break;
	case 3: f = x / 3;
		cout << "3 variant selected, f(x) = x/3" << endl;
		break;
	default: cout << "This variant doesn't exist! Please, try again!" << endl;
		return 0;
	}
	res = pow(sin(c * f + pow(d, 2) + pow(x, 2)), 3);
	cout << "\nResult = " << res << '\n';
	_getch();
}