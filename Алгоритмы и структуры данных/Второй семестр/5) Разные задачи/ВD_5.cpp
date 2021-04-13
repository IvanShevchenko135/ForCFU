#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

long long p[4][2];

int cross() {
	long long d, dk, dn, s = 0;
	long double k, x, y, n;
	s += (p[0][0] * p[1][1]) + (p[1][0] * p[2][1]) + (p[2][0] * p[0][1]);
	s -= (p[0][1] * p[1][0]) + (p[1][1] * p[2][0]) + (p[2][1] * p[0][0]);
	d = (p[1][0] - p[0][0]) * (p[2][1] - p[3][1]) - (p[1][1] - p[0][1]) * (p[2][0] - p[3][0]);
	dk = (p[2][0] - p[0][0]) * (p[2][1] - p[3][1]) - (p[2][1] - p[0][1]) * (p[2][0] - p[3][0]);
	dn = (p[1][0] - p[0][0]) * (p[2][1] - p[0][1]) - (p[1][1] - p[0][1]) * (p[2][0] - p[0][0]);
	k = (long double)dk / d;
	n = (long double)dn / d;
	if (d != 0 && n >= 0 && n <= 1 && k >= 0 && k <= 1) {
		if (s == 0 && p[0][1] <= p[2][1] && p[1][1] >= p[2][1]) return -1;
		if (p[2][1] == p[0][1]) return 0;
		else return 1;
	}
	else return 0;
}

int main() {

	long long n, x, y, count = 0;
	vector <pair <long long, long long>> points;

	cin >> n;
	cin >> p[2][0] >> p[2][1];
	p[3][0] = p[2][0] + 30000;
	p[3][1] = p[2][1];
	for (int i = 0; i < n; i++) {
		cin >> x >> y;
		points.push_back(make_pair(x, y));
	}
	for (int i = 0; i < n - 1; i++) {
		if (points[i].second == points[i + 1].second && points[i + 1].second == p[2][1]) {
			if (p[2][0] >= min(points[i].first, points[i + 1].first) &&
				p[2][0] <= max(points[i].first, points[i + 1].first)) {
				cout << "YES" << endl;
				return 0;
			}
		}
		else {
			if (points[i].second < points[i + 1].second) {
				p[0][0] = points[i].first;
				p[0][1] = points[i].second;
				p[1][0] = points[i + 1].first;
				p[1][1] = points[i + 1].second;
			}
			else {
				p[0][0] = points[i + 1].first;
				p[0][1] = points[i + 1].second;
				p[1][0] = points[i].first;
				p[1][1] = points[i].second;
			}
			int check = cross();
			if (check == 1) count++;
			if (check == -1) {
				cout << "YES" << endl;
				return 0;
			}
		}
	}
	if (points[n - 1].second == points[0].second && points[0].second == p[2][1]) {
		if (p[2][0] >= min(points[n - 1].first, points[0].first) &&
			p[2][0] <= max(points[n - 1].first, points[0].first)) {
			cout << "YES" << endl;
			return 0;
		}
	}
	else {
		if (points[n - 1].second < points[0].second) {
			p[0][0] = points[n - 1].first;
			p[0][1] = points[n - 1].second;
			p[1][0] = points[0].first;
			p[1][1] = points[0].second;
		}
		else {
			p[0][0] = points[0].first;
			p[0][1] = points[0].second;
			p[1][0] = points[n - 1].first;
			p[1][1] = points[n - 1].second;
		}
		int check = cross();
		if (check == 1) count++;
		if (check == -1) {
			cout << "YES" << endl;
			return 0;
		}
	}
	if (count % 2 == 1) cout << "YES" << endl;
	else cout << "NO" << endl;
	return 0;
}