#pragma once
#include<iostream>
using namespace std;

class Date
{
private:
	int day;
	int month;
	int year;
public:
	Date(int dd=1, int mm=1, int yyyy=2020);
	Date& operator+(int);
	Date& operator++();
	Date& operator-(int);
	Date& operator--();
	int operator-(const Date& D);
	bool isLeap(int);
	int Day_Of_Month();
	~Date();
	
	friend istream& operator>>(istream &is, Date &d);
    friend ostream& operator<<(ostream &os, const Date& d);
};