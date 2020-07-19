#include "DaGiac.h"

DaGiac::DaGiac()
{
	n = 0;
	d = new Diem[n];
}

void DaGiac::Input()
{
	cout << "Nhap so dinh cua da giac: "; cin >> n;
	d = new Diem[n];
	for (int i = 0; i < n; i++)
	{
		cout << "Nhap toa do dinh thu " << i + 1 << ": ";
		d[i].Input();
	}
}

void DaGiac::Output()
{
	cout << "\n Toa do cac dinh cua da giac: ";
	for (int i = 0; i < n; i++)
		d[i].Output();
}

void DaGiac::TinhTien(float x, float y)
{
	cout << "\nTinh tien theo vector ( " << x << " , " << y << " ) :";
	for (int i = 0; i < n; i++)
		d[i].tinh_tien(x, y);
}

void DaGiac::Quay(float rad)
{
	cout << "\nThuc hien phep quay " << rad << " rad : ";
	for (int i = 0; i < n; i++)
		d[i].quay(rad);
}

void DaGiac::ThuPhong(float x)
{
	cout << "\nThuc hien phep thu phong theo ti le " << x <<":";
	for (int i = 0; i<n; i++)
		d[i].set_xy(d[i].get_x()*x, d[i].get_y()*x);
}

DaGiac::~DaGiac()
{
	delete [] d;
}
