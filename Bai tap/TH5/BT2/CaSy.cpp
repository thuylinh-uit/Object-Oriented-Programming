#include "CaSy.h"


CaSy::CaSy()
{
}

void CaSy::Input()
{
	NgheSy::Input();
	cout << "Nhap the loai: ";
	getline(cin, theLoai);
	cout << "Nhap album debut: ";
	getline(cin, debutAlbum);
}

void CaSy::Output()
{
	NgheSy::Output();
	cout << theLoai << endl << debutAlbum << endl;
}

CaSy::~CaSy()
{
}
