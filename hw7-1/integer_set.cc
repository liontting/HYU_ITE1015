#include <iostream>
#include <algorithm>
#include <vector>
#include "integer_set.h"
using namespace std;

IntegerSet::IntegerSet() {

}
IntegerSet::~IntegerSet() {

}
void IntegerSet::AddNumber(int num) {
	int o = 0;
	for(int i = 0; i < (int)numbers_.size(); i++) {
		if(num == numbers_[i]) {
			o = 1;
			break;
		}
	}
	if(o == 0) {
		numbers_.push_back(num);
		sort(numbers_.begin(), numbers_.end());
	}
	for(int i = 0; i < (int)numbers_.size(); i++)
		cout << numbers_[i] << " ";
	cout << "\n";
}
void IntegerSet::DeleteNumber(int num) {
	for(int i = 0; i < (int)numbers_.size(); i++) {
		if(num == numbers_[i]) {
			numbers_.erase(numbers_.begin()+i);
			break;
		}
	}
	for(int i = 0; i < (int)numbers_.size(); i++)
		cout << numbers_[i] << " ";
	cout << "\n";
}
int IntegerSet::GetItem(int pos) const {
	int temp;
	if(pos >= (int)numbers_.size())
		temp = -1;
	else
		temp = numbers_[pos];
	return temp;
}
