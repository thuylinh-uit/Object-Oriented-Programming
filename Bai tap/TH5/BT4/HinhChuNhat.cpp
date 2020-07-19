#include "HinhChuNhat.h"



bool HinhChuNhat::isValid()
{
	bool dk1 = HinhBinhHanh::isValid();
	bool dk2 = (A.get_x() == D.get_x());
	return (dk1 && dk2);
}

void HinhChuNhat::Input()
{
	while (true) {
		HinhBinhHanh::Input();
		if (isValid())
			break;
	}
}

void HinhChuNhat::TinhChat()
{
	cout << "Hinh chu nhat la hinh binh hanh co mot goc vuong" << endl;
}


HinhChuNhat::~HinhChuNhat()
{
}
