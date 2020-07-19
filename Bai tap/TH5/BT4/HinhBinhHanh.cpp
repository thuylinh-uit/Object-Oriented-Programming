#include "HinhBinhHanh.h"



void HinhBinhHanh::Input()
{
	while (true) {
		HinhThang::Input();
		if (isValid())
			break;
	}
}

void HinhBinhHanh::TinhChat()
{
	cout << "Hinh binh hanh la hinh thang co hai day bang nhau" << endl;
}

bool HinhBinhHanh::isValid()
{
	bool dk1 = HinhThang::isValid();
	float AB = B.get_x() - A.get_x();
	float CD = C.get_x() - D.get_x();
	bool dk2 = (AB == CD);
	return (dk1 && dk2);
}


HinhBinhHanh::~HinhBinhHanh()
{
}
