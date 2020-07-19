#include "Nguoi.h"

class SinhVien :public Nguoi
{
protected:
	string MSSV, chuyenNganh;
public:
	SinhVien();
	SinhVien(string hoTen, string noiSinh, Ngay ngaySinh, string MSSV, string chuyenNganh) :Nguoi(hoTen, noiSinh, ngaySinh) {
		this->MSSV = MSSV;
		this->chuyenNganh = chuyenNganh;
	}
	void Input();
	void Output();
	~SinhVien();
};

