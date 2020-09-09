#include <iostream>
#include "MyVector.h"
#include <vector>
#include <string>
#include <cstdlib>
using namespace std;

int main() {
	int num;
	vector<MyVector*> va;
	vector<MyVector*> vb;
	vector<MyVector*> vc;
	while(1) {
		string s1;
		cin >> s1;
		if(s1 == "new") {
			cin >> num;
			cout << "enter a" << endl;
			for(int i = 0; i < num; i++) {
				int a;
				cin >> a;
				va.push_back(new MyVector(a));
				va[i] -> set_max_num(num);
			}
			cout << "enter b" << endl;
			for(int i = 0; i < num; i++) {
				int b;
				cin >> b;
				vb.push_back(new MyVector(b));
				vb[i] -> set_max_num(num);
			}
			for(int i = 0; i < num; i++) {
				vc.push_back(new MyVector(1));
				vc[i] -> set_max_num(num);
			}
		}
		else if(s1 == "quit")
			break;
		else {
			string oper;
			string s2;
			cin >> oper >> s2;
			if(oper == "+") {
				if(s1 == "a" && s2 == "a") {
					for(int i = 0; i < num; i++) {
						*vc[i] = *va[i] + *va[i];
						cout << *vc[i];
					}
					cout << endl;
				}
				else if(s1 == "a" && s2 == "b") {
					for(int i = 0; i < num; i++) {
						*vc[i] = *va[i] + *vb[i];
						cout << *vc[i];
					}
					cout << endl;
				}
				else if(s1 == "b" && s2 == "a") {
					for(int i = 0; i < num; i++) {
						*vc[i] = *vb[i] + *va[i];
						cout << *vc[i];
					}
					cout << endl;
				}
				else if(s1 == "b" && s2 == "b") {
					for(int i = 0; i < num; i++) {
						*vc[i] = *vb[i] + *vb[i];
						cout << *vc[i];
					}
					cout << endl;
				}
				else {
					int i2 = atoi(s2.c_str());
					if(s1 == "a") {
						for(int i = 0; i < num; i++) {
							*vc[i] = *va[i] + i2;
							cout << *vc[i];
						}
						cout << endl;
					}
					else if(s1 == "b") {
						for(int i = 0; i < num; i++) {
							*vc[i] = *vb[i] + i2;
							cout << *vc[i];
						}
						cout << endl;
					}
				}
			}
		}
	}
	return 0;
}
