#include <iostream>
#include <set>
#include <stdlib.h>
#include <string>
#include "simple_int_set.h"
using namespace std;

int main() {
	set<int> set0, set1, dap;
	char temp;
	while(1) {
		cin >> temp;
		if(temp == '0')
			break;
		string t;
		char oper;
		while(1) {
			cin >> t;
			if(t[0] == '}')
				break;
			set0.insert(atoi(t.c_str()));
		}
		cin >> oper;
		cin >> temp;
		while(1) {
			cin >> t;
			if(t[0] == '}')
				break;
			set1.insert(atoi(t.c_str()));
		}
		if(oper == '*')
			dap = SetIntersection(set0, set1);
		else if(oper == '-')
			dap = SetDifference(set0, set1);
		else if(oper == '+')
			dap = SetUnion(set0, set1);
		cout << '{';
		for(set<int>::const_iterator i = dap.begin(); i != dap.end(); i++)
			cout << ' ' << *i;
		cout << " }\n";
		dap.clear();
		set0.clear();
		set1.clear();
	}
	return 0;
}
