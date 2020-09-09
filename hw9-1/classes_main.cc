#include <iostream>
#include <vector>
#include "classes.h"
using namespace std;

int main() {
	A* a = new A;
	B* b = new B;
	C* c = new C;
	vector<A*> v;
	v.push_back(a);
	v.push_back(b);
	v.push_back(c);
	vector<A*>::iterator it;
	for(it = v.begin(); it != v.end(); it++)
		(*it)->test();
	delete a;
	delete b;
	delete c;
	return 0;
}
