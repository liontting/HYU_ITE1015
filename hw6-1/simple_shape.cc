#include "simple_shape.h"
#define pi 3.14
double Circle::area(double r)
{ return pi * r * r; }
double Circle::perimeter(double r)  
{ return 2 * pi * r; }
double Rectangular::area(double lx, double ly, double rx, double ry)
{ return (lx - rx) * (ry - ly); }
double Rectangular::perimeter(double lx, double ly, double rx, double ry)
{ return 2 * (lx - rx) + 2 * (ry - ly); }
		
