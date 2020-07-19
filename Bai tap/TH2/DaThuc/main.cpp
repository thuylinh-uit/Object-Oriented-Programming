#include "DaThuc.h"
#include <conio.h>

int main() {
	DaThuc D, E;
	D.Input();
	E.Input();
	D.Plus(E).Output();
	D.Sub(E).Output();
	D.Multi(E).Output();
	_getch();
	return 0;
}