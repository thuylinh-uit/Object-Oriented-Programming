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
	Matrix operator+(const Matrix& n)const;
	Matrix operator*(int k);
	Matrix operator*(const Matrix& n)const;
	void xuat();
	friend Matrix operator*(const Matrix& m, const Vector& v);
	~Matrix();
};

