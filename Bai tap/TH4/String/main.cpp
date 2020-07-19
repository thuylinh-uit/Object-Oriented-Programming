#include "String.h"
#include <stdio.h>

ostream& operator<<(ostream& os, const String& s)
{
    cout << s.pMangKT << endl;
    return os;
}

int main() {
	String str1("Fahrist");
	String str2("Setianto");
	cout << (str1 + str2);
	str1 = "An Indonesian friend";
	cout << str1;
	cout << (str1 == str2) << endl;
	system("pause");
	return 0;
}