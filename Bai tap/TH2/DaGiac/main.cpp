#include <conio.h>
using namespace std;
#include "DaGiac.h"

int main()
{
	DaGiac G;
	G.Input();
	G.Output();
	G.Quay(1.5);
	G.Output();
	G.ThuPhong(3);
	G.Output();
	G.TinhTien(2,2);
	G.Output();
	_getch();
	return 0;
}