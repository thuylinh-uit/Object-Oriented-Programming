#include "HinhThang.h"



bool HinhThang::isValid()
{
	bool dk1 = TuGiac::isValid();
	bool dk2 = (A.get_y() == B.get_y());
	bool dk3 = (D.get_y() == C.get_y());
	return (dk1 && dk2 && dk3);
}

void HinhThang::Input()
{
	while (true) {
		TuGiac::Input();
		if (isValid())
			break;
	}
}

void HinhThang::TinhChat()
{
	cout << "Hinh thang la tu giac co it nhat mot cap canh doi //" << endl;
}


float HinhThang::DienTich()
{
	float h = A.get_y() - D.get_y();
	float a = B.get_x() - A.get_x();
	float b = C.get_x() - D.get_x();
	return (a+b)*h/2;
}

HinhThang::~HinhThang()
{
}
