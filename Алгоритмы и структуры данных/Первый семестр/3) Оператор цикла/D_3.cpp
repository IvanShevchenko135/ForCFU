#include <iostream>
#include <iomanip>

using namespace std;

int main() {

	int n;
	double a, sqrt, psqrt;
	double eps = 1e-9;

	cin >> a;
	sqrt = a;
	psqrt = a;
	n = 0;
	while (true) {
		sqrt = 0.5 * (sqrt + (a / sqrt));
		n++;
	    if (abs(psqrt - sqrt) < eps)
				break;
		psqrt = sqrt;
	}
	cout << fixed << setprecision(9) << sqrt << endl;
	cout << n << endl;
	return 0;
}