#include "Diem.h"

Diem::Diem()
{
}

Diem::Diem(float a, float b)
{
	x = a;
	y = b;
}

void Diem::Input()
{
	cout << "\n Hoanh do x = "; cin >> x;
	cout << " Tung do y = "; cin >> y;
}

void Diem::Output()
{
	cout << "(" << x << "," << y << ")";
}

void Diem::set_x(float a)
{
	x = a;
}

void Diem::set_y(float b)
{
	y = b;
}

Diem Diem::vector(Diem a)
{
	Diem t;
	t.set_x(a.get_x() - x);
	t.set_y(a.get_y() - y);
	return t;
}

void Diem::set_xy(float a, float b)
{
	x = a;
	y = b;
}

void Diem::tinh_tien(float a, float b)
{
	x += a;
	y += b;
}

void Diem::quay(float rad)
{
	x = x * cos(rad) - y * sin(rad);
	y = x * sin(rad) + y * cos(rad);
}

Diem::~Diem()
{
}