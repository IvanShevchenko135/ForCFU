#include <iostream>
#include <iomanip>
#include <algorithm>
#include <cmath>
using namespace std;

int p[4][2];

double Distance(int a, int b, int c) {
	int sc1, sc2;
	double ans;
	sc1 = (p[c][0] - p[a][0]) * (p[b][0] - p[a][0])
		+ (p[c][1] - p[a][1]) * (p[b][1] - p[a][1]);
	sc2 = (p[c][0] - p[b][0]) * (p[a][0] - p[b][0])
		+ (p[c][1] - p[b][1]) * (p[a][1] - p[b][1]);
	if (sc1 >= 0 && sc2 >= 0) {
		ans = (p[b][0] - p[c][0]) * (p[b][1] - p[a][1]) - (p[b][1] - p[c][1]) * (p[b][0] - p[a][0]);
		ans /= sqrt((p[b][0] - p[a][0]) * (p[b][0] - p[a][0]) + (p[b][1] - p[a][1]) * (p[b][1] - p[a][1]));
		return abs(ans);
	}
	else {
		double ca = sqrt((p[a][0] - p[c][0]) * (p[a][0] - p[c][0]) + (p[a][1] - p[c][1]) * (p[a][1] - p[c][1]));
		double cb = sqrt((p[b][0] - p[c][0]) * (p[b][0] - p[c][0]) + (p[b][1] - p[c][1]) * (p[b][1] - p[c][1]));
		ans = min(ca, cb);
		return ans;
	}
}

int main() {

	int d, dk, dn;
	double k, n, dis = 1;

	cin >> p[0][0] >> p[0][1] >> p[1][0] >> p[1][1];
	cin >> p[2][0] >> p[2][1] >> p[3][0] >> p[3][1];
	d = (p[1][0] - p[0][0]) * (p[2][1] - p[3][1]) - (p[1][1] - p[0][1]) * (p[2][0] - p[3][0]);
	dk = (p[2][0] - p[0][0]) * (p[2][1] - p[3][1]) - (p[2][1] - p[0][1]) * (p[2][0] - p[3][0]);
	dn = (p[1][0] - p[0][0]) * (p[2][1] - p[0][1]) - (p[1][1] - p[0][1]) * (p[2][0] - p[0][0]);
	k = (double)dk / d;
	n = (double)dn / d;
	if (d != 0 && n >= 0 && n <= 1 && k >= 0 && k <= 1) {
		dis = 0;
	}
	else if (dk == 0 && dn == 0) {
		long long ab = (p[0][0] - p[1][0]) * (p[0][0] - p[1][0]) + (p[0][1] - p[1][1]) * (p[0][1] - p[1][1]);
		long long cd = (p[2][0] - p[3][0]) * (p[2][0] - p[3][0]) + (p[2][1] - p[3][1]) * (p[2][1] - p[3][1]);
		long long ac = (p[0][0] - p[2][0]) * (p[0][0] - p[2][0]) + (p[0][1] - p[2][1]) * (p[0][1] - p[2][1]);
		long long ad = (p[0][0] - p[3][0]) * (p[0][0] - p[3][0]) + (p[0][1] - p[3][1]) * (p[0][1] - p[3][1]);
		long long bc = (p[1][0] - p[2][0]) * (p[1][0] - p[2][0]) + (p[1][1] - p[2][1]) * (p[1][1] - p[2][1]);
		long long bd = (p[1][0] - p[3][0]) * (p[1][0] - p[3][0]) + (p[1][1] - p[3][1]) * (p[1][1] - p[3][1]);
		if ((ab > ac && ab > bc) || (ab > ad && ab > bd)) dis = 0;
		else if ((ab >= ac && ab >= bc) && (ab >= ad && ab >= bd)) dis = 0;
		else if ((cd >= ac && cd >= ad) && (cd >= bc && cd >= bd)) dis = 0;
		else if ((p[0][0] == p[2][0] && p[0][1] == p[2][1]) || (p[0][0] == p[3][0] && p[0][1] == p[3][1])) {
			dis = 0;
		}
		else if ((p[1][0] == p[2][0] && p[1][1] == p[2][1]) || (p[1][0] == p[3][0] && p[1][1] == p[3][1])) {
			dis = 0;
		}
	}
	if (dis != 0) {
		double dis1 = Distance(0, 1, 2);
		double dis2 = Distance(0, 1, 3);
		double dis3 = Distance(2, 3, 0);
		double dis4 = Distance(2, 3, 1);
		dis = min(min(dis1, dis2), min(dis3, dis4));
	}
	cout << fixed << setprecision(15) << dis << endl;
	//system("pause");
	return 0;
}