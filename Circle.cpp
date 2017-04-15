#include <iostream>
#include "Circle.h"
using namespace std;

//default circle with radius one
Circle::Circle() {
	radius = 1;
}

Circle::Circle(double newradius) {
	radius = newradius;
}

//get area function
double Circle::getArea() const {
	return radius * radius * PI;
}

//get radius function
double Circle::getRadius() const {
	return radius;
}

//set radius function
void Circle::setRadius(double newvalue) {

}

//
bool operator==(const Circle& c1, const Circle& c2) {
	if (c1.getRadius() != c2.getRadius())
		return false;
}

bool operator!=(const Circle& c1, const Circle& c2) {
	if (c1.getRadius() == c2.getRadius())
		return false;
}

bool operator<(const Circle& c1, const Circle& c2) {
	if (c1.getRadius() >= c2.getRadius())
		return false;
}

bool operator<=(const Circle& c1, const Circle& c2) {
	if (c1.getRadius() > c2.getRadius())
		return false;
}

bool operator>(const Circle& c1, const Circle& c2) {
	if (c1.getRadius() <= c2.getRadius())
		return false;
}

bool operator>=(const Circle& c1, const Circle& c2) {
	if (c1.getRadius() < c2.getRadius())
		return false;
}