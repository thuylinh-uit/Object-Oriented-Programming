#pragma once
#include<iostream>
#include<string>
using namespace std;

class Candidate
{
protected:
	string HoVaTen;
	string MaSo;
	int NgaySinh, ThangSinh, NamSinh;
	float DiemToan, DiemAnh, DiemVan;
public:
	Candidate();
	void Nhap();
	void set_hoten();
	void set_maso();
	void set_ngaysinh();
	void set_thangsinh();
	void set_namsinh();
	void set_diemtoan();
	void set_diemanh();
	void set_diemvan();
	string get_hoten();
	string get_maso();
	int get_ngaysinh();
	int get_thangsinh();
	int get_namsinh();
	float get_diemtoan();
	float get_diemanh();
	float get_diemvan();
	float TongDiem();
	void Xuat();
	~Candidate();
};