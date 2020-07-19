#include "TramKhongGian.h"



TramKhongGian::TramKhongGian(int A, int B, int C)
{
	pA = new Apollo[A];
	pR = new Rocketo[B];
	pS = new Shieldato[C];
}

void TramKhongGian::nhap()
{
	cout << "Nhap so Apollo: ";
	cin >> A;
	cout << "Nhap so Rocketo: ";
	cin >> B;
	cout << "Nhap so Shieldato: ";
	cin >> C;
	pA = new Apollo[A];
	pR = new Rocketo[B];
	pS = new Shieldato[C];
}

int TramKhongGian::tongNhienLieu(int T)
{
	int sum = 0;
	for (int i = 0; i < A; i++)
		sum += pA[i].tieuThuNL(T);
	for (int i = 0; i < B; i++)
		sum += pR[i].tieuThuNL(T);
	for (int i = 0; i < C; i++)
		sum += pS[i].tieuThuNL(T);
	return sum;
}

void TramKhongGian::xuat(int T)
{
	for (int i = 0; i < A; i++) {
		cout << "\nApollo " << i + 1 << ":" << endl;
		pA[i].xuat(T);
	}
	for (int i = 0; i < B; i++) {
		cout << "\nRocketo " << i + 1 << ":"<<endl;
		pR[i].xuat(T);
	}
	for (int i = 0; i < C; i++) {
		cout << "\nShieldato " << i + 1 << ":"<<endl;
		pS[i].xuat(T);
	}
	cout << "\nTong so nhien lieu = " << tongNhienLieu(T) << endl;
}

TramKhongGian::~TramKhongGian()
{
	delete[]pA;
	delete[]pR;
	delete[]pS;
}
