#include "shapes.h"
#include <iostream>
using namespace std;

Shape::Shape(double w, double h) {
	width = w;
	height = h;
}

Triangle::Triangle(double w, double h) : Shape(w, h) {

}

double Triangle::getArea() {
	double dap = width * height / 2;
	return dap;
}

Rectangle::Rectangle(double w, double h) : Shape(w, h) {

}

double Rectangle::getArea() {
	double dap = width * height;
	return dap;
}
