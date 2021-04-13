#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int T, N;
double A, B, X, step, between;

int main() {
	cin >> T;
	while (T--) {
		cin >> N;
		cin >> A >> B;
		X = A;
		cout << fixed << setprecision(3) << "X=" << X << " ";
		cout << fixed << setprecision(3) << "F(X)=" << 1 - sin(X) << endl;
		between = abs(B - A);
		step = between / (double)(N - 1);
		for (int i = 1; i < N; i++) {
			X += step;
			cout << fixed << setprecision(3) << "X=" << X << " ";
			cout << fixed << setprecision(3) << "F(X)=" << 1 - sin(X) << endl;
		}
	}
	//system("pause");
	return 0;
}