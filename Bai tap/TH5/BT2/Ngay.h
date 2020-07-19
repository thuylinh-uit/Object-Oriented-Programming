#pragma once
#include<iostream>
using namespace std;

class Ngay
{
private:
	int day;
	int month;
	int year;
public:
	Ngay(int dd = 1, int mm = 1, int yyyy = 2020);
	void Input();
	void Output();
	~Ngay();
};