#include "DaThuc.h"

DaThuc::DaThuc(int bac)
{
	n = bac;
	DT = new int[n+1];
}

void DaThuc::Input()
{
	cout << "Bac cua da thuc la: "; cin >> n;
	for (int i = 0; i < n+1; i++) {
		cout << "Nhap he so thu " << i << ": ";
		cin >> DT[i];
	}
}

void DaThuc::Output()
{
	cout << "Da thuc la: ";
	for (int i = n; i >0; i--)
		cout << DT[i] << "x^"<< i << " + ";
	cout << DT[0] << endl;
}

DaThuc DaThuc::Plus(const DaThuc & DT2)
{
	int bmax = max(n, DT2.n);
	int dif = abs(n - DT2.n);
	DaThuc Sum(bmax);
	for (int i = 0; i <= bmax - dif; i++)
		Sum.DT[i] = DT[i] + DT2.DT[i];
	if (dif > 0)
		for (int i = bmax - dif + 1; i <= bmax; i++)
			if (n == bmax)
				Sum.DT[i] = DT[i];
			else
				Sum.DT[i] = DT2.DT[i];
	return Sum;
}

DaThuc DaThuc::Sub(DaThuc & DT2)
{
	for (int i = 0; i <= DT2.n; i++)
		DT2.DT[i] = -DT2.DT[i];
	return Plus(DT2);
}

DaThuc DaThuc::Multi(const DaThuc & DT2)
{
	DaThuc Mult(n+DT2.n);
	for (int i = 0; i <= n; i++) {
		for (int j = 0; j <= DT2.n; j++) {
			Mult.DT[i + j] = DT[i]*DT2.DT[j];
		}
	}
	return Mult;
}


DaThuc::~DaThuc()
{
	delete[] DT;
}
