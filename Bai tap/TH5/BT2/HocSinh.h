#include "Nguoi.h"

class HocSinh:public Nguoi
{
protected:
	float diemTB;
public:
	HocSinh();
	HocSinh(string hoTen, string noiSinh, Ngay ngaySinh, float diemTB):Nguoi(hoTen, noiSinh, ngaySinh){
		this->diemTB = diemTB;
	}
	void Input();
	void Output();
	~HocSinh();
};

