#include "print_info.h"
#include <iostream>
#include <string>
using namespace std;

string A::getTypeInfo() {
	string s = "This is an instance of class A";
	return s;
}

string B::getTypeInfo() {
        string s = "This is an instance of class B";
        return s;
}

string C::getTypeInfo() {
        string s = "This is an instance of class C";
        return s;
}
