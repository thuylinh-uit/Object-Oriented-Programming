#pragma once
#include <iostream>
using namespace std;

class Diem
{
	float x, y;
public:
	Diem();
	Diem(float, float);
	void Input();
	void Output();
	void set_x(float);
	void set_y(float);
	Diem vector(Diem);
	float get_x() { return x; }
	float get_y() { return y; }
	void set_xy(float, float);
	void tinh_tien(float = 0, float = 0);
	void quay(float);
	~Diem(void);
};