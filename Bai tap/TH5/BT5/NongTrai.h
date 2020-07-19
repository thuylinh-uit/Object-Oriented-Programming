
#include "Bo.h"
#include "Cuu.h"
#include "De.h"

class NongTrai
{
private:
	int b, c, d;
	Bo*chuongBo;
	Cuu*chuongCuu;
	De*chuongDe;
public:
	NongTrai(int b = 5, int c = 5, int d = 5);
	void Nhap();
	void Xuat();
	~NongTrai();
};

