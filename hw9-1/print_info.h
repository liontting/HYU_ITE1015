#pragma once
#include <iostream>
#include <string>
using namespace std;

class A {
public:
	virtual string getTypeInfo();
};

class B : public A {
public:
	string getTypeInfo();
};

class C : public B {
public:
	string getTypeInfo();
};
