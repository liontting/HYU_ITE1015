#include "MyVector.h"
#include <iostream>
using namespace std;

MyVector MyVector::operator+(const MyVector &a) {
	return MyVector(a_ + a.a_);
}

MyVector MyVector::operator-(const MyVector &a) {
	return MyVector(a_ - a.a_);
}

MyVector MyVector::operator+(const int a) {
	return MyVector(a_ + a);
}

MyVector MyVector::operator-(const int a) {
	return MyVector(a_ - a);
}
