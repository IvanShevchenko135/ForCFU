#include <iostream>
#include <iomanip>
using namespace std;

int main() {

	int d, dk, dn, p[4][2];
	double  k, x, y, n;

	cin >> p[0][0] >> p[0][1] >> p[1][0] >> p[1][1];
	cin >> p[2][0] >> p[2][1] >> p[3][0] >> p[3][1];
	d = (p[1][0] - p[0][0]) * (p[2][1] - p[3][1]) - (p[1][1] - p[0][1]) * (p[2][0] - p[3][0]);
	dk = (p[2][0] - p[0][0]) * (p[2][1] - p[3][1]) - (p[2][1] - p[0][1]) * (p[2][0] - p[3][0]);
	dn = (p[1][0] - p[0][0]) * (p[2][1] - p[0][1]) - (p[1][1] - p[0][1]) * (p[2][0] - p[0][0]);
	k = (double)dk / d;
	if (d != 0) {
		x = p[0][0] + k * (p[1][0] - p[0][0]);
		y = p[0][1] + k * (p[1][1] - p[0][1]);
		cout << fixed << setprecision(7) << 1 << " " << x << " " << y << endl;
	}
	else if (dk == 0 && dn == 0) {
		cout << 2 << endl;
	}
	else {
		cout << 0 << endl;
	}
    //system("pause");
	return 0;
}