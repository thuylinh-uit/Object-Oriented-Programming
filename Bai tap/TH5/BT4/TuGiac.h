#include "Diem.h"

class TuGiac
{
protected:
	Diem A, B, C, D;
public:
	TuGiac();
	TuGiac(Diem A, Diem B, Diem C, Diem D);
	bool isValid();
	void Input();
	void TinhChat();
	~TuGiac();
};

