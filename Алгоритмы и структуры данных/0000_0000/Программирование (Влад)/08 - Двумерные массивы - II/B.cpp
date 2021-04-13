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
	for (int i = 0, j = m - 1; i + 1 < n || j > 0;) {
		for (int l = j, k = i; k >= 0 && l >= 0;) {
			s[k][l] = cnt; cnt++;
			k--; l--;
		}
		if (i + 1 >= n) j--;
		else i++;
	}
	s[n - 1][0] = n * m;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) cout << s[i][j] << " ";
		cout << endl;
	}
	//system("pause");
	return 0;
}