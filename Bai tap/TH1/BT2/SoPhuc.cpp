#include "SoPhuc.h"

SoPhuc::SoPhuc() {}
void SoPhuc::Nhap()
{
	cout << "Nhap So Phuc: " << endl;
	cout << " - Nhap Phan Thuc: ";
	cin >> PhanThuc;
	cout << " - Nhap Phan Ao: ";
	cin >> PhanAo;
}
void SoPhuc::Xuat()
{
	if (PhanAo > 0)
		cout << PhanThuc << "+" << PhanAo << "i";
	else
		cout << PhanThuc << PhanAo << "i";
}
void SoPhuc::set_phanthuc()
{
	float pt;
	cin >> pt;
	PhanThuc = pt;
}
void SoPhuc::set_phanao()
{
	float pa;
	cin >> pa;
	PhanAo = pa;
}
float SoPhuc::get_phanthuc()
{
	return PhanThuc;
}

float SoPhuc::get_phanao()
{
	return PhanAo;
}
SoPhuc SoPhuc::Cong(SoPhuc sp)
{
	SoPhuc temp;
	temp.PhanThuc = PhanThuc + sp.PhanThuc;
	temp.PhanAo = PhanAo + sp.PhanAo;
	return temp;
}
SoPhuc SoPhuc::Tru(SoPhuc sp)
{
	SoPhuc temp;
	temp.PhanThuc = PhanThuc - sp.PhanThuc;
	temp.PhanAo = PhanAo - sp.PhanAo;
	return temp;
}
SoPhuc SoPhuc::Nhan(SoPhuc sp)
{
	SoPhuc temp;
	temp.PhanThuc = (PhanThuc*sp.PhanThuc) - (PhanAo*sp.PhanAo);
	temp.PhanAo = (PhanThuc*sp.PhanAo) + (sp.PhanAo*PhanThuc);
	return temp;
}
SoPhuc SoPhuc::Chia(SoPhuc sp)
{
	SoPhuc temp;
	temp.PhanThuc = (sp.PhanThuc*PhanThuc + sp.PhanAo*PhanAo) / ((pow(sp.PhanThuc, 2) + pow(sp.PhanAo, 2)));
	temp.PhanAo = (sp.PhanThuc*PhanAo - sp.PhanAo*PhanThuc) / ((pow(sp.PhanThuc, 2) + pow(sp.PhanAo, 2)));
	return temp;
}
SoPhuc::~SoPhuc() {}