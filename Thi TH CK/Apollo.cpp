#include "Apollo.h"


Apollo::Apollo()
{
	this->alpha = 10;
	this->loaiPT = "Van chuyen chuyen cho";
	this->N = 15 + rand() % 16;
}

int Apollo::tieuThuNL(int T)
{
	return (alpha + N) * T;
}

void Apollo::xuat(int T)
{
	PhiThuyen::xuat();
	cout << "So luong nguoi: " << N << endl;
	cout << "So nhien lieu tieu thu: " << tieuThuNL(T) << endl;
}

Apollo::~Apollo()
{
}
