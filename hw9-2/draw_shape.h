#pragma once
#include <iostream>
#include <vector>
using namespace std;

class Canvas {
public:
	Canvas(int row, int col);
	~Canvas();
	void Resize(int w, int h);
	bool DrawPixel(int x, int y, char brush);
	void Print();
	void Clear();
protected:
	int _row, _col;
	char** canvas;
};

class Shape {
public:
	virtual ~Shape();
	virtual void Draw(Canvas* canvas);
	virtual void Dump();
protected:
	int X, Y;
	char brush;
};

class Rectangle : public Shape {
public:
	Rectangle(int x, int y, int h, int w, char b);
	void Draw(Canvas* canvas);
	void Dump();
protected:
	int height, width;
};

class UpTriangle : public Shape {
public:
	UpTriangle(int x, int y, int h, char b);
	void Draw(Canvas* canvas);
	void Dump();
protected:
	int height;
};

class DownTriangle : public Shape {
public:
	DownTriangle(int x, int y, int h, char b);
	void Draw(Canvas* canvas);
	void Dump();
protected:
	int height;
};

class Diamond : public Shape {
public:
	Diamond(int x, int y, int h, char b);
	void Draw(Canvas* canvas);
	void Dump();
protected:
	int height;
};
