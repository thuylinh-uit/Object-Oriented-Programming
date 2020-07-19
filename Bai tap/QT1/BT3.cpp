#include <iostream>
#include <conio.h>
using namespace std;

struct phanso{
	int tu, mau;
};

int UCLN(int , int );

void rutgon(phanso &);

void input(phanso &);

void output(phanso );

phanso findMax(phanso , phanso );

phanso tong(phanso , phanso );

phanso hieu(phanso, phanso);

phanso tich(phanso, phanso);

phanso thuong(phanso, phanso);

void task_a();

void task_b();

void task_c();

int main(){
	task_a();
	task_b();
	task_c();
	_getch();
	return 0;
}

int UCLN(int x, int y) {
	while (x != y) {
		if (x > y) {
			x -= y;
		}
		else {
			y -= x;
		}
	}
	return x;
}

void rutgon(phanso &x) {
	int ucln = UCLN(x.tu, x.mau);
	if (ucln != 1) {
		x.tu /= ucln;
		x.mau /= ucln;
	}
}

void input(phanso &x) {
	cout << "Nhap tu: "; cin >> x.tu;
	cout << "Nhap mau: "; cin >> x.mau;
	if (x.mau == 0) {
		cout << "Mau so khong the bang 0!";
		exit(0);
	}
}

void output(phanso x) {
	if (x.tu % x.mau == 0) {
		cout << x.tu / x.mau << endl;
	}
	cout << x.tu << "/" << x.mau << endl;
}

phanso findMax(phanso a, phanso b) {
	if (a.tu*b.mau - b.tu*a.mau > 0) {
		return a;
	}
	else {
		return b;
	}
}

phanso tong(phanso a, phanso b) {
	phanso c;
	c.tu = a.tu*b.mau + b.tu*a.mau;
	c.mau = a.mau*b.mau;
	rutgon(c);
	return c;
}

phanso hieu(phanso a, phanso b) {
	phanso c;
	c.tu = a.tu*b.mau - b.tu*a.mau;
	c.mau = a.mau*b.mau;
	rutgon(c);
	return c;
}

phanso tich(phanso a, phanso b) {
	phanso c;
	c.tu = a.tu*b.tu;
	c.mau = a.mau*b.mau;
	rutgon(c);
	return c;
}

phanso thuong(phanso a, phanso b) {
	phanso c;
	c.tu = a.tu*b.mau;
	c.mau = a.mau*b.tu;
	rutgon(c);
	return c;
}

void task_a() {
	cout << "Chuong trinh a: Nhap vao mot phan so, rut gon va xuat ket qua" << endl;
	phanso a;
	input(a);
	rutgon(a);
	cout << "Phan so la: ";	output(a);
}

void task_b() {
	cout << "\nChuong trinh b: Nhap vao 2 phan so, tim phan so lon nhat va xuat ket qua" << endl;
	phanso a, b;
	input(a);
	input(b);
	phanso max = findMax(a, b);
	rutgon(max);
	cout << "Phan so lon nhat la: "; output(max);
}

void task_c() {
	cout << "\nChuong trinh c: Nhap vao 2 phan so, tinh tong-hieu-tich-thuong va xuat ket qua" << endl;
	phanso a, b;
	input(a); input(b);
	cout << "Tong = "; output(tong(a, b));
	cout << "Hieu = "; output(hieu(a, b));
	cout << "Tich = "; output(tich(a, b));
	cout << "Thuong = "; output(thuong(a, b));
}
