#include "message_book.h"
#include <iostream>
#include <vector>
#include <string>
#include <map>
using namespace std;

MessageBook::MessageBook() {
}

MessageBook::~MessageBook() {
}

void MessageBook::AddMessage(int number, const string& message) {
	messages_[number] = message;
}

void MessageBook::DeleteMessage(int number) {
	messages_.erase(messages_.find(number));
}

vector<int> MessageBook::GetNumbers() const {
	vector<int> v;
	for(map<int, string>::const_iterator it = messages_.begin(); it != messages_.end(); ++it)
		v.push_back(it->first);
	return v;
}

const string& MessageBook::GetMessage(int number) const {
	if(messages_.find(number) == messages_.end()) {
		const string& s = "";
		return s;
	}
	else {
		map<int, string>::const_iterator it = messages_.find(number);
		const string& s = it->second;
		return s;
	}
}
