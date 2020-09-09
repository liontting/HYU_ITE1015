#include "print_member.h"
#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {
	int one;
	double two;
	string three;
	cin >> one >> two >> three;
	A* a = new A(one);
	B* b = new B(two);
	C* c = new C(three);
	vector<A*> v;
	v.push_back(a);
	v.push_back(b);
	v.push_back(c);
	vector<A*>::iterator it;
	for(it = v.begin(); it != v.end(); it++) {
		(*it)->print();
	}
	delete a;
	delete b;
	delete c;
	return 0;
}
