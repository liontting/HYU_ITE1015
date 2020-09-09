#include <iostream>
#include "simple_account.h"
using namespace std;

int main() {
	Manager manager;
	while(1) {
		char n;
		cout << "\nJob?\n";
		cin >> n;
		if (n == 'N') {
			if(manager.num <= 8) {
				manager.num++;
				cout << "Account for user " << manager.num << " registered\nBalance of user " << manager.num << ": " << manager.hoack(manager.num) << "\n";
			}
			else
				cout << "Full account\n";
		}
		else if (n == 'D') {
			int id, bal;
			cin >> id >> bal;
			manager.ib(id, bal);
		}
		else if (n == 'W') {
			int id, bal;
			cin >> id >> bal;
			manager.chul(id, bal);
		}
		else if (n == 'T') {
			int idf, ids, bal;
			cin >> idf >> ids >> bal;
			manager.yee(idf, ids, bal);
		}
		else if (n == 'Q')
			break;
	}
	return 0;
}
