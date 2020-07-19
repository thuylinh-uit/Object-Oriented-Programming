#include "Ngay.h"
#include <string>

class Nguoi
{
protected:
	string hoTen, noiSinh;
	Ngay ngaySinh;
public:
	Nguoi();
	Nguoi(string hoTen, string noiSinh, Ngay ngaySinh);
	void Input();
	void Output();
	~Nguoi();
};