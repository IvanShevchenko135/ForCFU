#include <iostream>

using namespace std;

int main() {

	int a, b, c, A, B, C;

	cin >> a >> b >> c;

	if (a > 0)
		A = a * a * a;
	else if (a < 0)
		A = a * a;
	else
		A = a;

	if (b > 0)
		B = b * b * b;
	else if (b < 0)
		B = b * b;
	else
		B = b;

	if (c > 0)
		C = c * c * c;
	else if (c < 0)
		C = c * c;
	else
		C = c;

	cout << A << ' ' << B << ' ' << C;
	return 0;
}