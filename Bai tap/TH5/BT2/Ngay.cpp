#include "Ngay.h"

Ngay::Ngay(int dd, int mm, int yyyy)
{
	day = dd;
	month = mm;
	year = yyyy;
}

void Ngay::Input()
{
	cout << "- ngay: ";
	cin >> day;
	cout << "- thang: ";
	cin >> month;
	cout << "- nam: ";
	cin >> year;
}

void Ngay::Output()
{
	cout << day << "/" << month << "/" << year << endl;
}


Ngay::~Ngay() {}