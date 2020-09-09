#include "number.h"
#include <iostream>
using namespace std;

void Number::setNumber(int num) {
	_num = num;
}

int Number::getNumber() {
	return _num;
}

int Square::getSquare() {
	return _num * _num;
}

int Cube::getCube() {
	return _num * _num * _num;
}
