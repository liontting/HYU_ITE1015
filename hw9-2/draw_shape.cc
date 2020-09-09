#include <iostream>
#include "draw_shape.h"
#include <vector>
using namespace std;

Canvas::Canvas(int row, int col) {
	_row = row;
	_col = col;
	canvas = new char*[_col];
	for(int i = 0; i < _col; i++)
		canvas[i] = new char[_row];
	for(int i = 0; i < _col; i++)
		for(int j = 0; j < _row; j++)
			canvas[i][j] = '.';
}

Canvas::~Canvas() {
	for(int i = 0; i < _col; i++)
		delete[] canvas[i];
	delete [] canvas;
}

void Canvas::Resize(int w, int h) {
	_row = w;
	_col = h;
	canvas = new char*[_col];
	for(int i = 0; i < _col; i++)
		canvas[i] = new char[_row];
	for(int i = 0; i < _col; i++)
		for(int j = 0; j < _row; j++)
			canvas[i][j] = '.';
}

bool Canvas::DrawPixel(int x, int y, char brush) {
	if(x < _row && x >= 0 && y < _col && y >= 0) {
		canvas[x][y] = brush;
		return true;
	}
	else 
		return false;
}

void Canvas::Print() {
	cout << " ";
	for(int i = 0; i < _row; i++)
		cout << i % 10;
	cout << endl;
	for(int i = 0; i < _col; i++) {
		cout << i % 10;
		for(int j = 0; j < _row; j++) {
			cout << canvas[i][j];
		}
		cout << endl;
	}
}

void Canvas::Clear() {
	for(int i = 0; i < _col; i++)
		for(int j = 0; j < _row; j++)
			canvas[i][j] = '.';
}

Shape::~Shape() {

}

void Shape::Draw(Canvas* canvas) {
	
}

void Shape::Dump() {

}

Rectangle::Rectangle(int x, int y, int h, int w, char b) {
	X = x;
	Y = y;
	height = h;
	width = w;
	brush = b;
}

void Rectangle::Draw(Canvas* canvas) {
	for(int i = Y; i < Y + width; i++)
		for(int j = X; j < X + height; j++)
			canvas->DrawPixel(i, j, brush);
}

void Rectangle::Dump() {
	cout << "rect " << X << " " << Y << " " << height << " " << width << " " << brush << endl;
}

UpTriangle::UpTriangle(int x, int y, int h, char b) {
	X = x;
	Y = y;
	height = h;
	brush = b;
}

void UpTriangle::Draw(Canvas* canvas) {
	int v = 0;
	for(int i = Y; i < Y + height; i++) {
		for(int j = X - v; j <= X + v; j++)
			canvas->DrawPixel(i, j, brush);
		v++;
	}
}

void UpTriangle::Dump() {
	cout << "tri_up " << X << " " << Y << " " << height << " " << brush << endl;
}

DownTriangle::DownTriangle(int x, int y, int h, char b) {
	X = x;
	Y = y;
	height = h;
	brush = b;
}

void DownTriangle::Draw(Canvas* canvas) {
	int v = height - 1;
	for(int i = Y - height + 1; i <= Y; i++) {
		for(int j = X - v; j <= X + v; j++)
			canvas->DrawPixel(i, j, brush);
		v--;
	}
}

void DownTriangle::Dump() {
	 cout << "tri_down " << X << " " << Y << " " << height << " " << brush << endl;
}

Diamond::Diamond(int x, int y, int h, char b) {
	X = x;
	Y = y;
	height = h;
	brush = b;
}

void Diamond::Draw(Canvas* canvas) {
	int v = 0;
	int bang = 0;
	for(int i = Y; i <= Y + 2 * height; i++) {
		for(int j = X - v; j <= X + v; j++)
			canvas->DrawPixel(i, j, brush);
		if(bang == 0 && v < height)
			v++;
		else if(bang == 0 && v == height) {
			bang = 1;
			v--;
		}
		else if(bang == 1)
			v--;
	}
}

void Diamond::Dump() {
	cout << "diamond " << X << " " << Y << " " << height << " " << brush << endl;
}
