#include "HinhThang.h"

class HinhBinhHanh:public HinhThang
{
public:
	HinhBinhHanh(){}
	HinhBinhHanh(Diem A, Diem B, Diem C, Diem D):HinhThang(A, B, C, D) {}
	void Input();
	void TinhChat();
	bool isValid();
	~HinhBinhHanh();
};

