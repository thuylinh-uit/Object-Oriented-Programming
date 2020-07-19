#include <iostream>
#include <string>
#include <conio.h>
using namespace std;

struct hocsinh{
	string hoten;
	float diemtoan, diemvan;
};

void input(hocsinh &);
float diemTB(hocsinh);

int main(){
	hocsinh h;
	input(h);
	cout << "Diem trung binh la: " << diemTB(h) << endl;
	_getch();
	return 0;
}

void input(hocsinh &x) {
	cout << "Nhap ho ten: "; getline(cin, x.hoten);
	cout << "Nhap diem toan: "; cin >> x.diemtoan;
	cout << "Nhap diem van: "; cin >> x.diemvan;
}

float diemTB(hocsinh x) {
	return (x.diemtoan + x.diemvan) / 2;
}