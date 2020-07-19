#pragma once
#include <iostream>
using namespace std;

class Vector;

class Matrix
{
private:
	int r, c;
	double** m;
public:
	Matrix(int r = 2, int c = 2, double mij = 0);
	Matrix(double m[], int r, int c);
	Matrix operator*(const Matrix& n)const;
	~Matrix();
	
	friend Matrix operator*(const Matrix& m, const Vector& v);
	friend ostream& operator<<(ostream& os, const Matrix& m);
};

