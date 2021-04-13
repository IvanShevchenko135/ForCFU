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
	cout << m << " " << n << endl;
	for (int j = 0; j < m; j++) {
		for (int i = n - 1; i >= 0; i--) {
			cout << s[i][j] << " ";
		}
		cout << endl;
	}
	//system("pause");
	return 0;
}