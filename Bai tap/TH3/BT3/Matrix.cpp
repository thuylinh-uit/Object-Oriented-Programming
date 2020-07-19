#include "Matrix.h"

Matrix::Matrix(int r, int c, double mij)
{
	this->r = r;
	this->c = c;
	this->m = new double*[r];
	for (int i = 0; i < r; i++) {
		m[i] = new double[c];
	}
	for (int i = 0; i < r; i++) {
		for (int j = 0; j < c; j++)
			m[i][j] = mij;
	}
}

Matrix::Matrix(double m[], int r, int c)
{
	this->r = r;
	this->c = c;
	this->m = new double*[r];
	for (int i = 0; i < r; i++) {
		this->m[i] = new double[c];
	}
	int index = 0;
	for (int i = 0; i < r; i++) {
		for (int j = 0; j < c; j++)
			this->m[i][j] = m[index+j];
		index += c;
	}
}

Matrix Matrix::operator+(const Matrix & n)const
{
	Matrix temp(this->r, this->c);
	for (int i = 0; i < this->r; i++) {
		for (int j = 0; j < this->c; j++)
			temp.m[i][j] = this->m[i][j] + n.m[i][j];
	}
	return temp;
}

Matrix Matrix::operator*(int k)
{

	Matrix temp(this->r, this->c);
	for (int i = 0; i < this->r; i++) {
		for (int j = 0; j < this->c; j++)
			temp.m[i][j] = this->m[i][j]*k;
	}
	return temp;
}

Matrix Matrix::operator*(const Matrix & n)const
{
	Matrix temp(this->r, n.c);
	for (int i = 0; i < r; i++)
		for (int j = 0; j < n.c; j++)
			for (int k = 0; k<c; k++)
				temp.m[i][j] += this->m[i][k] * n.m[k][j];
	return temp;
}

void Matrix::xuat()
{
	for (int i = 0; i < r; i++) {
		for (int j = 0; j < c; j++)
			cout << m[i][j] << " ";
		cout << endl;
	}
}

Matrix::~Matrix()
{
	for (int i = 0; i < r; i++)
		delete[] m[i];
	delete[] m;
}
