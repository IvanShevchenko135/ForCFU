#include <iostream>
#include <iomanip>
#include <algorithm>
#include <cmath>
using namespace std;

int p[3][2];

int main() {

	int sc1, sc2;
	double ans;

	cin >> p[0][0] >> p[0][1] >> p[1][0] >> p[1][1];
	cin >> p[2][0] >> p[2][1];

	sc1 = (p[2][0] - p[0][0]) * (p[1][0] - p[0][0])
		+ (p[2][1] - p[0][1]) * (p[1][1] - p[0][1]);
	sc2 = (p[2][0] - p[1][0]) * (p[0][0] - p[1][0])
		+ (p[2][1] - p[1][1]) * (p[0][1] - p[1][1]);

	if (sc1 >= 0 && sc2 >= 0) {
		ans = (p[1][0] - p[2][0]) * (p[1][1] - p[0][1]) - (p[1][1] - p[2][1]) * (p[1][0] - p[0][0]);
		ans /= sqrt((p[1][0] - p[0][0]) * (p[1][0] - p[0][0]) + (p[1][1] - p[0][1]) * (p[1][1] - p[0][1]));
		cout << fixed << setprecision(10) << abs(ans) << endl;
	}
	else {
		double ca = sqrt((p[0][0] - p[2][0]) * (p[0][0] - p[2][0]) + (p[0][1] - p[2][1]) * (p[0][1] - p[2][1]));
		double cb = sqrt((p[1][0] - p[2][0]) * (p[1][0] - p[2][0]) + (p[1][1] - p[2][1]) * (p[1][1] - p[2][1]));
		ans = min(ca, cb);
		cout << fixed << setprecision(10) << abs(ans) << endl;;
	}
}