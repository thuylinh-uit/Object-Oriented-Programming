#include "CongNhan.h"


CongNhan::CongNhan()
{
}

void CongNhan::Input()
{
	Nguoi::Input();
	cout << "Nhap MS: ";
	getline(cin, MS);
	cout << "Nhap luong: ";
	getline(cin, luong);
}

void CongNhan::Output()
{
	Nguoi::Output();
	cout << MS << endl << luong << endl;
}

CongNhan::~CongNhan()
{
}
