#include <cstdlib>
#include <iostream>
#include <stdio.h>
#include <cmath>
#include <algorithm>
#include <vector>
#include <iomanip>

using namespace std;

int n, m, s[110][110], p[110][110], nmin, nmax;
int main() {
	cin >> n >> m;
	for (int i = 0; i < n; i++) for (int j = 0; j < m; j++) cin >> s[i][j]; 
	long long mins = 1e12, maxs = -1;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			if (s[i][j] < mins) {
				mins = s[i][j]; nmin = j;
			}
			if (s[i][j] > maxs) {
				maxs = s[i][j]; nmax = j;
			}
		}
	}
	if (nmin != nmax) {
		for (int i = 0; i < n; i++) {
			swap(s[i][nmin], s[i][nmax]);
		}
	}
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) cout << s[i][j] << " ";
		cout << endl;
	}
	//system("pause");
	return 0;
}