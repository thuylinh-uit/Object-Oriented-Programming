#include "Nguoi.h"

class CongNhan :public Nguoi
{
protected:
	string MS, luong;
public:
	CongNhan();
	CongNhan(string hoTen, string noiSinh, Ngay ngaySinh, string MS, string luong) 
		:Nguoi(hoTen, noiSinh, ngaySinh) {
		this->MS = MS;
		this->luong = luong;
	}
	void Input();
	void Output();
	~CongNhan();
};

