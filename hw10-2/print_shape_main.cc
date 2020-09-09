#include "print_shape.h"
#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {
	vector<Shape*> v;
	char c;
	while(1) {
		cin >> c;
		if(c == 'c') {
			double d;
			cin >> d;
			Circle* c = new Circle(d);
			v.push_back(c);
		}
		else if(c == 'r') {
			double w, h;
			cin >> w >> h;
			Rectangle* r = new Rectangle(w, h);
			v.push_back(r);
		}
		else
			break;
	}
	cout.precision(15);
	for(vector<Shape*>::iterator i = v.begin(); i != v.end(); i++)
		cout << (*i)->getTypeString() << ", " << (*i)->getArea() << ", " << (*i)->getPerimeter() << endl;
	return 0;
}
