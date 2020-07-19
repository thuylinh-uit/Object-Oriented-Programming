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

Vector::~Vector()
{
	delete[] v;
}
