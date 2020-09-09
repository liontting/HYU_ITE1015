#pragma once
#include <iostream>
using namespace std;

class Rectangle {
public:
	Rectangle();
	Rectangle(int width, int height);
	int getArea();
	int getPerimeter();
protected:
	int _width;
	int _height;
};

class Square: public Rectangle {
public:
	Square();
	Square(int width);
	void print();
};

class NonSquare: public Rectangle {
public:
	NonSquare();
	NonSquare (int width, int height);
	void print();
};
