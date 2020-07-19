#include "HinhChuNhat.h"

class HinhVuong: public HinhChuNhat
{
public:
	HinhVuong(){}
	HinhVuong(Diem A, Diem B, Diem C, Diem D):HinhChuNhat(A, B, C, D) {}
	bool isValid();
	void Input();
	void TinhChat();
	~HinhVuong();
};

