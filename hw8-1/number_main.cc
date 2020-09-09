#include <iostream>
#include "number.h"
#include <string>
using namespace std;

int main() {
	Cube c;
	while(1) {
		string s;
		cin >> s;
		if (s == "number") {
			int num;
			cin >> num;
			c.setNumber(num);
			cout << "getNumber(): " << c.getNumber() << "\n";
		}
		else if (s == "square") {
			int num;
			cin >> num;
			c.setNumber(num);
			cout << "getNumber(): " << c.getNumber() << "\n";
			cout << "getSquare(): " << c.getSquare() << "\n";
		}
		else if (s == "cube") {
			int num;
			cin >> num;
			c.setNumber(num);
			cout << "getNumber(): " << c.getNumber() << "\n";
			cout << "getSquare(): " << c.getSquare() << "\n";
			cout << "getCube(): " << c.getCube() << "\n";
		}
		else
			break;
	}
	return 0;
}
