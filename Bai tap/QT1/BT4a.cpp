#include <iostream>
#include <conio.h>
using namespace std;


int main()
{
	int dd, mm, yy, songay;
	cout << "Nhap ngay thang nam (dd mm yy): ";
	cin >> dd >> mm >> yy;
	switch (mm)
	{
	case 1:
	case 3:
	case 5:
	case 7:
	case 8:
	case 10:
	case 12:songay = 31; break;
	case 4:
	case 6:
	case 9:
	case 11:songay = 30; break;
	case 2:
		if (yy % 400 == 0 || yy % 4 == 0 && yy % 100 != 0)
			songay = 29;
		else songay = 28; break;
	default: songay = 0; break;
	}
	if (dd <0 || dd == 0 || songay == 0 || dd>songay)
		cout << "Nhap sai, khong co ngay nay !" << endl;
	else
	{
		if (dd == songay)
		{
			if (mm == 12)
			{
				dd = mm = 1;
				yy++;
			}
			else
			{
				dd = 1;
				mm++;
			}
		}
		else dd++;
		cout << "Ngay ke tiep la: " << dd << "/" << mm << "/" << yy << endl;
	}
	_getch();
	return 0;
}

