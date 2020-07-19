#pragma once
#include "PhiThuyen.h"

class Apollo:public PhiThuyen
{
private:
	int N;
public:
	Apollo();
	int tieuThuNL(int T);
	void xuat(int T);
	~Apollo();
};

