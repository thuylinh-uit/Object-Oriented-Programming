#pragma once
#include "Apollo.h"
#include "Rocketo.h"
#include"Shieldato.h"

class TramKhongGian
{
private:
	int A, B, C;
	Apollo* pA;
	Rocketo* pR;
	Shieldato* pS;
public:
	TramKhongGian(int A = 1, int B=1, int C=1);
	void nhap();
	int tongNhienLieu(int T);
	void xuat(int T);
	~TramKhongGian();
};

