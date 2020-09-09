#include <iostream>
#include <set>
#include "simple_int_set.h"
using namespace std;

set<int> SetUnion(const set<int>& set0, const set<int>& set1) {
	set<int> temp;
	temp.insert(set0.begin(), set0.end());
	temp.insert(set1.begin(), set1.end());
	return temp;
}

set<int> SetDifference(const set<int>& set0, const set<int>& set1) {
	set<int> temp = set0;
	for(set<int>::const_iterator i = set1.begin(); i != set1.end(); i++)
		for(set<int>::const_iterator t = temp.begin(); t != temp.end(); t++)
			if(*t == *i)
				temp.erase(*i);
	return temp;
}

set<int> SetIntersection(const set<int>& set0, const set<int>& set1) {
	set<int> temp;
	for(set<int>::const_iterator i = set1.begin(); i != set1.end(); i++)
		for(set<int>::const_iterator t = set0.begin(); t != set0.end(); t++)
			if(*t == *i)
				temp.insert(*i);
	return temp;
}

