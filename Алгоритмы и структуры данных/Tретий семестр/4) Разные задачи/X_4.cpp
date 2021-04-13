#include <iostream>
#include <string>
using namespace std;
const int m = 1000000007;

long long dp[1024][101];

int main() {

	int t, n;
	bool prefer[10][101];

	cin >> t;
	dp[0][0] = 1;
	cin.get();
	while (t--) {
		cin >> n;
		cin.get();
		for (int i = 0; i < 10; i++) {
			for (int j = 0; j < 101; j++) {
				prefer[i][j] = false;
			}
		}
		for (int i = 0; i < n; i++) {
			int color = 0;
			string s;
			getline(cin, s);
			for (int u = 0, v; u < s.size();) {
				v = u;
				color = 0;
				while (v < s.size() && s[v] != ' ') v++;
				for (int k = u; k < v; k++) {
					color *= 10;
					color += int(s[k] - '0');
				}
				prefer[i][color] = true;
				u = v + 1;
			}
		}
		for (int j = 1; j < 101; j++) {
			for (int i = 0; i < (1 << n); i++) dp[i][j] = dp[i][j - 1];
			for (int i = 0; i < n; i++) {
				if (prefer[i][j] == true) {
					for (int k = 0; k < (1 << n); k++) {
						if ((k & (1 << i)) == 0) {
							dp[k | (1 << i)][j] = (dp[k][j - 1] % m + dp[k | (1 << i)][j] % m) % m;
						}
					}
				
				}
			}
		}
		cout << dp[(1 << n) - 1][100] << endl;
	}
	return 0;
}