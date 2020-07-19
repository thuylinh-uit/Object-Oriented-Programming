#include "Date.h"
#include <stdio.h>

istream& operator>>(istream &is, Date &d)
{
	cout << "Nhap ngay: ";
	is >> d.day;
	cout << "Nhap thang: ";
	is >> d.month;
	cout << "Nhap nam: ";
	is >> d.year;
	return is;
}

ostream& operator<<(ostream &os, const Date& d)
{
	cout << d.day << "/" << d.month << "/" << d.year << endl;
	return os;
}

int main()
{
	Date c, d;
	cin >> c >> d;
	
	cout << (c+1);
	cout << (c-1);
	cout << (c+10);
	cout << (c-10);
	cout << (c - d) << endl;
	
	system("pause");
	return 0;
}