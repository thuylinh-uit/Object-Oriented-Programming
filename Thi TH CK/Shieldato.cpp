#include "Shieldato.h"




Shieldato::Shieldato()
{
	this->loaiPT = "Bao ve Apollo va Rocketo";
	this->alpha = 20;
	this->R = 5 + rand() % 26;
}

int Shieldato::tieuThuNL(int T)
{
	return alpha*T + 2*R*T;
}

void Shieldato::xuat(int T)
{
	PhiThuyen::xuat();
	cout << "Ban kinh: " << R << endl;
	cout << "So nhien lieu tieu thu: " << tieuThuNL(T) << endl;
}

Shieldato::~Shieldato()
{
}
