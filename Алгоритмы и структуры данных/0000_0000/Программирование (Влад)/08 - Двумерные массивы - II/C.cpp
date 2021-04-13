#include <cstdlib>
#include <iostream>
#include <stdio.h>
#include <cmath>
#include <algorithm>
#include <vector>
#include <iomanip>

using namespace std;

int main() {
	int n, m; cin >> n >> m;
	int s[1100][1100];
	int up = 0, down = n - 1, left = 0, right = m - 1, cnt = 1;
	while (cnt <= n * m) {
		for (int i = left; i <= right && cnt <= n * m; i++) {
			s[up][i] = cnt; cnt++;
		} up++;
		if (cnt > n*m) break;
		for (int i = up; i <= down && cnt <= n * m; i++) {
			s[i][right] = cnt; cnt++;
		} right--;
		if (cnt > n*m) break;
		for (int i = right; i >= left && cnt <= n * m; i--) {
			s[down][i] = cnt; cnt++;
		} down--;
		if (cnt > n*m) break;
		//cout << left << " " << down << endl;
		for (int i = down; i >= up && cnt <= n * m; i--) {
			s[i][left] = cnt; cnt++;
		} left++;
	}

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) cout << s[i][j] << " ";
		cout << endl;
	}
	return 0;
	//system("pause");
	return 0;
}