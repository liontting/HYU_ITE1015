#include <iostream>
#include <string>
#include <stdlib.h>
using namespace std;

int main(int argu, char* imsi[]) {
	string s;
	int n = 0;
	for(int i = 1; i < argu; i++) {
		if(atoi(imsi[i]))
			n += atoi(imsi[i]);
		else
			s += imsi[i];
	}
	cout << s << "\n" << n << "\n";
	return 0;
}
