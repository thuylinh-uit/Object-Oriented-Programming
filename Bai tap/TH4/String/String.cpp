#include "String.h"


String::String(const char * pMangKT)
{
	int len = strlen(pMangKT);
	this->pMangKT = new char[len + 1];
	strcpy_s(this->pMangKT, len + 1, pMangKT);
}

String String::operator+(const String& str)
{
	return String(strcat(this->pMangKT, str.pMangKT));
}

void String::operator=(const String& str)
{
    int len = strlen(str.pMangKT);
    this->pMangKT = new char[len+1];
    strcpy_s(this->pMangKT, len+1, str.pMangKT);
}

bool String::operator==(const String& str)
{
	if (strcmp(this->pMangKT, str.pMangKT) == 0)
		return true;
	return false;
}

String::~String()
{
	delete[] this->pMangKT;
}