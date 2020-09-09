#pragma once
#include <iostream>
using namespace std;

class MyVector {
private:
	int max_num;
	int a_;
public:
	MyVector(int a) : a_(a) {};
	void set_max_num(int num) {
		max_num = num;
	}
	MyVector operator+(const MyVector& a);
	MyVector operator-(const MyVector& a);
	MyVector operator+(const int a);
	MyVector operator-(const int a);
	friend ostream& operator<<(ostream& out, MyVector b) {
		out << b.a_ << " ";
		return out;
	}

	friend istream& operator>>(istream& in, MyVector b) {
		in >> b.a_;
		return in;
	}
};
