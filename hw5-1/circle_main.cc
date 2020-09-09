#include <iostream>
#include "circle.h"
using namespace std;

int main() {
	double r;
	cin >> r;
	cout << fixed;
	cout.precision(6);
	cout << "Perimeter: " << getCirclePerimeter(r) << "\n";
	cout << "Area: " << getCircleArea(r) << "\n";
	return 0;
}
