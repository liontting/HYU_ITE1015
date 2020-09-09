#include <iostream>
#include <sstream>
#include <string>
#include <stdlib.h>
#include <vector>
#include "sorted_array.h"
using namespace std;

vector<string> tokenize_getline(string str) {
	vector<string> result;
	string token;
	stringstream ss(str);
	while(getline(ss, token, ' '))
		result.push_back(token);
	return result;
}

int main() {
	SortedArray s;
	string q;
	while(q != "quit") {
		string tmp, pop;
		vector<string> temp;
		cin >> tmp;
		temp = tokenize_getline(tmp);
		pop = temp[0];
		if(pop == "ascend") {
			vector<int> as;
			as = s.GetSortedAscending();
			for(int i = 0; i < (int)as.size(); i++)
				cout << as[i] << " ";
			cout << "\n";
		}
		else if(pop == "descend") {
			vector<int> des;
			des = s.GetSortedDescending();
			for(int i = 0; i < (int)des.size(); i++)
				cout << des[i] << " ";
			cout << "\n";
		}
		else if(pop == "max") {
			int max;
			max = s.GetMax();
			cout << max << "\n";
		}
		else if(pop == "min") {
			int min;
			min = s.GetMin();
			cout << min << "\n";
		}
		else if(pop == "quit")
			break;
		else {
			s.AddNumber(atoi(pop.c_str()));
			for(int i = 1; i < (int)temp.size(); i++)
				s.AddNumber(atoi(temp[i].c_str()));
		}
	}
	return 0;
}
