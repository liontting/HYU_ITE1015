#include <iostream>
#include "simple_shape.h"
using namespace std;

int main() {
	char n;
	while (1) {
		cout << "\nshape?\n";
		cin >> n;
		if (n == 'C') {
			Circle circle;
			double x, y, r;
			cin >> x >> y >> r;
			cout << "area: " << circle.area(r) << ", perimeter: " << circle.perimeter(r) << "\n";
		}
		else if (n == 'R') {
			Rectangular rec;
			double lx, ly, rx, ry;
			cin >> lx >> ly >> rx >> ry;
			cout << "area: " << rec.area(lx, ly, rx, ry) << ", perimeter: " << rec.perimeter(lx, ly, rx, ry) << "\n";
		}
		else
			break;
	}
	return 0;
}
