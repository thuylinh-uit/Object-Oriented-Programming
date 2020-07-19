#pragma once
#include <iostream>
#include <string>
using namespace std;

class PhiThuyen
{
protected:
	string loaiPT;
	int alpha;
public:
	PhiThuyen();
	virtual int tieuThuNL(int T) = 0;
	void xuat();
	~PhiThuyen();
};

