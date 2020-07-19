#pragma once
#include<iostream>
using namespace std;

class TimeSpan
{
private:
	int sec;
public:
	TimeSpan(int s = 0) { sec = s; };
	void input();
	int set(const int &s) { sec = s; };
	int get() { return sec; };
	int get_min(int s) { return int(s / 60); };
	int get_hrs(int s) { return int(s / 3600); };
	TimeSpan plus(const TimeSpan&);
	TimeSpan sub(const TimeSpan&);
	int equal_equal(const TimeSpan&);
	int bigger(const TimeSpan&);
	int smaller(const TimeSpan&);
	int not_equal(const TimeSpan&);
	int bigger_or_equal(const TimeSpan&);
	int smaller_or_equal(const TimeSpan&);
	TimeSpan plus_plus();
	TimeSpan sub_sub();
	void output();
	~TimeSpan();
};

