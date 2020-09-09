#include <iostream>
#include "string.h"
#include <vector>
#include <string>
#include <cstdlib>
using namespace std;

int main() {
	MyString* sa;
	MyString* sb;
	MyString* sc;
	while(1) {
		string s1;
		cin >> s1;
		if(s1 == "new") {
			string a, b;
			cout << "enter a" << endl;
			cin >> a;
			sa = new MyString(a);
			cout << "enter b" << endl;
			cin >> b;
			sb = new MyString(b);
			sc = new MyString(b);
		}
		else if(s1 == "quit")
			break;
		else {
			string oper;
			string s2;
			cin >> oper >> s2;
			if(oper == "+") {
				if(s1 == "a" && s2 == "a") {
					*sc = *sa + *sa;
					cout << *sc << endl;
				}
				else if(s1 == "a" && s2 == "b") {
					*sc = *sa + *sb;
					cout << *sc << endl;
				}
				else if(s1 == "b" && s2 == "a") {
					*sc = *sb + *sa;
					cout << *sc << endl;
				}
				else if(s1 == "b" && s2 == "b") {
					*sc = *sb + *sb;
					cout << *sc << endl;
				}
			}
			else {
				int i2 = atoi(s2.c_str());
				if(s1 == "a") {
					*sc = *sa * i2;
					cout << *sc << endl;
				}
				else if(s1 == "b") {
					*sc = *sb * i2;
					cout << *sc << endl;
				}
			}
		}
	}
	return 0;
}
