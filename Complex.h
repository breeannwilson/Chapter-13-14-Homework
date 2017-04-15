#pragma once
#include <string>
#include <iostream>

using namespace std;
#ifndef COMPLEX_H
#define COMPLEX_H

class Complex {
private:
	double realnum;
	double imaginarynum;

public:
	Complex();
	Complex(double realnum);
	Complex(double realnum, double imaginarynum);

	double getReal() const;
	double getImaginary() const;

	string toString() const;

	Complex add(const Complex& c) const;
	Complex subtract(const Complex& c) const;
	Complex product(const Complex& c) const;
	Complex quotient(const Complex& c) const;
	Complex abs(const Complex& c) const;

	//overload inside the class of the "and equal" operators
	Complex& operator+=(const Complex& c);
	Complex& operator-=(const Complex& c);
	Complex& operator*=(const Complex& c);
	Complex& operator/=(const Complex& c);

	double& operator[](int index);

	//define function operators for prefix ++ and --
	Complex& operator++();
	Complex& operator--();
	//define function operators for postfix ++ and -- and >> and <<
	Complex operator++(int dummy);
	Complex operator--(int dummy);
	Complex operator<<(const Complex& c1, const Complex& c2);
	Complex operator<<(const Complex& c1, const Complex& c2);

	//define functions for unary + and -
	Complex operator+();
	Complex operator-();

	//define << >> operators
	friend ostream& operator<<(ostream& , const Complex&);
	friend istream& operator>>(istream& , Complex&);
};

//overload outside the class of the operators
Complex operator+(const Complex& c1, const Complex& c2);
Complex operator-(const Complex& c1, const Complex& c2);
Complex operator*(const Complex& c1, const Complex& c2);
Complex operator/(const Complex& c1, const Complex& c2);
Complex operator<<(const Complex& c1, const Complex& c2);
Complex operator>>(const Complex& c1, const Complex& c2);



#endif 
