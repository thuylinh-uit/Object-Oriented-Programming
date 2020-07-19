#include "GiaSuc.h"



GiaSuc::GiaSuc(int soCon)
{
	this->soCon = soCon;
}

int GiaSuc::get_soCon()
{
	return soCon;
}

string GiaSuc::get_tiengKeu()
{
	return tiengKeu;
}

int GiaSuc::get_soLuongSua()
{
	return soLuongSua;
}

void GiaSuc::Xuat()
{
	cout << "So luong con sinh ra: " << soCon << endl;
	cout << "So lit sua: " << soLuongSua << endl;
	cout << "Tieng keu: " << tiengKeu;
}

GiaSuc::~GiaSuc()
{}
