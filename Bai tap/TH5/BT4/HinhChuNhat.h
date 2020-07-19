#include "HinhBinhHanh.h"

class HinhChuNhat:public HinhBinhHanh
{
public:
	HinhChuNhat(){}
	HinhChuNhat(Diem A, Diem B, Diem C, Diem D):HinhBinhHanh(A, B, C, D){}
	bool isValid();
	void Input();
	void TinhChat();
	~HinhChuNhat();
};

