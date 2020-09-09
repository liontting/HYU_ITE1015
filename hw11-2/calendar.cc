#include "calendar.h"
#include <iostream>
#include <string>
using namespace std;

Date::Date() {

}

Date::Date(int year, int month, int day) {
	year_ = year;
	month_ = month;
	day_ = day;
}

void Date::NextDay(int n) {
	int days = ComputeDaysFromYearStart(year_, month_, day_);
	days += n;
	if(days <= 0) {
		while(days <= 0) {
			year_--;
			days += GetDaysInYear(year_);
		}
	}
	else if(days > GetDaysInYear(year_)) {
		while(days > GetDaysInYear(year_)) {
			days -= GetDaysInYear(year_);
			year_++;
		}
	}
	for(int i = 1; i < 13; i++) {
		if(i == 2) {
			if(GetDaysInYear(year_) == 365) {
				if(days <= 28) {
					month_ = i;
					day_ = days;
					break;
				}
				else
					days -= 28;
			}
			else if(GetDaysInYear(year_) == 366) {
				if(days <= 29) {
					month_ = i;
					day_ = days;
					break;
				}
				else
					days -= 29;
			}
		}
		else if(i == 4 || i == 6 || i == 9 || i == 11) {
			if(days <= 30) {
				month_ = i;
				day_ = days;
				break;
			}
			else
				days -= 30;
		}
		else {
			if(days <= 31) {
				month_ = i;
				day_ = days;
				break;
			}
			else
				days -= 31;
		}
	}
	cout << *this;
}

void Date::SetDate(int year, int month, int day) {
	if(year < 0 || month <= 0 || month > 12)
		cout << "Invalid date: " << year << "." << month << "." << day << endl;
	else {
		if(month == 2) {
			if((GetDaysInYear(year) == 365 && (day <= 0 || day > 28)) || (GetDaysInYear(year) == 366 && (day <= 0 || day > 29)))
				cout << "Invalid date: " << year << "." << month << "." << day << endl;
			else {
				year_ = year;
				month_ = month;
				day_ = day;
				cout << *this;
			}
		}
		else if(month == 4 || month == 6 || month == 9 || month == 11) {
			if(day <= 0 || day > 30)
				cout << "Invalid date: " << year << "." << month << "." << day << endl;
			else {
				year_ = year;
				month_ = month;
				day_ = day;
				cout << *this;
			}
		}
		else {
			if(day <= 0 || day > 31)
				cout << "Invalid date: " << year << "." << month << "." << day << endl;
			else {
				year_ = year;
				month_ = month;
				day_ = day;
				cout << *this;
			}
		}
	}
}

int Date::GetDaysInYear(int year) {
	if(year % 4 == 0 && year % 100 != 0 || year % 400 == 0)
		return 366;
	else
		return 365;
}

int Date::ComputeDaysFromYearStart(int year, int month, int day) {
	int sum = 0;
	for(int i = 1; i < month; i++) {
		if(i == 2)
			sum += 28;
		else if(i == 4 || i == 6 || i == 9 || i == 11)
			sum += 30;
		else
			sum += 31;
	}
	sum += day;
	return sum;
}

ostream& operator<<(ostream& os, const Date& c) {
	os << c.year() << "." << c.month() << "." << c.day() << endl;
	return os;
}

istream& operator>>(istream& is, Date& c) {
	char beo;
	int y, m, d;
	is >> y >> beo >> m >> beo >> d;
	c.SetDate(y, m, d);
	return is;
}
