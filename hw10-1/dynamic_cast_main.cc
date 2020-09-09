#include "dynamic_cast.h"
#include <iostream>
#include <vector>
using namespace std;

int main() {
	vector<B*> v;
	while(1) {
		char c;
		cin >> c;
		if(c == 'B') {
			B* b = new B;
			v.push_back(b);
		}
		else if(c == 'C') {
			C* c = new C;
			v.push_back(c);
		}
		else if(c == 'D') {
			D* d = new D;
			v.push_back(d);
		}
		else
			break;
	}
	for(vector<B*>::iterator i = v.begin(); i < v.end(); i++) {
		C* is = dynamic_cast<C*>(*i);
		if(is != NULL)
			is->test_C();
		D* it = dynamic_cast<D*>(*i);
		if(it != NULL)
			it->test_D();
	}
	return 0;
}
