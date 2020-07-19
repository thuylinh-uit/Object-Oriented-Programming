#include "TestCandidate.h"

TestCandidate::TestCandidate()
{
}
void TestCandidate::NhapDanhSachThiSinh()
{
	cout << "Nhap So Luong Thi Sinh: ";
	cin >> n;
	cout << endl;

	for (int i = 0; i < n; i++)
	{
		a[i].Nhap();
		cout << endl;
	}
}
void TestCandidate::XuatDanhSachThiSinh()
{
	cout << "Danh sach thi sinh co tong diem > 15 la: " << endl;
	for (int i = 0; i < n; i++)
	{
		if (a[i].TongDiem() > 15)
			a[i].Xuat();
		cout << endl;
	}
}
TestCandidate::~TestCandidate()
{
}