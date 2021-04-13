#define _CRT_SSECURE_NO_WARNINGS
#include <iostream>
#include <fstream>
#include <algorithm>
using namespace std;

long long p[4][2];

bool dir(long long a, long long b, long long c, long double &square) {

	long double s;

	s = (long double)((p[a][0] * p[b][1] + p[b][0] * p[c][1] + p[c][0] * p[a][1]) - (p[a][1] * p[b][0] + p[b][1] * p[c][0] + p[c][1] * p[a][0])) / 2;
	square += abs(s);
	if (s > 0) return false;
	else return true;
}

int main() {

	bool direction, check = true;
	long double total = 0, sum = 0;

	freopen("trian.dat", "r", stdin);
	freopen("trian.sol", "w", stdout);

	for (int i = 0; i < 4; i++)
		cin >> p[i][0] >> p[i][1];
	direction = dir(2, 0, 3, sum);
	for (int i = 0; i < 2; i++) {
		bool tmp = dir(i, i + 1, 3, sum);
		if (tmp != direction)
			check = false;
	}
	dir(0, 1, 2, total);
	if (total == sum) check = true;
	if (check) cout << "YES" << endl;
	else cout << "NO" << endl;
	//system("pause");
	return 0;
}