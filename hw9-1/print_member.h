#pragma once
#include <iostream>
#include <string>
using namespace std;

class A {
private:
	int* memberA;
public:
	A(int a);
	~A();
	virtual void print();
};

class B : public A {
private:
	double* memberB;
public:
	B(double b);
	~B();
	void print();
};

class C : public B {
private:
	string* memberC;
public:
	C(string c);
	~C();
	void print();
};

