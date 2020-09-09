#include "clock_time.h"
#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Clock : public ClockTime {
public:
	Clock(int hour, int minute, int second, double driftPerSecond) : _clockTime(hour, minute, second, 1) {
		_driftPerSecond = driftPerSecond;
	}
	void reset() {
		_clockTime.reset();
	}
	void tick() {
		_clockTime.increment();
		_totalDrift += _driftPerSecond;
	}
	virtual void displayTime() = 0;
protected:
	ClockTime _clockTime;
	double _driftPerSecond;
	double _totalDrift = 0;
};

class NaturalClock : public Clock {
public:
	NaturalClock(int hour, int minute, int second, double driftPerSecond) : Clock(hour, minute, second, driftPerSecond) {}
};

class MechanicalClock : public Clock {
public:
        MechanicalClock(int hour, int minute, int second, double driftPerSecond) : Clock(hour, minute, second, driftPerSecond) {}
};

class DigitalClock : public Clock {
public:
        DigitalClock(int hour, int minute, int second, double driftPerSecond) : Clock(hour, minute, second, driftPerSecond) {}
};

class QuantumClock : public Clock {
public:
        QuantumClock(int hour, int minute, int second, double driftPerSecond) : Clock(hour, minute, second, driftPerSecond) {}
};

class SundialClock : public NaturalClock {
public:
	SundialClock(int hour, int minute, int second) : NaturalClock(hour, minute, second, 0.0) {}
	void displayTime() {
		cout << "SundialClock ";
		_clockTime.display();
		cout << ", total drift: " << _totalDrift << endl;
	}
};

class CuckooClock : public MechanicalClock {
public:
	CuckooClock(int hour, int minute, int second) : MechanicalClock(hour, minute, second, 0.0) {}
	void displayTime() {
		cout << "CuckooClock ";
		_clockTime.display();
		cout << ", total drift: " << _totalDrift << endl;
	}
};

class GrandFatherClock : public MechanicalClock {
public:
	GrandFatherClock(int hour, int minute, int second) : MechanicalClock(hour, minute, second, 0.000694444) {}
	void displayTime() {
		cout << "GrandFatherClock ";
		_clockTime.display();
		cout << ", total drift: " << _totalDrift << endl;
	}
};

class WristClock : public DigitalClock {
public:
	WristClock(int hour, int minute, int second) : DigitalClock(hour, minute, second, 0.000347222) {}
	void displayTime() {
		cout << "WristClock ";
		_clockTime.display();
		cout << ", total drift: " << _totalDrift << endl;
	}
};

class AtomicClock : public QuantumClock {
public:
	AtomicClock(int hour, int minute, int second) : QuantumClock(hour, minute, second, 0.000034722) {}
	void displayTime() {
		cout << "AtomicClock ";
		_clockTime.display();
		cout << ", total drift: " << _totalDrift << endl;
	}
};

int main() {
	int input;
	cin >> input;
	vector<Clock*> v;
	SundialClock* s = new SundialClock(0,0,0);
	CuckooClock* c = new CuckooClock(0,0,0);
	GrandFatherClock* g = new GrandFatherClock(0,0,0);
	WristClock* w = new WristClock(0,0,0);
	AtomicClock* a = new AtomicClock(0,0,0);
	v.push_back(s);
	v.push_back(c);
	v.push_back(g);
	v.push_back(w);
	v.push_back(a);
	for(vector<Clock*>::iterator i = v.begin(); i != v.end(); i++)
		(*i)->reset();
	cout << "Reported clock times after resetting:" << endl;
	for(vector<Clock*>::iterator i = v.begin(); i != v.end(); i++)
		(*i)->displayTime();
	cout << endl;
	cout << "Running the clocks..." << endl;
	cout << endl;
	for(vector<Clock*>::iterator it = v.begin(); it != v.end(); it++)
		for(int i = 0; i < input; i++)
			(*it)->tick();
	cout << "Reported clock times after running:" << endl;
	for(vector<Clock*>::iterator i = v.begin(); i != v.end(); i++) {
		(*i)->displayTime();
		delete(*i);
	}
	return 0;
}
