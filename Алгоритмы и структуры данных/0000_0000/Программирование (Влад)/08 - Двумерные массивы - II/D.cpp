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
	cin >> n >> m;
	for (int i = 0; i < n; i++) for (int j = 0; j < m; j++) cin >> s[i][j];
	for (int i = 0; i < n; i++) cin >> p[i];
	int mins = s[0][0];
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			if (s[i][j] < mins) mins = s[i][j];
		}
	}
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			if (s[i][j] == mins && p[i][j] == '0') ans++;
		}
	}
	cout << ans;
	//system("pause");
	return 0;
}