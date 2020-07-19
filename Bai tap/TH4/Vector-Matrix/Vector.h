#include "Matrix.h"

class Vector
{
private:
	int n;
	double*v;
public:
	Vector(double arr[], int n);
	Vector(int n = 2, double vi = 0);
	~Vector();
	
	friend Matrix operator*(const Matrix& m, const Vector& v);
};

