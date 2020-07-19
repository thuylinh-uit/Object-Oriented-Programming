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


Diem::~Diem()
{
}