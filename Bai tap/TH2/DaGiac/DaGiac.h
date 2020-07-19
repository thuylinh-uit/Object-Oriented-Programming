#pragma once
#include "Diem.h"

class DaGiac
{
	int n;
	Diem* d;
public:
	DaGiac();
	void Input();
	void Output();
	void TinhTien(float, float);
	void Quay(float);
	void ThuPhong(float);
	~DaGiac(void);
};