#include "string.h"
#include <iostream>
using namespace std;

MyString MyString::operator+(const MyString &a) {
        return MyString(a_ + a.a_);
}

MyString MyString::operator*(const int a) {
	string b = a_;
	for(int i = 1; i < a; i++)
		b += a_;
	return MyString(b);
}
