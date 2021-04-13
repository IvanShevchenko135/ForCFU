#include <iostream>
#include <climits>
#include <vector>
#include <algorithm>
using namespace std;

vector < vector <int> > g;
vector <bool> used;
int tin[10000], up[10000], taste[10000], sum[10000];
int n, m, ans, t;
bool chk;

int dfs(int node, int prev) {
	tin[node] = t;
	up[node] = t;
	sum[node] = taste[node];
	used[node] = true;
	for (int i = 0; i < g[node].size(); i++) {
		int to = g[node][i];
		if (!used[to]) {
			t++;
			up[node] = min(up[node], dfs(to, node));
			if (tin[node] < up[to]) {
				ans = max(ans, sum[to]);
				chk = true;
			}
			sum[node] += sum[to];
		}
		else if (to != prev) up[node] = min(up[node], tin[to]);
	}
	return up[node];
}

int main() {
	while (true) {
		cin >> n >> m;
		if (n == 0 && m == 0) return 0;
		g.resize(n);
		used.resize(n, false);
		ans = INT_MIN;
		chk = false;
		t = 1;
		for (int i = 0; i < m; i++) {
			int a, b;
			cin >> a >> b;
			g[a - 1].push_back(b - 1);
			g[b - 1].push_back(a - 1);
		}
		for (int i = 0; i < n; i++) cin >> taste[i];
		up[0] = dfs(0, -1);
		if (chk) cout << ans << endl;
		else cout << "No apple" << endl; 
		g.clear();
		used.clear();
	}
	return 0;
}