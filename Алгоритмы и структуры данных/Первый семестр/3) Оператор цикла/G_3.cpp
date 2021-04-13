#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main() {

	int k;
	double eps = 1e-11;
	long double e_x, mnozh, x;

	cin >> x;
	e_x = 1;
	k = 1;
	mnozh = 1;
	while (true) {
		mnozh = mnozh*(x / k);
		e_x = e_x + mnozh;
		k++;
		if (mnozh < eps)
			break;
	}
	cout << fixed << setprecision(9) << e_x << endl;
	return 0;
}