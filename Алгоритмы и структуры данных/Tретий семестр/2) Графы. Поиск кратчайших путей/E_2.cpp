#include <iostream>
#include <algorithm>
#include <climits>
#include <vector>
using namespace std;

int x, y, n;
char map[30][30];
vector < vector <int> > dp;
vector < vector <int> > g;
vector < pair <int, int> > coord;

int main() {

	cin >> x >> y;
	for (int i = 0; i < x; i++) {
		for (int j = 0; j < y; j++) {
			cin >> map[i][j];
			if (map[i][j] == 'L') {
				coord.push_back(make_pair(i, j));
			}
		}
	}
	for (int i = 0; i < x; i++) {
		for (int j = 0; j < y; j++) {
			if (map[i][j] == '#') {
				coord.push_back(make_pair(i, j));
			}
		}
	}
	n = coord.size();
	if (n == 1) {
		cout << 0 << endl;
		return 0;
	}
	g.resize(n);
	dp.resize((1 << n));
	for (int i = 0; i < n; i++) g[i].resize(n);
	for (int i = 0; i < dp.size(); i++) dp[i].resize(n, INT_MAX);
	for (int i = 0; i < n; i++) {
		for (int j = i + 1; j < n; j++) {
			int w = max(abs(coord[j].first - coord[i].first), abs(coord[j].second - coord[i].second));
			g[i][j] = w;
			g[j][i] = w;
		}
	}
	dp[0][0] = 0;
	for (int mask = 0; mask < (1 << n); mask++) {
		for (int i = 0; i < n; i++) {
			if (dp[mask][i] != INT_MAX) {
				for (int j = 0; j < n; j++) {
					if ((mask & (1 << j)) == 0) {
						dp[mask | (1 << j)][j] = min(dp[mask][i] + g[i][j], dp[mask | (1 << j)][j]);
					}
				}
			}
		}
	}
	cout << dp[(1 << n) - 1][0] << endl;
	return 0;
}