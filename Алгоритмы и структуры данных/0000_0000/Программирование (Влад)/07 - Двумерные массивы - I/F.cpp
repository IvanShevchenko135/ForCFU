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
	for (int i = 0; i < m; i++) {
		for (int j = 0; j < m - i - 1; j++) {
			if (s[n - 1][j] > s[n - 1][j + 1]) {
				for (int k = 0; k < n; k++) {
					swap(s[k][j], s[k][j + 1]);
				}
			}
		}
	}
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) cout << s[i][j] << " ";
		cout << endl;
	}
	//system("pause");
	return 0;
}