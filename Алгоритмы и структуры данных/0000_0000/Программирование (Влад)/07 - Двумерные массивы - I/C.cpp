#include <cstdlib>
#include <iostream>
#include <stdio.h>
#include <cmath>
#include <algorithm>
#include <vector>
#include <iomanip>

using namespace std;

long long n, m, s[1000][1000], p[1000], num = 0;

int main() {
	cin >> n >> m;
	for (int i = 0; i < n; i++) for (int j = 0; j < m; j++) cin >> s[i][j];
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) p[j] += s[i][j];
	}
	long long pmax = p[0];
	for (int i = 0; i < m; i++) {
		if (p[i] > pmax) {
			pmax = p[i];
			num = i;
		}
	}
	cout << num << " " << pmax;
	//system("pause");
	return 0;
}