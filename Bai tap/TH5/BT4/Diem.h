#pragma once //ngan chan include nhieu lan
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
	float get_x() { return x; }
	float get_y() { return y; }
	~Diem(void);
};