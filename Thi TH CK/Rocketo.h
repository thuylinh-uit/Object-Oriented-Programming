#pragma once
#include "PhiThuyen.h"

class Rocketo:public PhiThuyen
{
private:
	int M;
public:
	Rocketo();
	int tieuThuNL(int T);
	void xuat(int T);
	~Rocketo();
};

