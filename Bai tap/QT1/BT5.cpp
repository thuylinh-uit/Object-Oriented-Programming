#include <iostream>
#include <conio.h>
using namespace std;

struct nhanvien {
	char maNV[8];
	char hoten[20];
	char phongban[10];
	int luongCB, thuong, thuclanh;
};

void input(nhanvien &);
void output(nhanvien);
void inputList(nhanvien *, int);
void outputList(nhanvien *, int);
int task_a(nhanvien *, int);
int findMin(nhanvien *, int);
void task_b(nhanvien *, int);
int task_c(nhanvien *, int);
void swap(nhanvien &, nhanvien &);
nhanvien* sort(nhanvien *, int);
void task_d(nhanvien *, int);


int main() {
	int n;
	cout << "Nhap so nhan vien: "; cin >> n;
	nhanvien *list = new nhanvien[n];
	inputList(list, n);
	cout <<"a) Tong thuc lanh = "<<task_a(list, n)<<endl<<endl;
	cout << "b) Danh sach nhan vien co muc luongCB thap nhat:" << endl; task_b(list, n); cout << endl;
	cout <<"c) So luong nhan vien co muc thuong > 1.200.000 la: "<<task_c(list, n)<<endl << endl;
	cout << "d) Danh sach nhan vien tang dan theo phong ban: " << endl; task_d(list, n); cout << endl;
	_getch();
	return 0;
}

void input(nhanvien &x) {
	cout << "Nhap ma nhan vien: "; gets_s(x.maNV, 9);
	cout << "Nhap ho ten: "; gets_s(x.hoten, 20);
	cout << "Nhap phong ban: "; gets_s(x.phongban, 10);
	cout << "Nhap luong co ban: "; cin >> x.luongCB;
	cout << "Nhap thuong: "; cin >> x.thuong;
	x.thuclanh = x.luongCB + x.thuong;
}

void output(nhanvien x) {
	cout << "MaNV = " << x.maNV << endl;
	cout << "hoten = " << x.hoten << endl;
	cout << "phongban = " << x.phongban << endl;
	cout << "luongCB = " << x.luongCB << endl;
	cout << "thuong = " << x.thuong << endl;
	cout << "thuclanh = " << x.thuclanh << endl;
}

void inputList(nhanvien *list, int n) {
	cin.ignore();
	for (int i = 0; i < n; i++)
	{
		cout << i + 1 << "." << endl;
		input(list[i]);
		cin.ignore();
	}
	cout << "---" << endl;
}

void outputList(nhanvien *list, int n) {
	for (int i = 0; i < n; i++) {
		cout << i + 1 << "." << endl;
		output(list[i]);
	}
}

int task_a(nhanvien * list, int n) {
	int thuclanh = 0;
	for (int i = 0; i < n; i++) {
		thuclanh += list[i].thuclanh;
	}
	return thuclanh;
}

int findMin(nhanvien *list, int n) {
	int min = list[0].luongCB;
	for (int i = 1; i < n; i++) {
		if (list[i].luongCB < min) {
			min = list[i].luongCB;
		}
	}
	return min;
}

void task_b(nhanvien *list, int n) {
	int min = findMin(list, n);
	int thutu = 0;
	for (int i = 0; i < n; i++) {
		if (list[i].luongCB == min) {
			thutu++;
			cout << thutu << "." << endl;
			output(list[i]);
		}
	}
}

int task_c(nhanvien *list, int n) {
	int count = 0;
	for (int i = 0; i < n; i++) {
		if (list[i].thuong >= 1200000) {
			count++;
		}
	}
	return count;
}

void swap(nhanvien &x, nhanvien &y) {
	nhanvien t = x;
	x = y;
	y = t;
}

nhanvien* sort(nhanvien *list, int n) {
	nhanvien *temp = list;
	for (int i = 0; i < n - 1; i++) {
		for (int j = i + 1; j < n; j++) {
			if (temp[i].phongban > temp[j].phongban) {
				swap(temp[i], temp[j]);
			}
			else {
				if (temp[i].phongban == temp[j].phongban) {
					if (temp[i].maNV < temp[j].maNV) {
						swap(temp[i], temp[j]);
					}
				}
			}
		}
	}
	return temp;
}

void task_d(nhanvien *list, int n) {
	nhanvien *temp = sort(list, n);
	outputList(temp, n);
}