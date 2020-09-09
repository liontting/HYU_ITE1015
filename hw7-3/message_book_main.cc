#include <iostream>
#include "message_book.h"
#include <vector>
#include <string>
using namespace std;

int main() {
	MessageBook m;
	while(1) {
		string s;
		int num;
		cin >> s;
		if(s == "add") {
			cin >> num;
			cin.get();
			string sss;
			getline(cin, sss);
			m.AddMessage(num, sss);
		}
		else if(s == "delete") {
			cin >> num;
			m.DeleteMessage(num);
		}
		else if(s == "print") {
			cin >> num;
			const string& pt = m.GetMessage(num);
			cout << pt << "\n";
		}
		else if(s == "list") {
			vector<int> v;
			v = m.GetNumbers();
			for(vector<int>::iterator i = v.begin(); i != v.end(); i++) {
				const string& pt = m.GetMessage(*i);
				cout << *i << ": " << pt << "\n";
			}
		}
		else if(s == "quit")
			break;
		else
			cout << "wrong input\n";
	}
	return 0;
}
