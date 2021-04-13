#include <iostream>
#include <algorithm>
using namespace std;

int tr[100][100], dp[100][100];

int main() {

	int t, n;

	cin >> t;
	while (t--) {
		cin >> n;
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < i + 1; j++) {
				cin >> tr[i][j];
			}
		}
		dp[0][0] = tr[0][0];
		for (int i = 0; i < n; i++) dp[i][0] = tr[i][0] + dp[i - 1][0];
		for (int i = 1; i < n; i++) {
			for (int j = 1; j < i + 1; j++) {
				dp[i][j] = tr[i][j] + max(dp[i - 1][j], dp[i - 1][j - 1]);
			}
		}
		int max_v = dp[n - 1][0];
		for (int i = 1; i < n; i++) {
			max_v = max(max_v, dp[n - 1][i]);
		}
		cout << max_v << endl;
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < i + 1; j++) {
				tr[i][j] = 0;
				dp[i][j] = 0;
			}
		}
	}
	return 0;
}