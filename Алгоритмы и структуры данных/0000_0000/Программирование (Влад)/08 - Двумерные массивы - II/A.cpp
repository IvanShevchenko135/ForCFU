#include <cstdlib>
#include <iostream>
#include <stdio.h>
#include <cmath>
#include <algorithm>
#include <vector>
#include <string>
#include <iomanip>

using namespace std;

int s[200][200];

int main() {
	int n, m, cnt = 1;
	cin >> n >> m;
	for (int i = 0, j = 0; i + 1 < n || j + 1 < m;) {
		for (int l = j, k = i; k >= 0 && l < m;) {
			s[k][l] = cnt; cnt++;
			k--; l++;
		}
		if (i + 1 >= n) j++;
		else i++;
	}
	s[n - 1][m - 1] = n * m;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) cout << s[i][j] << " ";
		cout << endl;
	}
	//system("pause");
	return 0;
}