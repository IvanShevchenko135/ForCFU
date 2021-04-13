#include <iostream>
#include <climits>
#include <vector> 
using namespace std;

vector < vector < pair <int, int> > > g;
vector <int> ways;
vector <int> dp;
vector <bool> used;

int dfs(int node) {
	if (node == 1) dp[node]++;
	else {
		for (int i = 0; i < g[node].size(); i++) {
			int to = g[node][i].first;
			if (ways[to] < ways[node]) {
				if (dp[to] == 0) dp[node] += dfs(to);
				else dp[node] += dp[to];
			}
		}
	}
	return dp[node];
}

int main() {

	int n, m;

	while (true) {
		cin >> n;
		if (n == 0) return 0;
		cin >> m;
		g.resize(n);
		ways.resize(n, INT_MAX);
		ways[1] = 0;
		used.resize(n, false);
		for (int i = 0; i < m; i++) {
			int a, b, d;
			cin >> a >> b >> d;
			g[a - 1].push_back(make_pair(b - 1, d));
			g[b - 1].push_back(make_pair(a - 1, d));
		}
		for (int i = 0; i < n - 1; i++) {
			int min_i = 0;
			for (int j = 0; j < n; j++) {
				if (used[j] == false && ways[j] < ways[min_i]) min_i = j;
			}
			used[min_i] = true;
			for (int j = 0; j < g[min_i].size(); j++) {
				if (g[min_i][j].second + ways[min_i] < ways[g[min_i][j].first]) {
					ways[g[min_i][j].first] = g[min_i][j].second + ways[min_i];
				}
			}
		}
		dp.resize(n, 0);
		cout << dfs(0) << endl;
		g.clear();
		ways.clear();
		used.clear();
		dp.clear();
	}
}