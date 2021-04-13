#include <iostream>
#include <vector>
using namespace std; 

int main() {

	int n, m;
	int x[100], y[100];
	vector < vector <int> > dp;
	const int mod = 1000000007;

	while (cin >> n >> m) {
		for (int i = 0; i < m; i++)	cin >> x[i] >> y[i];
		dp.resize(n + 1);
		for (int i = 0; i <= n; i++) {
			dp[i].resize(m, 0);
			if (i >= x[0] && i <= y[0]) dp[i][0] = 1;
		}
		for (int j = 1; j < m; j++) {
			for (int i = 0; i <= n; i++) {
				for (int fix = x[j]; fix <= y[j] && fix <= i; fix++) {
					dp[i][j] = ((dp[i][j] % mod) + (dp[i - fix][j - 1] % mod)) % mod;
				}
			}
		}
		cout << dp[n][m - 1] << endl;
		dp.clear();
	}
	return 0;
}