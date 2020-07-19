#include "Date.h"

Date::Date(int dd, int mm, int yyyy)
{
	day = dd;
	month = mm;
	year = yyyy;
}

void Date::Input()
{
	cout << "Nhap ngay: ";
	cin >> day;
	cout << "Nhap thang: ";
	cin >> month;
	cout << "Nhap nam: ";
	cin >> year;
}

Date* Date::plus(int p)
{
	Date *x = new Date(*this);
	while (p > 0)
	{
		if (x->day < x->Day_Of_Month())
			x->day++;
		else
		{
			x->day = 1;
			x->month++;
			if (x->month>12)
			{
				x->month = 1;
				x->year++;
			}
		}
		p--;
	}
	return x;
}

Date* Date::plus_plus()
{
	Date* x = new Date(*this);
	return x->plus(1);
}

Date* Date::sub(int p)
{
	Date* x = new Date(*this);
	while (p > 0)
	{
		x->day--;
		if (x->day == 0)
		{
			x->month--;
			if (x->month == 0)
			{
				x->month = 12;
				x->year--;
			}
			x->day = x->Day_Of_Month();
		}
		p--;
	}
	return x;
}

Date* Date::sub_sub()
{
	Date* x = new Date(*this);
	return x->sub(1);
}


void Date::Output()
{
	cout << day << "/" << month << "/" << year << endl;
}

bool Date::isLeap(int yyyy)
{
	return (((yyyy % 4 == 0) && (yyyy % 100 != 0)) || (yyyy % 400 == 0));
}

int Date::Day_Of_Month()
{
	switch (month)
	{
	case 1: return 31;
	case 2:
	{
		if (isLeap(year)) return 29;
		return 28;
	}
	case 3:return 31;
	case 4:return 30;
	case 5:return 31;
	case 6:return 30;
	case 7:return 31;
	case 8:return 31;
	case 9:return 30;
	case 10:return 31;
	case 11:return 30;
	case 12:return 31;
	}
}

Date::~Date() {}