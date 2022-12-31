#pragma once
//#include <iostream>

using namespace std;

struct Date {
	Date(int d, int m, int y) : d(d), m(m), y(y) { }
	~Date() {}
	int d, m, y;
};

const int monthDays[12]
= { 31, 28, 31, 30, 31, 30,
   31, 31, 30, 31, 30, 31 };

const int monthDaysLeap[12]
= { 31, 29, 31, 30, 31, 30,
   31, 31, 30, 31, 30, 31 };


int countLeapYears(Date d);

int getDifference(Date dt1, Date dt2);


Date getStartDate();

Date getEndDate();

bool isLeap(Date dt);

bool invalidDates(Date dt1, Date dt2);