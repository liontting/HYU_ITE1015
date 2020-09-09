#include "print_info.h"
#include <iostream>
#include <string>
#include <vector>
using namespace std;

void printObjectTypeInfo1(A* object) {
	cout << object->getTypeInfo() << endl;
}

void printObjectTypeInfo2(A& object) {
	cout << object.getTypeInfo() << endl;
}

int main() {
	A* a = new A;
	B* b = new B;
	C* c = new C;
	vector<A*> v;
	v.push_back(a);
	v.push_back(b);
	v.push_back(c);
	vector<A*>::iterator it;
	for(it = v.begin(); it != v.end(); it++) {
		printObjectTypeInfo1(*it);
		printObjectTypeInfo2(**it);
	}
	delete a, b, c;
	return 0;
}
