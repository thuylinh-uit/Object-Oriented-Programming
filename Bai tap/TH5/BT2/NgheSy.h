#include "Nguoi.h"

class NgheSy :public Nguoi
{
protected:
	string ngheDanh;
public:
	NgheSy();
	NgheSy(string hoTen, string noiSinh, Ngay ngaySinh, string ngheDanh) :Nguoi(hoTen, noiSinh, ngaySinh) {
		this->ngheDanh = ngheDanh;
	}
	void Input();
	void Output();
	~NgheSy();
};

