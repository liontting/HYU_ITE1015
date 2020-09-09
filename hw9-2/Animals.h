#pragma once
#include <iostream>
#include <string>
using namespace std;

class Animal {
protected:
	string name;
	int age;
public:
	Animal(string n, int a);
	virtual void printInfo();
};

class Zebra : public Animal {
protected:
	int numStripes;
public:
	Zebra(string, int, int);
	void printInfo();
};

class Cat : public Animal {
protected:
	string favoriteToy;
public:
	Cat(string, int, string);
	void printInfo();
};
