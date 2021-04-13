#include <iostream>
#include <iomanip>
using namespace std;

int Kramer(int A[][2], int *B, double &x, double &y) {
	int det, dx, dy;
	det = A[0][0] * A[1][1] - A[1][0] * A[0][1];
	dx = B[0] * A[1][1] - B[1] * A[0][1];
	dy = A[0][0] * B[1] - A[1][0] * B[0];
	if (det != 0) {
		x = (dx / (double)det);
		y = (dy / (double)det);
	}
	else if (dx == 0 && dy == 0) {
		return 1;
	}
	else return 0;
}

int main() {
	int A[2][2], B[2], ans;
	double x, y;
	cin >> A[0][0] >> A[0][1] >> B[0];
	cin >> A[1][0] >> A[1][1] >> B[1];
	ans = Kramer(A, B, x, y);
	if (ans == 0)
		cout << "No solution!" << endl;
	else if (ans == 1)
		cout << "Infinity!" << endl;
	else
		cout << fixed << setprecision(6) << x << " " << y << endl;
	//system("pause");
	return 0;
}