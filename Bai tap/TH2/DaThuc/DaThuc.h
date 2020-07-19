#pragma once
#include <iostream>
#include <algorithm>
#include <cstdlib>
using namespace std;

class DaThuc
{
	int n;
	int *DT;
public:
	DaThuc(int bac = 0);
	void Input();
	void Output();
	DaThuc Plus(const DaThuc &);
	DaThuc Sub(DaThuc &);
	DaThuc Multi(const DaThuc &);
	~DaThuc();
};

