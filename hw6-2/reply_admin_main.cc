#include <iostream>
#include <string>
#include <stdlib.h>
#include "reply_admin.h"
using namespace std;

int main() {
	ReplyAdmin r;
	while (1) {
		string inputs;
		getline(cin, inputs);
		if(inputs == "#quit")
			return 0;
		else if(inputs.find("#remove") != string::npos) {
			if(inputs.find("-") != string::npos) {
				string* jeo = new string[2];
				int jung = inputs.find("-", 9);
				jeo[0] = inputs.substr(8, jung - 8);
				jeo[1] = inputs.substr(jung + 1);
				r.removeChat(atoi(jeo[0].c_str()), atoi(jeo[1].c_str()));
			}
			else {
				r.removeChat(atoi(inputs.substr(8).c_str()));
			}
			r.yeol();
		}
		else {
			r.addChat(inputs);
			r.yeol();
		}
	}
	return 0;
}
