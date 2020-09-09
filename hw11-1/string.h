#pragma once
#include <iostream>
#include <string>
using namespace std;

class MyString {
private:
	string a_;
public:
	MyString() {};
	MyString(string a) : a_(a) {};
	MyString operator+(const MyString& a);
	MyString operator*(const int a);
	friend ostream& operator<<(ostream& out, MyString b) {
		out << b.a_ << " ";
		return out;
	}
	friend istream& operator>>(istream& in, MyString b) {
		in >> b.a_;
		return in;
	}
};
