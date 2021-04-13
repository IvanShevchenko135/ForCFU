#include <cstdlib>
#include <iostream>
#include <stdio.h>
#include <cmath>
#include <algorithm>
#include <vector>
#include <iomanip>

using namespace std;

int n, m, s[1100][1100], p[1100][1100];
int main() {
	cin >> n >> m;
	for (int i = 0; i < n; i++) for (int j = 0; j < m; j++) cin >> s[i][j]; 
	for (int i = 0; i < n; i++) {
		long long tmp = 1e12;
		for (int j = 0; j < m; j++) {
			if (s[i][j] < tmp) tmp = s[i][j];
		}
		for (int j = 0; j < m; j++) {
			if (s[i][j] == tmp) p[i][j]++;
		}
	}
	for (int i = 0; i < m; i++) {
		long long tmp = -1;
		for (int j = 0; j < n; j++) {
			if (s[j][i] > tmp) tmp = s[j][i];
		}
		for (int j = 0; j < n; j++) {
			if (s[j][i] == tmp) p[j][i]++;
		}
	}
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			if (p[i][j] == 2) {
				cout << s[i][j] << endl << i << " " << j;
				//system("pause");
				return 0;
			}
		}
	}
	cout << 0;
	//system("pause");
	return 0;
}