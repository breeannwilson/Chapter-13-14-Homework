#pragma once
#include <iostream>
#ifndef CIRCLE_H
#define CIRCLE_H

static const double PI = 3.1415926535;

class Circle {
private:
	double radius;

public:
	Circle();
	Circle(double radius);
	double getArea() const;
	double getRadius() const;
	void setRadius(double value);

};
	bool operator==(const Circle& c1, const Circle& c2);
	bool operator!=(const Circle& c1, const Circle& c2);
	bool operator<(const Circle& c1, const Circle& c2);
	bool operator<=(const Circle& c1, const Circle& c2);
	bool operator>(const Circle& c1, const Circle& c2);
	bool operator>=(const Circle& c1, const Circle& c2);


#endif CIRCLE_H