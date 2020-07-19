#include "NongTrai.h"



NongTrai::NongTrai(int b, int c, int d )
{
	this->b = b;
	this->c = c;
	this->d = d;
	chuongBo = new Bo[b];
	chuongCuu = new Cuu[c];
	chuongDe = new De[d];
}

void NongTrai::Nhap()
{
	cout << "So luong Bo ban dau: "; cin >> b;
	cout << "So luong Cuu ban dau: "; cin >> c;
	cout << "So luong De ban dau: "; cin >> d;
	chuongBo = new Bo[b];
	chuongCuu = new Cuu[c];
	chuongDe = new De[d];
}

void NongTrai::Xuat()
{
	if (b != 0)
		chuongBo[0].get_tiengKeu();
	if (c != 0)
		chuongCuu[0].get_tiengKeu();
	if (d != 0)
		chuongDe[0].get_tiengKeu();

	cout << "Thong ke: " << endl;
	int tongLitSua = 0;

	int soBo = b;
	for (int i = 0; i < b; i++) {
		soBo += chuongBo[i].get_soCon();
		tongLitSua += chuongBo[i].get_soLuongSua();
	}
	cout << "So Bo hien tai = " << soBo << endl;
	
	int soCuu = c;
	for (int i = 0; i < c; i++) {
		soCuu += chuongCuu[i].get_soCon();
		tongLitSua += chuongCuu[i].get_soLuongSua();
	}
	cout << "So Cuu hien tai = " << soCuu << endl;

	int soDe = d;
	for (int i = 0; i < d; i++) {
		soDe += chuongDe[i].get_soCon();
		tongLitSua += chuongDe[i].get_soLuongSua();
	}
	cout << "So De hien tai = " << soDe << endl;
	
	cout << "Tong so lit sua = " << tongLitSua << endl;
}


NongTrai::~NongTrai()
{
	delete[] chuongBo;
	delete[] chuongDe;
	delete[] chuongCuu;
}
