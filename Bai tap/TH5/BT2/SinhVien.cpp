#include "SinhVien.h"


SinhVien::SinhVien()
{
}

void SinhVien::Input()
{
	Nguoi::Input();
	cout << "Nhap MSSV: ";
	getline(cin, MSSV);
	cout << "Nhap chuyen nganh: ";
	getline(cin, chuyenNganh);
}

void SinhVien::Output()
{
	Nguoi::Output();
	cout << MSSV << endl << chuyenNganh << endl;
}

SinhVien::~SinhVien()
{
}
