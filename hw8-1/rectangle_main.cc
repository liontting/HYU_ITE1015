#include "rectangle.h"
#include <iostream>
#include <string>
using namespace std;

int main() {
	while(1) {
		string s;
		cin >> s;
		if (s == "square") {
			int n;
			cin >> n;
			Square s(n);
			s.print();
		}
		else if (s == "nonsquare") {
			int n1, n2;
			cin >> n1 >> n2;
			NonSquare n(n1, n2);
			n.print();
		}
		else
			break;
	}
	return 0;
}
