#include <iostream>
#include <string>
#include "Complex.h"

using namespace std;

void main() {
	//first real
	double a;
	//first imaginary
	double b;
	//second real
	double c;
	//second imaginary
	double d;

	cout << "Please enter the first complex number (real number then imaginary number): " << endl;
	cin >> a >> b;
	cout << "Please enter the second complex number (real number then imaginary number): " << endl;
	cin >> c >> d;

	Complex c1(a, b);
	Complex c2(c, d);
	Complex c3;

	//addition
	cout << "c1 + c2 = " << (c1 + c2) << "i" << endl;
	//addition and
	cout << "c3 += c1" << (c3 += c1) << "i" << endl;

	//subtraction 
	cout << "c1 - c2 = " << (c1 - c2) << "i" << endl;
	//subtraction and
	cout << "c3 -= c2 = " << (c3 -= c2) << "i" << endl;

	//may test the other functions

	system("pause");
}
