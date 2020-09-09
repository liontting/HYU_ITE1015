#include <iostream>
#include <string>
#include <vector>
#include "integer_set.h"
using namespace std;

int main() {
	IntegerSet s;
	while(1) {
		string temp;
		int tmp;
		cin >> temp;
		if(temp == "add") {
			cin >> tmp;
			s.AddNumber(tmp);
		}
		else if(temp == "del") {
			cin >> tmp;
			s.DeleteNumber(tmp);
		}
		else if(temp == "get") {
			int t;
			cin >> tmp;
			t = s.GetItem(tmp);
			cout << t << "\n";
		}
		else if(temp == "quit")
			break;
	}
	return 0;
}
