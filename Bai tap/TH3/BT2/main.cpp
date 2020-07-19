#include "String.h"
#include <conio.h>

int main() {
	String str1("Setianto");
	String str2("Fahrist");
	cout << str1.TinhChDai() << endl;
	cout << str1.SoSanh(str2) << endl;
	str2.Noi(str1).Xuat();
	str1.DaoNguoc().Xuat();
	_getch();
	return 0;
}