#include <iostream>
using namespace std;

int n, m;
long long dp[35][35];

int main() {

	for (int i = 1; i <= 30; i++) {
		dp[1][i] = 1;
		dp[i][1] = i;
	}
	for (int i = 1; i <= 30; i++) {
		for (int j = 1; j <= 30; j++) {
			dp[i][j] = dp[i - 1][j - 1] + 1 + dp[i - 1][j];
		}
	}
	while (cin >> n >> m) {
		bool chk = false;
		for (int i = 1; i <= 30; i++) {
			if (dp[i][n] >= m) {
				cout << i << endl;
				chk = true;
				break;
			}
		}
		if (!chk) cout << -1 << endl;
	}
	return 0;
}