#include "Rocketo.h"




Rocketo::Rocketo()
{
	this->loaiPT = "Phan luc tan cong";
	this->alpha = 30;
	this->M = 2 + rand() % 4;
}

int Rocketo::tieuThuNL(int T)
{
	return alpha*T + M*M*T;
}

void Rocketo::xuat(int T)
{
	PhiThuyen::xuat();
	cout << "Hoa luc: " << M << endl;
	cout << "So nhien lieu tieu thu: " << tieuThuNL(T) << endl;
}

Rocketo::~Rocketo()
{
}
