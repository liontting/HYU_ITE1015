#include <iostream>
#include "minimal_fighter.h"
using namespace std;

MinimalFighter::MinimalFighter() {
	mHp = 0;
	mPower = 0;
	mStatus = Invalid;
}

MinimalFighter::MinimalFighter(int _hp, int _power) {
	mHp = _hp;
	mPower = _power;
	if (mHp <= 0)
		mStatus = Dead;
	else
		mStatus = Alive;	
}

int MinimalFighter::hp() const {
	return mHp;
}

int MinimalFighter::power() const {
	return mPower;
}

FighterStatus MinimalFighter::status() const {
	return mStatus;
}

void MinimalFighter::setHp(int _hp) {
	mHp = _hp;
}

void MinimalFighter::hit(MinimalFighter *_enemy) {
	mHp -= _enemy->power();
	if(mHp <= 0)
		mStatus = Dead;
}

void MinimalFighter::attack(MinimalFighter *_target) {
	_target->hit(this);
	mPower = 0;
}

void MinimalFighter::fight(MinimalFighter *_enemy) {
	while(status() != Dead && _enemy->status() != Dead) {
		hit(_enemy);
		_enemy->hit(this);
	}
}
