#pragma once

class Shape {
public:
	Shape(double w, double h);
	virtual double getArea() = 0;
protected:
	double width, height;
};

class Triangle : public Shape {
public:
	Triangle(double w, double h);
	double getArea();
};

class Rectangle : public Shape {
public:
	Rectangle(double w, double h);
	double getArea();
};
