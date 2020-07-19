#include "TimeSpan.h"


void TimeSpan::input()
{
	cout << "Nhap so giay: "; cin >> sec;
}

TimeSpan TimeSpan::plus(const TimeSpan &s)
{
	sec += s.sec;
	return *this;
}

TimeSpan TimeSpan::sub(const TimeSpan &s)
{
	sec -= s.sec;
	return *this;
}

int TimeSpan::equal_equal(const TimeSpan &s)
{
	if (sec == s.sec)
		return 1;
	return 0;
}

int TimeSpan::bigger(const TimeSpan &s)
{
	if (sec > s.sec)
		return 1;
	return 0;
}

int TimeSpan::smaller(const TimeSpan &s)
{
	if (sec < s.sec)
		return 1;
	return 0;
}

int TimeSpan::not_equal(const TimeSpan &s)
{
	if (sec != s.sec)
		return 1;
	return 0;
}

int TimeSpan::bigger_or_equal(const TimeSpan &s)
{
	if (sec >= s.sec)
		return 1;
	return 0;
}

int TimeSpan::smaller_or_equal(const TimeSpan &s)
{
	if (sec <= s.sec)
		return 1;
	return 0;
}

TimeSpan TimeSpan::plus_plus()
{
	sec++;
	return *this;
}

TimeSpan TimeSpan::sub_sub()
{
	sec--;
	return *this;
}

void TimeSpan::output()
{
	int s, m, h;
	h = get_hrs(sec);
	m = get_min(sec - h*3600);
	s = sec - h * 3600 - m * 60;
	cout << "TimeSpan = " << h << "h " << m << "m " << s << "s" << endl;
}

TimeSpan::~TimeSpan()
{
}
