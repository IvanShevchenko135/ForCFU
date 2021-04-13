#include <iostream>
#include <vector>
using namespace std;

vector < vector <int> > g;
vector <bool> used;
int e, c, d, it;

void dfs(int node, int& it) {
	it++;
	if (node == e) {
		c++;
		it--;
		used[node] = false;
		return;
	}
	if (it > d) {
		it--;
		used[node] = false;
		return;
	}
	used[node] = true;
	for (int i = 0; i < g[node].size(); i++) {
		if (!used[g[node][i]]) {
			int to = g[node][i];
			dfs(to, it);
		}
	}
	it--;
	used[node] = false;
	return;
}

int main() {

	int t, n, m, s;

	cin >> t;
	while (t--) {
		cin >> n >> m >> s >> e >> d;
		e--; s--;
		c = 0;
		it = 0;
		g.resize(n);
		used.resize(n, false);
		for (int i = 0; i < m; i++) {
			int a, b;
			cin >> a >> b;
			g[a - 1].push_back(b - 1);
		}
		dfs(s, it);
		cout << c << endl;
		g.clear();
		used.clear();
	}
	return 0;
}