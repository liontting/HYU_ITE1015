#pragma once

class Shape {
public:
	Shape();
	Shape(int x, int y);

	double GetArea();
	double GetPerimeter();
	void Draw(int canvas_width, int canvas_height);
protected:
	int X, Y;
	int c_width, c_height;
};

class Rectangle : public Shape {
public:
	Rectangle(int x, int y, int h, int w, char b);
	double GetArea();
	double GetPerimeter();
	void Drawthat();
protected:
	int height, width;
	char brush;
};

class Square : public Shape {
public:
	Square(int x, int y, int h, char b);
	double GetArea();
	double GetPerimeter();
	void Drawthat();
protected:
	int width;
	char brush;
};

class Diamond : public Shape {
public:
	Diamond(int x, int y, int h, char b);
	double GetArea();
	double GetPerimeter();
	void Drawthat();
protected:
	int distance;
	char brush;
};
