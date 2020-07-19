#include"SoPhuc.h"
#include <conio.h>

int main()
{
	SoPhuc sp1, sp2, temp;
	sp1.Nhap();
	cout << "So Phuc Thu Nhat Da Nhap: ";
	sp1.Xuat();
	cout << endl;
	sp2.Nhap();
	cout << "So Phuc Thu Hai Da Nhap: ";
	sp2.Xuat();
	cout << endl;
	cout << "Tong Hai So Phuc: ";
	temp = sp1.Cong(sp2);
	temp.Xuat();
	cout << endl;
	cout << "Hieu Hai So Phuc: ";
	temp = sp1.Tru(sp2);
	temp.Xuat();
	cout << endl;
	cout << "Tich Hai So Phuc: ";
	temp = sp1.Nhan(sp2);
	temp.Xuat();
	cout << endl;
	cout << "Thuong Hai So Phuc: ";
	temp = sp1.Chia(sp2);
	temp.Xuat();
	_getch();
	return 0;
}