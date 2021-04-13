#include <cstdlib>
#include <iostream>
#include <stdio.h>
#include <cmath>
#include <algorithm>
#include <vector>
#include <iomanip>

using namespace std;

int n, m, s[1000][1000], ans;
char p[1000][1000];

int main() {
	cin >> m >> n;
	for (int i = 0; i < n; i++) cin >> p[i];
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m - 1; j++) {
			if (p[i][j] != p[i][j + 1]) ans++;
		}
	}
	//cout << ans << endl;
	for (int i = 0; i < n - 1; i++) {
		for (int j = 0; j < m; j++) {
			if (p[i][j] != p[i + 1][j]) ans++;
		}
	}
	cout << ans;
	//system("pause");
	return 0;
}