#include "Candidate.h"

Candidate::Candidate()
{
}
void Candidate::Nhap()
{
	cout << "Nhap Ma So Thi Sinh: ";
	cin >> MaSo;
	cin.ignore();
	cout << "Nhap Ho Va Ten: ";
	getline(cin, HoVaTen);
	do
	{
		cout << "Nhap Ngay Sinh: ";
		cin >> NgaySinh;
	} while (NgaySinh < 0 || NgaySinh>31);
	do
	{
		cout << "Nhap Thang Sinh: ";
		cin >> ThangSinh;
	} while (ThangSinh < 0 || ThangSinh > 12);
	do
	{
		cout << "Nhap Nam Sinh: ";
		cin >> NamSinh;
	} while (NamSinh < 0 || NamSinh>2020);
	do
	{
		cout << "Nhap Diem Toan: ";
		cin >> DiemToan;
	} while (DiemToan < 0 || DiemToan>10);
	do
	{
		cout << "Nhap Diem Van: ";
		cin >> DiemVan;
	} while (DiemVan < 0 || DiemVan>10);
	do
	{
		cout << "Nhap Diem Anh: ";
		cin >> DiemAnh;
	} while (DiemAnh < 0 || DiemAnh>10);

}
void Candidate::set_hoten()
{
	string hoten;
	getline(cin, hoten);
	HoVaTen = hoten;
}
void Candidate::set_maso()
{
	string maso;
	getline(cin, maso);
	MaSo = maso;
}
void Candidate::set_ngaysinh()
{
	int ngaysinh;
	cin >> ngaysinh;
	NgaySinh = ngaysinh;
}
void Candidate::set_thangsinh()
{
	int thangsinh;
	cin >> thangsinh;
	ThangSinh = thangsinh;
}
void Candidate::set_namsinh()
{
	int namsinh;
	cin >> namsinh;
	NamSinh = namsinh;
}
void Candidate::set_diemtoan()
{
	float diemtoan;
	cin >> diemtoan;
	DiemToan = diemtoan;
}
void Candidate::set_diemanh()
{
	float diemanh;
	cin >> diemanh;
	DiemAnh = diemanh;
}
void Candidate::set_diemvan()
{
	float diemvan;
	cin >> diemvan;
	DiemVan = diemvan;
}
float Candidate::TongDiem()
{
	return(DiemToan + DiemVan + DiemAnh);
}
void Candidate::Xuat()
{
	cout << "\nMa So: " << MaSo;
	cout << "\nHo va Ten: " << HoVaTen;
	cout << "\nSinh Ngay " << NgaySinh << " Thang " << ThangSinh << " Nam " << NamSinh;
	cout << "\nDiem Toan: " << DiemToan;
	cout << "\nDiem Van: " << DiemVan;
	cout << "\nDiem Anh: " << DiemVan;
	cout << "\nTong Diem: " << TongDiem();
}
string Candidate::get_hoten()
{
	return HoVaTen;
}
string Candidate::get_maso()
{
	return MaSo;
}
int Candidate::get_ngaysinh()
{
	return NgaySinh;
}
int Candidate::get_thangsinh()
{
	return ThangSinh;
}
int Candidate::get_namsinh()
{
	return NamSinh;
}
float Candidate::get_diemtoan()
{
	return DiemToan;
}
float Candidate::get_diemanh()
{
	return DiemAnh;
}
float Candidate::get_diemvan()
{
	return DiemVan;
}
Candidate::~Candidate()
{
}
