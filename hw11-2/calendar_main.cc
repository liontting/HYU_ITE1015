#include "calendar.h"
#include <iostream>
#include <string>
#include <stdlib.h>
using namespace std;

int main() {
	Date d;
	while(1) {
		string s;
		cin >> s;
		if(s == "quit")
			break;
		if(s == "set")
			cin >> d;
		else if(s == "next_day")
			d.NextDay(1);
		else {
			int n;
			n = atoi((s.substr(5).c_str()));
			d.NextDay(n);
		}
	}
	return 0;
}
