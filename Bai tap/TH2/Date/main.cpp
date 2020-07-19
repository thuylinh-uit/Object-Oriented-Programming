#include"Date.h"
#include<conio.h>

int main()
{
	Date* c = new Date;
	c->Input();
	
	cout << "Them 1 ngay:" << endl;
	c = c->plus_plus();
	c->Output();

	cout << "Bot 1 ngay:" << endl;
	c = c->sub_sub();
	c->Output();

	cout << "Them 10 ngay:" << endl;
	c = c->plus(10);
	c->Output();

	cout << "Bot 10 ngay:" << endl;
	c = c->sub(10);
	c->Output();

	_getch();
	delete c;
	return 0;
}