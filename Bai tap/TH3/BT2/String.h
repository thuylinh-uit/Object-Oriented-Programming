#pragma once
#include <cstring>
#include<conio.h>
#include<iostream>
using namespace std;

class String
{
private:
	char * pMangKT;
public:
	String(const char * pMangKT);
	int TinhChDai();
	bool SoSanh(const String& str);
	String Noi(const String& str);
	String DaoNguoc();
	void Xuat();
	~String();
};

