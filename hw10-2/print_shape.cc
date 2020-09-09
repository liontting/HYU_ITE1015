#include "print_shape.h"
#include <iostream>
#include <string>
using namespace std;
#define PI 3.141592

Circle::Circle() {

}

Circle::Circle(double r) {
	radius = r;
}

double Circle::getArea() {
	double area = PI * radius * radius;
	return area;
}

double Circle::getPerimeter() {
	double perimeter = 2 * PI * radius;
	return perimeter;
}

string Circle::getTypeString() {
	string s = "Circle";
	return s;
}

Rectangle::Rectangle() {

}

Rectangle::Rectangle(double w, double h) {
	width = w;
	height = h;
}

double Rectangle::getArea() {
	double area = width * height;
	return area;
}

double Rectangle::getPerimeter() {
	double perimeter = 2 * (width + height);
	return perimeter;
}

string Rectangle::getTypeString() {
	string s = "Rectangle";
	return s;
}
