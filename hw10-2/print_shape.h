#pragma once
#include <iostream>
#include <string>
using namespace std;
#define PI 3.141592

class Shape {
public:
	virtual double getArea() = 0;
	virtual double getPerimeter() = 0;
	virtual string getTypeString() = 0;
};

class Circle : public Shape {
public:
	Circle();
	Circle(double r);
	double getArea();
	double getPerimeter();
	string getTypeString();
private:
	double radius;
};

class Rectangle : public Shape {
public:
	Rectangle();
	Rectangle(double w, double h);
	double getArea();
	double getPerimeter();
	string getTypeString();
private:
	double width;
	double height;
};
