#include "Vector.h"
#include <conio.h>

Matrix operator*(const Matrix& m, const Vector& v){
	double arr[50];
	for (int i = 0; i < v.n; i++)
		arr[i] = v.v[i];
	Matrix t(arr, v.n, 1);
	return m*t;
}

int main() {
	double arr1[] = { 2, 3, 1, 4, 5, 6 };
	double arr2[] = { 3, 4, 8 };
	Matrix m(arr1, 2, 3);
	Vector v(arr2, 3);
	(m*v).xuat();
	_getch();
	return 0;
}