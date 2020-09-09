#include <iostream>
#include <algorithm>
#include <vector>
#include "sorted_array.h"
using namespace std;

SortedArray::SortedArray() {	
}

SortedArray::~SortedArray() {
}

void SortedArray::AddNumber(int num) {
	numbers_.push_back(num);
	sort(numbers_.begin(), numbers_.end());	
}

vector<int> SortedArray::GetSortedAscending() const {
	vector<int> temp = numbers_;
	sort(temp.begin(), temp.end());
	return temp;
}

vector<int> SortedArray::GetSortedDescending() const {
	vector<int> temp = numbers_;
	sort(temp.begin(), temp.end(), greater<int>());
	return temp;
}

int SortedArray::GetMax() const {
	int max = *max_element(numbers_.begin(), numbers_.end());
	return max;
}

int SortedArray::GetMin() const {
	int min = *min_element(numbers_.begin(), numbers_.end());
	return min;
}
