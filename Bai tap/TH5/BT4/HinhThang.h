#include "TuGiac.h"

class HinhThang: public TuGiac
{

public:
	HinhThang(){}
	HinhThang(Diem A, Diem B, Diem C, Diem D) :TuGiac(A, B, C, D) {}
	bool isValid();
	void Input();
	void TinhChat();
	float DienTich();
	~HinhThang();
};

