#include "shapes.h"
#include <iostream>
#include <vector>
using namespace std;

int main() {
	vector<Shape*> v;
	double w1, h1, w2, h2;
	cin >> w1 >> h1 >> w2 >> h2;
	Triangle* t = new Triangle(w1,h1);
	Rectangle* r = new Rectangle(w2,h2);
	v.push_back(t);
	v.push_back(r);
	for(int i = 0; i < 2; i++)
		cout << v[i]->getArea() << endl;
	delete t;
	delete r;
	return 0;
}
