#include <iostream>
#include <iomanip>
using namespace std;

int main() {

	int d, dk, dn, p[4][2];
	double k, x, y, n;

	cin >> p[0][0] >> p[0][1] >> p[1][0] >> p[1][1];
	cin >> p[2][0] >> p[2][1] >> p[3][0] >> p[3][1];
	d = (p[1][0] - p[0][0]) * (p[2][1] - p[3][1]) - (p[1][1] - p[0][1]) * (p[2][0] - p[3][0]);
	dk = (p[2][0] - p[0][0]) * (p[2][1] - p[3][1]) - (p[2][1] - p[0][1]) * (p[2][0] - p[3][0]);
	dn = (p[1][0] - p[0][0]) * (p[2][1] - p[0][1]) - (p[1][1] - p[0][1]) * (p[2][0] - p[0][0]);
	k = (double)dk / d;
	n = (double)dn / d;
	if (d != 0 && n >= 0 && n <= 1 && k >= 0 && k <= 1) {
		x = p[0][0] + k * (p[1][0] - p[0][0]);
		y = p[0][1] + k * (p[1][1] - p[0][1]);
		cout << fixed << setprecision(15) << x << " " << y << endl;
	}
	else if (dk == 0 && dn == 0) {
		long long ab = (p[0][0] - p[1][0]) * (p[0][0] - p[1][0]) + (p[0][1] - p[1][1]) * (p[0][1] - p[1][1]);
		long long cd = (p[2][0] - p[3][0]) * (p[2][0] - p[3][0]) + (p[2][1] - p[3][1]) * (p[2][1] - p[3][1]);
		long long ac = (p[0][0] - p[2][0]) * (p[0][0] - p[2][0]) + (p[0][1] - p[2][1]) * (p[0][1] - p[2][1]);
		long long ad = (p[0][0] - p[3][0]) * (p[0][0] - p[3][0]) + (p[0][1] - p[3][1]) * (p[0][1] - p[3][1]);
		long long bc = (p[1][0] - p[2][0]) * (p[1][0] - p[2][0]) + (p[1][1] - p[2][1]) * (p[1][1] - p[2][1]);
		long long bd = (p[1][0] - p[3][0]) * (p[1][0] - p[3][0]) + (p[1][1] - p[3][1]) * (p[1][1] - p[3][1]);
		//cout << ab << " " << cd << " " << ad << " " << bc << " " << bd << endl;
		if ((ab > ac && ab > bc) || (ab > ad && ab > bd)) cout << "Infinity" << endl;
		else if ((ab >= ac && ab >= bc) && (ab >= ad && ab >= bd)) cout << "Infinity" << endl;
		else if ((cd >= ac && cd >= ad) && (cd >= bc && cd >= bd)) cout << "Infinity" << endl;
		else if ((p[0][0] == p[2][0] && p[0][1] == p[2][1]) || (p[0][0] == p[3][0] && p[0][1] == p[3][1])) {
			x = p[0][0]; y = p[0][1];
			cout << fixed << setprecision(15) << x << " " << y << endl;
		}
		else if ((p[1][0] == p[2][0] && p[1][1] == p[2][1]) || (p[1][0] == p[3][0] && p[1][1] == p[3][1])) {
			x = p[1][0]; y = p[1][1];
			cout << fixed << setprecision(15) << x << " " << y << endl;
		}
		else cout << "No" << endl;
	}
	else cout << "No" << endl;
	//system("pause");
	return 0;
}