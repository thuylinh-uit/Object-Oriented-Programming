#pragma once
#include<iostream>
#include<ctime>
#include<string>
using namespace std;

class GiaSuc
{
protected:
	int soCon, soLuongSua;
	string tiengKeu;
public:
	GiaSuc(int soCon = rand() % 10);
	int get_soCon();
	string get_tiengKeu();
	int get_soLuongSua();
	void Xuat();
	~GiaSuc();
};