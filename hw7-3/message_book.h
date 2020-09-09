#pragma once
#include <vector>
#include <iostream>
#include <string>
#include <map>
using namespace std;

class MessageBook {
	public:
		MessageBook();
		~MessageBook();
		void AddMessage(int number, const string& message);
		void DeleteMessage(int number);
		vector<int> GetNumbers() const;
		const string& GetMessage(int number) const;
	private:
		map<int, string> messages_;
};
