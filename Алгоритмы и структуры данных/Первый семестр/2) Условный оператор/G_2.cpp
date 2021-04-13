#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main() {

	long long A, B, C, D;
	long double X1, X2;

	cin >> A >> B >> C;
	D = B * B - 4 * A * C;
	if (D < 0) {
		cout << "No roots" << endl;
	}
	else if (D == 0) {
		X1 = (double)(-1 * B) / (2 * A);
		cout << fixed << setprecision(6) << X1 << endl;
	}
	else {
		X1 = (double)(-1 * B + sqrt(D)) / (2 * A);
		X2 = (double)(-1 * B - sqrt(D)) / (2 * A);
		if (X1 < X2) {
			cout << fixed << setprecision(6) << X1 << " " << X2 << endl;
		}
		else {
			cout << fixed << setprecision(6) << X2 << " " << X1 << endl;
		}
	}
	return 0;
}