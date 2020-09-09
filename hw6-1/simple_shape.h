#pragma once

class Circle {
	private:
		double x, y, r;
	public:
		double area(double r);
		double perimeter(double r);
};

class Rectangular {
	private:
		double lx, ly, rx, ry;
	public:
		double area(double lx, double ly, double rx, double ry);
		double perimeter(double lx, double ly, double rx, double ry);
};
