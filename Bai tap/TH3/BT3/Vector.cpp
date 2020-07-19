#include "Vector.h"

Vector::Vector(double arr[], int n)
{
	this->n = n;
	this->v = new double[this->n];
	for (int i = 0; i < n; i++) {
		this->v[i] = arr[i];
	}
}

Vector::Vector(int n, double vi)
{
	this->n = n;
	this->v = new double[this->n];
	for (int i = 0; i < n; i++) {
		this->v[i] = vi;
	}
}

Vector Vector::operator+(const Vector & c)const
{
	Vector temp(this->n, 0.0);
	for (int i = 0; i < this->n; i++) {
		temp.v[i] = this->v[i] + c.v[i];
	}
	return temp;
}

Vector Vector::operator-(const Vector & c)const
{
	Vector temp(this->n, 0.0);
	for (int i = 0; i < this->n; i++) {
		temp.v[i] = this->v[i] - c.v[i];
	}
	return temp;
}

Vector Vector::operator*(int c)
{
	Vector temp(this->n, 0.0);
	for (int i = 0; i < this->n; i++) {
		temp.v[i] = this->v[i]*c;
	}
	return temp;
}

double Vector::operator*(const Vector & c)const
{
	double result = 0;
	for (int i = 0; i < this->n; i++) {
		result += this->v[i] * c.v[i];
	}
	return result;
}


Vector::~Vector()
{
	delete[] v;
}
