#include "TuGiac.h"



TuGiac::TuGiac()
{
}

TuGiac::TuGiac(Diem A, Diem B, Diem C, Diem D)
{
	this->A = A;
	this->B = B;
	this->C = C;
	this->D = D;
}

bool TuGiac::isValid()
{
	float x_AC = C.get_x() - A.get_x();
	float y_AC = C.get_y() - A.get_y();
	float x_DB = B.get_x() - D.get_x();
	float y_DB = B.get_y() - D.get_y();
	float AC = sqrt(pow(x_AC, 2) + pow(y_AC, 2));
	float BD = sqrt(pow(x_DB, 2) + pow(x_DB, 2));
	bool dk1 = (((x_AC*x_DB + y_AC * y_DB) / (AC*BD)) != 1);
	bool dk2 = (A.get_x() < B.get_x());
	bool dk3 = (D.get_x() < C.get_x());
	return (dk1 && dk2 && dk3);
}

void TuGiac::Input()
{
	while (true) {
		A.Input();
		B.Input();
		C.Input();
		D.Input();
		if (isValid())
			break;
	}
}

void TuGiac::TinhChat()
{
	cout << "Tu giac la hinh co 4 dinh va 4 canh" << endl;
}

TuGiac::~TuGiac()
{
}

