#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector < vector <int> > g;
vector <bool> used(3000, false);
int tin[3000], up[3000], son[3000];
int n, m, ans = 0, t = 1;

int dfs(int node) {
	bool chk = false;
	tin[node] = t;
	up[node] = t;
	son[node] = 0;
	used[node] = true;
	for (int i = 0; i < g[node].size(); i++) {
		int to = g[node][i];
		if (!used[to]) {
			t++;
			son[node]++;
			up[node] = min(up[node], dfs(to));
			if (tin[node] <= up[to] && !chk && node != 0) {
				ans++;
				chk = true;
			}
		}
		else up[node] = min(up[node], tin[to]);
	}
	return up[node];
}

int main() {
	cin >> n >> m;
	g.resize(n);
	for (int i = 0; i < m; i++) {
		int a, b;
		cin >> a >> b;
		g[a].push_back(b);
		g[b].push_back(a);
	}
	up[0] = dfs(0);
	if (son[0] > 1) ans++;
	cout << ans << endl;
	return 0;
}