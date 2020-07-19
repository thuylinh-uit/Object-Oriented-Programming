#pragma once
#include<iostream>
using namespace std;

class SoPhuc
{
	float PhanThuc;
	float PhanAo;

public:
	SoPhuc();
	void Nhap();
	void Xuat();
	void set_phanthuc();
	void set_phanao();
	float get_phanthuc();
	float get_phanao();
	SoPhuc Cong(SoPhuc);
	SoPhuc Tru(SoPhuc);
	SoPhuc Nhan(SoPhuc);
	SoPhuc Chia(SoPhuc);
	~SoPhuc();
};