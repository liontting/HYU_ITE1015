#include <iostream>
#include "Animals.h"
#include <string>
#include <vector>
using namespace std;

int main() {
	vector<Animal*> v;
	while(1) {
		char a;
		cin >> a;
		if(a == 'z') {
			string s;
			int n1, n2;
			cin >> s >> n1 >> n2;
			Zebra* z = new Zebra(s, n1, n2);
			v.push_back(z);
		}
		else if(a == 'c') {
			string s1, s2;
			int n;
			cin >> s1 >> n >> s2;
			Cat* c = new Cat(s1, n, s2);
			v.push_back(c);
		}
		else {
			vector<Animal*>::iterator it;
			for(it = v.begin(); it != v.end(); it++)
				(*it)->printInfo();
			break;
		}
	}
	return 0;
}
