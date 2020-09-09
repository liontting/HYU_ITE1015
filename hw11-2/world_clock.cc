#include "world_clock.h"
#include <iostream>
using namespace std;

void WorldClock::Tick(int seconds) {
	timezone += seconds;
	if (timezone >= 86400) {
		while(timezone >= 86400)
			timezone -= 86400;
		hour_ = timezone / 3600;
		minute_ = (timezone - hour_ * 3600) / 60;
		second_ = timezone - hour_ * 3600 - minute_ * 60;
		cout << *this;
	}
	else if (timezone < 0) {
		while(timezone < 0)
			timezone += 86400;
		hour_ = timezone / 3600;
		minute_ = (timezone - hour_ * 3600) / 60;
		second_ = timezone - hour_ * 3600 - minute_ * 60;
		cout << *this;
	}
	else {
		hour_ = timezone / 3600;
		minute_ = (timezone - hour_ * 3600) / 60;
		second_ = timezone - hour_ * 3600 - minute_ * 60;
		cout << *this;
	}
}

void WorldClock::SetTime(int hour, int minute, int second) {
	if(hour >= 0 && hour < 24 && minute >= 0 && minute < 60 && second >= 0 && second < 60) {
		timezone = hour * 60 * 60 + minute * 60 + second;
		hour_ = hour;
		minute_ = minute;
		second_ = second;
		cout << *this;
	}
	else
		cout << "Invalid time: " << hour << ":" << minute << ":" << second << endl;
}

ostream& operator<<(ostream& os, const WorldClock& c) {
	os << c.hour() << ":" << c.minute() << ":" << c.second() << endl;
	return os;
}

istream& operator>>(istream& is, WorldClock& c) {
	char beo;
	int h, m, s;
	cin >> h >> beo >> m >> beo >> s;
	c.SetTime(h, m, s);
	return is;
}
