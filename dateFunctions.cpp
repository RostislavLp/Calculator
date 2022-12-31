#include "dateFunctions.h"
#include "mathFunctions.h"
#include <iostream>

//using namespace std;

int countLeapYears(Date d) {
	int years = d.y;

	if (d.m <= 2)
		years--;

	return years / 4 - years / 100 + years / 400;
}

int getDifference(Date dt1, Date dt2)
{
	long int n1 = dt1.y * 365 + dt1.d;

	for (int i = 0; i < dt1.m - 1; i++)
		n1 += monthDays[i];

	n1 += countLeapYears(dt1);


	long int n2 = dt2.y * 365 + dt2.d;
	for (int i = 0; i < dt2.m - 1; i++)
		n2 += monthDays[i];
	n2 += countLeapYears(dt2);

	return absolute((n2 - n1));
}

Date getStartDate()
{
	int d, m, y;
	cout << "Enter start (day, month, year): ";
	cin >> d >> m >> y;
	return Date(d, m, y);
}

Date getEndDate()
{
	int d, m, y;
	cout << "Enter end (day, month, year): ";
	cin >> d >> m >> y;
	return Date(d, m, y);
}

bool isLeap(Date dt)
{
	if (dt.y % 400 == 0 || (dt.y % 100 != 0 && dt.y % 4 == 0)) return true;
	else return false;
}

bool invalidDates(Date dt1, Date dt2)
{
		bool res = true;
		if (dt1.m > 12 || dt2.m > 12 || dt1.m < 1 || dt2.m < 1 || dt1.d < 1 || dt2.d < 1) res = false;

		else if (isLeap(dt1) && (dt1.d > (monthDaysLeap[dt1.m - 1]))) res = false;

		else if (isLeap(dt2) && (dt2.d > (monthDaysLeap[dt2.m - 1]))) res = false;

		else if (!isLeap(dt1) && dt1.d > monthDays[dt1.m - 1] || !isLeap(dt2) && dt2.d > monthDays[dt2.m - 1]) res = false;
		return res;	
}
