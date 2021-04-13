#include <iostream>
#include <climits>
#include <algorithm>
using namespace std;

int main() {

	int n, t;
	int sz[110], dp[110][110];

	cin >> t;
	while (t--) {
		cin >> n;
		for (int i = 0; i < n + 1; i++) {
			cin >> sz[i];
			dp[i][i] = 0;
			dp[i][i + 1] = 0;
		}
		for (int l = 2; l < n + 1; l++) {
			for (int i = 0; i + l < n + 1; i++) {
				int min_v = INT_MAX;
				int j = i + l;
				for (int c = i + 1; c < j; c++) {
					min_v = min(min_v, dp[i][c] + dp[c][j] + sz[i] * sz[c] * sz[j]);
				}
				dp[i][j] = min_v;
			}
		}
		cout << dp[0][n] << endl;
	}
	return 0;
}