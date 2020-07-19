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
	void Input();
	Date* plus(int);
	Date* plus_plus();
	Date* sub(int);
	Date* sub_sub();
	void Output();
	bool isLeap(int);
	int Day_Of_Month();
	~Date();
};