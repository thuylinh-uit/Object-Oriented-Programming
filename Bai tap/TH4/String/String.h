#pragma once
#include <cstring>
#include<iostream>
using namespace std;

class String
{
private:
	char * pMangKT;
public:
	String(const char * pMangKT);
	String operator+(const String& str);
	void operator=(const String& str);
	bool operator==(const String& str);
	~String();
	
	friend ostream& operator<<(ostream& os, const String& s);
};

