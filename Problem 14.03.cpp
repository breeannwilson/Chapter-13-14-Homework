#include <iostream>
using namespace std;
#include "Circle.h"

void main() {

	int a, b;
	//ask the user what radii
	cout << "What is the radius of circle one?" << endl;
	cin >> a;
	cout << "What is the radius of circle two?" << endl;
	cin >> b;

	//create the objects of class Circle with radii a and b
	Circle c1(a);
	Circle c2(b);

	//display areas
	cout << "The area of circle one is " << c1.getArea() << " units." << endl;
	cout << "The area of circle two is " << c2.getArea() << " units." << endl;

	//run through the operands to classify the two circles
	cout << "Is circle one equal to circle two?: " << ((c1 == c2) ? "true":"false") << endl;
	cout << "Is circle one not equal to circle two?: " << ((c1 != c2) ? "true" : "false") << endl;
	cout << "Is circle one less than or equal to circle two?: " << ((c1 <= c2) ? "true" : "false") << endl;
	cout << "Is circle one less than circle two?: " << ((c1 < c2) ? "true" : "false") << endl;
	cout << "Is circle one greater than or equal to circle two?: " << ((c1 >= c2) ? "true" : "false") << endl;
	cout << "Is circle one greater than circle two?: " << ((c1 > c2) ? "true" : "false") << endl;

	system("pause");
}