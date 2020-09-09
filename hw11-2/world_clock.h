#pragma once
#include <iostream>
using namespace std;

class WorldClock {
public:
	void Tick(int seconds);
	void SetTime(int hour, int minute, int second);
	int hour() const { return hour_; }
	int minute() const { return minute_; }
	int second() const { return second_; }
private:
	int timezone;
	int hour_, minute_, second_;
};

ostream& operator<<(ostream& os, const WorldClock& c);

istream& operator>>(istream& is, WorldClock& c);
