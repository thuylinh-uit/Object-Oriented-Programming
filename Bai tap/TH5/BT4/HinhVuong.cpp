#include "HinhVuong.h"



bool HinhVuong::isValid()
{
	bool dk1 = HinhChuNhat::isValid();
	float AB = B.get_x() - A.get_x();
	float AD = A.get_y() - D.get_y();
	bool dk2 = (AB == AD);
	return (dk1 && dk2);
}

void HinhVuong::Input()
{
	while (true) {
		HinhChuNhat::Input();
		if (isValid())
			break;
	}
}

void HinhVuong::TinhChat()
{
	cout << "Hinh vuong la hinh chu nhat co 2 canh ke bang nhau" << endl;
}


HinhVuong::~HinhVuong()
{
}
