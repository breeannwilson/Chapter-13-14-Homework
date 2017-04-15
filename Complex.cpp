#include "Complex.h"
#include <cmath>
#include <sstream>
#include <cstdlib>

Complex::Complex() {
	realnum = 0;
	imaginarynum = 0;
}
Complex::Complex(double newrealnum) {
	realnum = newrealnum;
	imaginarynum = 0;
}
Complex::Complex(double newrealnum, double newimaginarynum) {
	realnum = newrealnum;
	imaginarynum = newimaginarynum;
}

//get functions for real and imaginary numbers
double Complex::getReal() const {
	return realnum;
}
double Complex::getImaginary() const {
	return imaginarynum;
}

//toString function
string Complex::toString() const {
	stringstream ss;
	ss << realnum;
	return ss.str();
}



//add function
Complex Complex::add(const Complex& c) const {
	double realnum = getReal() + c.getReal();
	double imaginarynum = getImaginary() + c.getImaginary();
	Complex newC(realnum, imaginarynum);
	return newC;
}

//subtract function
Complex Complex::subtract(const Complex& c) const {
	double realnum = getReal() - c.getReal();
	double imaginarynum = getImaginary() - c.getImaginary();
	Complex newC(realnum, imaginarynum);
	return newC;
}

//product function
Complex Complex::product(const Complex& c) const {
	double realnum = getReal() * c.getReal() - getImaginary() * c.getImaginary();
	double imaginarynum = getImaginary() * c.getReal() + getReal() * c.getImaginary();
	Complex newC(realnum, imaginarynum);
	return newC;
}

//quotient function
Complex Complex::quotient(const Complex& c) const {
	double realnumerator = getReal() * c.getReal() + getImaginary() * c.getImaginary();
	double realdenominator = c.getReal() * c.getReal() + c.getImaginary() * c.getImaginary();
	double realnum = realnumerator / realdenominator;
	double imaginarynumerator = getImaginary() * c.getReal() - getReal() * c.getImaginary();
	double imaginarydenominator = c.getReal() * c.getReal() + c.getImaginary() * c.getImaginary();
	double imaginarynum = imaginarynumerator / imaginarydenominator;
	Complex newC(realnum, imaginarynum);
	return newC;
}

//absolute value function
Complex Complex::abs(const Complex& c) const {
	double realnum = getReal() * getReal();
	double imaginarynum = getImaginary() * getImaginary();
	double radicand = realnum + imaginarynum;
	double abs = pow(radicand, .5);
	return abs;
}



//functions for "and equal" operators
Complex& Complex::operator+=(const Complex& c) {
	*this = add(c);
	return *this;   
}
Complex& Complex::operator-=(const Complex& c) {
	*this = subtract(c);
	return *this;
}
Complex& Complex::operator*=(const Complex& c) {
	*this = product(c);
	return *this;
}
Complex& Complex::operator/=(const Complex& c) {
	*this = quotient(c);
	return *this;
}



//functions for operators
Complex operator+(const Complex& c1, const Complex& c2) {
	Complex c = c1.add(c2);
	return c;
}

Complex operator-(const Complex& c1, const Complex& c2) {
	Complex c = c1.subtract(c2);
	return c;
}

Complex operator*(const Complex& c1, const Complex& c2) {
	Complex c = c1.product(c2);
	return c;
}

Complex operator/(const Complex& c1, const Complex& c2) {
	Complex c = c1.quotient(c2);
	return c;
}

ostream& operator<<(ostream& out, const Complex& c1) {
	if (c1.getImaginary() == 0) {
		out << c1.getReal();
	}
	else
		out << c1.getReal() + c1.getImaginary();
	return out;
}
istream& operator>>(istream& in, Complex& c1) {
	cout << "Enter the first complex number (real and then imaginary): ";
	in >> c1.getReal() >> c1.getImaginary();
	return in;
}

//define []
double& Complex::operator[](int index) {
	if (index == 0)
		return realnum;
	else if (index == 1)
		return imaginarynum;
}

//prefix
Complex& Complex::operator++() {
	realnum += imaginarynum;
	return *this;
}
Complex& Complex::operator--() {
	realnum -= imaginarynum;
	return *this;
}

//postfix
Complex Complex::operator++(int dummy) {
	Complex temp(realnum, imaginarynum);
	realnum += imaginarynum;
	return temp;
}
Complex Complex::operator--(int dummy) {
	Complex temp(realnum, imaginarynum);
	realnum -= imaginarynum;
	return temp;
}
Complex Complex::operator>>(const Complex& c1, const Complex& c2) {

}
Complex Complex::operator<<(const Complex& c1, const Complex& c2) {

}

//unary functions
Complex Complex::operator+() {
	return *this;
}
Complex Complex::operator-() {
	return *this;
}
