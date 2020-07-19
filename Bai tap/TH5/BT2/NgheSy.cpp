#include "NgheSy.h"


NgheSy::NgheSy()
{
}

void NgheSy::Input()
{
	Nguoi::Input();
	cout << "Nhap nghe danh: ";
	getline(cin, ngheDanh);
}

void NgheSy::Output()
{
	Nguoi::Output();
	cout << ngheDanh << endl;
}

NgheSy::~NgheSy()
{
}
