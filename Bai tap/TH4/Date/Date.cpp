#include "Date.h"

Date::Date(int dd, int mm, int yyyy)
{
	day = dd;
	month = mm;
	year = yyyy;
}

Date& Date::operator+(int p)
{
	while (p > 0)
	{
		if (this->day < this->Day_Of_Month())
			this->day++;
		else
		{
			this->day = 1;
			this->month++;
			if (this->month>12)
			{
				this->month = 1;
				this->year++;
			}
		}
		p--;
	}
	return (*this);
}

Date& Date::operator++()
{
	return (*this)+1;
}

Date& Date::operator-(int p)
{
	while (p > 0)
	{
		this->day--;
		if (this->day == 0)
		{
			this->month--;
			if (this->month == 0)
			{
				this->month = 12;
				this->year--;
			}
			this->day = this->Day_Of_Month();
		}
		p--;
	}
	return (*this);
}

Date& Date::operator--()
{
	return (*this)-1;
}

int Date::operator-(const Date& D)
{
	Date x = D;
    int i = 0;
    if(this->year == x.year)
    {
        if(this->month == x.month)
        {
            i = abs(this->day - x.day);
        }
        else if(this->month > x.month)
        {
            while(true)
            {
				if (this->day == x.day && this->month == x.month)
					break;
                x = x+1;
                i++;
            }
        }
        else
        {
            while(true)
            {
				if (this->day == x.day && this->month == x.month)
					break;
                x = x-1;
                i++;
            }
        }
    }
    else if(this->year > x.year)
    {
        while(true)
        {
			if (this->day == x.day && this->month == x.month && this->year == x.year)
				break;
            x = x+1;
            i++;
        }
    }
    else
    {
        while(true)
        {
			if (this->day == x.day && this->month == x.month && this->year == x.year)
				break;
            x = x-1;
            i++;
        }
    }
    return i;
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