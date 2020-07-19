#include "HinhVuong.h"

int main() {
	//Diem A(2, 4), B(4, 4), C(4, 2), D(2, 2);
	//HinhVuong HV(A, B, C, D);
	HinhVuong HV;
	HV.Input();
	HV.TinhChat();
	cout << "Dien tich = " << HV.DienTich() <<endl;
	system("pause");
	return 0;
}