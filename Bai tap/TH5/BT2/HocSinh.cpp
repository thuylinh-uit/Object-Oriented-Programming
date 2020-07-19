#include "HocSinh.h"



HocSinh::HocSinh()
{
}

void HocSinh::Input()
{
	Nguoi::Input();
	cout << "Nhap diem trung binh: ";
	cin >> diemTB;
}

void HocSinh::Output()
{
	Nguoi::Output();
	cout << diemTB << endl;
}

HocSinh::~HocSinh()
{
}
