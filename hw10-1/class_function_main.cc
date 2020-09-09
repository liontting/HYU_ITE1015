#include "class_function.h"
#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {
	vector<A*> v;
	while(1) {
		string s;
		cin >> s;
		if(s == "B") {
			B* b = new B;
			v.push_back(b);
		}
		else if(s == "C") {
			C* c = new C;
			v.push_back(c);
		}
		else if(s == "BB") {
			BB* bb = new BB;
			v.push_back(bb);
		}
		else
			break;
	}
	for(int i = 0; i < v.size(); i++) {
		v[i]->test1();
		v[i]->test2();
	}
	return 0;
}
