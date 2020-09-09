#include "draw_shape.h"
#include <iostream>
#include <cmath>
using namespace std;

Shape::Shape() {

}

Shape::Shape(int x, int y) {
	X = x;
	Y = y;
}

double Shape::GetArea() {

}

double Shape::GetPerimeter() {

}

void Shape::Draw(int canvas_width, int canvas_height) {
	c_width = canvas_width;
	c_height = canvas_height;
}

Rectangle::Rectangle(int x, int y, int h, int w, char b) : Shape(x, y) {
	height = h;
	width = w;
	brush = b;
}

double Rectangle::GetArea() {
	return height * width;
}

double Rectangle::GetPerimeter() {
	return 2 * (height + width);
}

void Rectangle::Drawthat() {
	cout << " ";
	for(int i = 0; i < c_width; i++)
		cout << i;
	cout << "\n";
	for(int i = 0; i < c_height; i++) {
		cout << i;
		for(int j = 0; j < c_width; j++) {
			if(i >= Y && i < Y + height && j >= X && j < X + width)
				cout << brush;
			else
				cout << ".";
		}
		cout << "\n";
	}
}

Square::Square(int x, int y, int w, char b) : Shape(x, y) {
	width = w;
	brush = b;
}

double Square::GetArea() {
	return width * width;
}

double Square::GetPerimeter() {
	return 4 * width;
}

void Square::Drawthat() {
	cout << " ";
	for(int i = 0; i < c_width; i++)
		cout << i;
	cout << "\n";
	for(int i = 0; i < c_height; i++) {
		cout << i;
		for(int j = 0; j < c_width; j++) {
			if(i >= Y && i < Y + width && j >= X && j < X + width)
				cout << brush;
			else
				cout << ".";
		}
		cout << "\n";
	}
}

Diamond::Diamond(int x, int y, int d, char b) : Shape(x, y) {
	distance = d;
	brush = b;
}

double Diamond::GetArea() {
	return 2 * distance * distance;
}

double Diamond::GetPerimeter() {
	return 4 * sqrt(2) * distance;
}

void Diamond::Drawthat() {
	int v = 0;
	int bang = 0;
	int jeo = 0;
	cout << " ";
	for(int i = 0; i < c_width; i++)
		cout << i;
	cout << "\n";
	for(int i = 0; i < c_height; i++) {
		cout << i;
		for(int j = 0; j < c_width; j++) {
			if(i >= Y && i <= Y + 2 * distance) {
				if(j >= X - v && j <= X + v)
					cout << brush;
				else
					cout << ".";
				jeo = 1;
			}
			else {
				cout << ".";
				jeo = 0;
			}
		}
		if(bang == 0 && v < distance && jeo == 1)
			v++;
		else if(bang == 0 && v == distance && jeo == 1) {
			bang = 1;
			v--;
		}
		else if(bang == 1 && jeo == 1)
			v--;
		cout << "\n";
	}
}
