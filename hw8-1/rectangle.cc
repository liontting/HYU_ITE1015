#include "rectangle.h"

Rectangle::Rectangle() {

}

Rectangle::Rectangle(int width, int height) {
	_width = width;
	_height = height;
}

int Rectangle::getArea() {
	return _width * _height;
}

int Rectangle::getPerimeter() {
	return 2 * (_width + _height);
}

Square::Square() {

}

Square::Square(int width) : Rectangle(width, width) {

}

void Square::print() {
	cout << _width << "X" << _height << " Square\n";
	cout << "Area: " << getArea() << "\n";
	cout << "Perimeter: " << getPerimeter() << "\n";
}

NonSquare::NonSquare () {

}

NonSquare::NonSquare (int width, int height) : Rectangle(width, height) {

}

void NonSquare::print() {
	cout << _width << "X" << _height << " NonSquare\n";
	cout << "Area: " << getArea() << "\n";
	cout << "Perimeter: " << getPerimeter() << "\n";
}
