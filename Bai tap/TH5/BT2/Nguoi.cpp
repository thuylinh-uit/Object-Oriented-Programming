#include "Nguoi.h"



Nguoi::Nguoi()
{
}

Nguoi::Nguoi(string hoTen, string noiSinh, Ngay ngaySinh)
{
	this->hoTen = hoTen;
	this->noiSinh = noiSinh;
	this->ngaySinh = ngaySinh;
}

void Nguoi::Input()
{
	cin.ignore(0);
	cout << "Nhap ho ten: ";
	getline(cin, hoTen);
	cout << "Nhap ngay sinh: "<<endl;
	ngaySinh.Input();
	cin.ignore(1);
	cout << "Nhap noi sinh: ";
	getline(cin, noiSinh);
}

void Nguoi::Output()
{
	cout << hoTen << endl;
	ngaySinh.Output();
	cout << noiSinh << endl;
}


Nguoi::~Nguoi()
{
}
