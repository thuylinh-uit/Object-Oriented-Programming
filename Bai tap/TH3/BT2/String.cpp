#include "String.h"


String::String(const char * pMangKT)
{
	int len = strlen(pMangKT);
	this->pMangKT = new char[len + 1];
	strcpy_s(this->pMangKT, len + 1, pMangKT);
}

int String::TinhChDai()
{
	return strlen(this->pMangKT);
}

bool String::SoSanh(const String& str)
{
	if (strcmp(this->pMangKT, str.pMangKT) == 0)
		return true;
	return false;
}

String String::Noi(const String& str)
{
	return String(strcat(this->pMangKT, str.pMangKT));
}

String String::DaoNguoc()
{
	return String(_strrev(this->pMangKT));
}

void String::Xuat()
{
	cout << pMangKT << endl;
}

String::~String()
{
	delete[] this->pMangKT;
}
