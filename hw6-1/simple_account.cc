#include "simple_account.h"
#include <iostream>
using namespace std;

void Manager::ib(int id, int bal){
	if(num < id)
		cout << "Account does not exist\n";
	else {
		if((Manager::hoack(id) + bal) > 1000000)
			cout << "Failure: Deposit to user " << id << " " << bal << "\nBalance of user " << id << ": " << Manager::hoack(id) << "\n";
		else {
			account[id].balance += bal;
			cout << "Success: Deposit to user " << id << " " << bal << "\nBalance of user " << id << ": " << Manager::hoack(id) << "\n";
		}
	}
}
void Manager::chul(int id, int bal){
	if(num < id)
		cout << "Account does not exist\n";
	else {
		if (Manager::hoack(id) < bal)
			cout << "Failure: Withdraw from user " << id << " " << bal << "\nBalance of user " << id << ": " << Manager::hoack(id) << "\n";
		else {
			account[id].balance -= bal;
			cout << "Success: Withdraw from user " << id << " " << bal << "\nBalance of user " << id << ": " << Manager::hoack(id) << "\n";
		}
	}
}
void Manager::yee(int idf, int ids, int bal) {
	if(num < idf || num < ids)
		cout << "Account does not exist\n";
	else {
		if (Manager::hoack(idf) < bal) {
			cout << "Failure: Transfer from user " << idf << " to user " << ids << " " << bal << "\n";
			if (idf < ids)
				cout << "Balance of user " << idf << ": " << Manager::hoack(idf) << "\nBalance of user " << ids << ": " << Manager::hoack(ids) << "\n";
			else
				cout << "Balance of user " << ids << ": " << Manager::hoack(ids) << "\nBalance of user " << idf << ": " << Manager::hoack(idf) << "\n";
		}
		else if ((Manager::hoack(ids) + bal) > 1000000) {
			cout << "Failure: Transfer from user " << idf << " to user " << ids << " " << bal << "\n";
			if (idf < ids)
				cout << "Balance of user " << idf << ": " << Manager::hoack(idf) << "\nBalance of user " << ids << ": " << Manager::hoack(ids) << "\n";
			else
				cout << "Balance of user " << ids << ": " << Manager::hoack(ids) << "\nBalance of user " << idf << ": " << Manager::hoack(idf) << "\n";

		}
		else {
			account[idf].balance -= bal;
			account[ids].balance += bal;
			cout << "Success: Transfer from user " << idf << " to user " << ids << " " << bal << "\n";
			if (idf < ids)
				cout << "Balance of user " << idf << ": " << Manager::hoack(idf) << "\nBalance of user " << ids << ": " << Manager::hoack(ids) << "\n";
			else
				cout << "Balance of user " << ids << ": " << Manager::hoack(ids) << "\nBalance of user " << idf << ": " << Manager::hoack(idf) << "\n";

		}
	}
}
int Manager::hoack(int id){
	return account[id].balance;
}
