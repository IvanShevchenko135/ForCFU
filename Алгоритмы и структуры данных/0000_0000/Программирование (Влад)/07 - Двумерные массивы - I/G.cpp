#include <cstdlib>
#include <iostream>
#include <stdio.h>
#include <cmath>
#include <algorithm>
#include <vector>
#include <iomanip>

using namespace std;

long long n, m, s[110][110], min_max = 1e12;
int main() {
	cin >> n >> m;
	for (int i = 0; i < n; i++) for (int j = 0; j < m; j++) cin >> s[i][j];
	for (int i = 0; i < n; i++) {
		long long  maxs = s[i][0];
		for (int j = 0; j < m; j++) {
			if (s[i][j] > maxs) maxs = s[i][j];
		}
		min_max = min(min_max, maxs);
	}
	cout << min_max;
	//system("pause");
	return 0;
}