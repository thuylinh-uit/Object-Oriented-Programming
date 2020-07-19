#pragma once
#include "PhiThuyen.h"

class Shieldato: public PhiThuyen
{
private:
	int R;
public:
	Shieldato();
	int tieuThuNL(int T);
	void xuat(int T);
	~Shieldato();
};

