#include <iostream>
#include <fstream>
#include <string>
#include <algorithm>
#include <cmath>
using namespace std;

string s, dp[310][310], ans;

int main() {

	freopen("palin.dat", "r", stdin);
	freopen("palin.sol", "w", stdout);

	cin >> s;
	for (int i = 1; i <= s.size(); i++) {
		for (int j = s.size(); j > 0; j--) {
			if (s[i - 1] == s[j - 1]) { // && i - 1 != j - 1) {
				dp[i][j - 1] = dp[i - 1][j];
				dp[i][j - 1].push_back(s[i - 1]);
			}
			else {
				if (dp[i][j].size() < dp[i - 1][j - 1].size())
					dp[i][j - 1] = dp[i - 1][j - 1];
				else 
					dp[i][j - 1] = dp[i][j];
			} 
		}
	}
	ans = dp[s.size()][0];
	cout << s.size() - ans.size() << endl;
	cout << ans << endl;
	return 0;
}