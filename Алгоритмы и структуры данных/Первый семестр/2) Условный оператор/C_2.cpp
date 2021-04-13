#include<iostream>
#include<iomanip>

using namespace std;

int main() {

	short int X, Y, Z, N;
	double A;

	cin >> X >> Y >> Z;
	if (Y < X) {
		N = X;
		X = Y;
		Y = N;
	}
	if (Z < X) {
		N = X;
		X = Z;
		Z = N;
	}
	if (Z < Y) {
		N = Y;
		Y = Z;
		Z = N;
	}
	A = (double) (Z * Z - X * X) / (Y * Y - X * X);
	cout << fixed << setprecision(6) << A << endl;
	return 0;
}