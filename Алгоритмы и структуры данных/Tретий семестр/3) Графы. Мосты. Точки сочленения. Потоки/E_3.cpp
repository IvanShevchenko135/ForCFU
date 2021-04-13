#include <iostream>
#include <vector>
using namespace std;

int n, q, l;
int timer = 0;
vector < vector <int> > g;
vector <int> tin, tout;
vector < vector <int> > up;

void dfs(int v, int p) {
	tin[v] = timer++;
	up[v][0] = p;
	for (int i = 0; i < l; i++)
		up[v][i + 1] = up[up[v][i]][i];
	for (int i = 0; i < g[v].size(); i++) {
		int to = g[v][i];
		if (to != p)
			dfs(to, v);
	}
	tout[v] = timer++;
}

bool isAncestor(int a, int b) {
	return tin[a] <= tin[b] && tout[a] >= tout[b];
}

int lca(int a, int b) {
	if (isAncestor(a, b)) return a;
	if (isAncestor(b, a)) return b;
	for (int i = l; i >= 0; i--) {
		if (!isAncestor(up[a][i], b)) a = up[a][i];
	}
	return up[a][0];
}

int main() {

	cin >> n;
	g.resize(n);
	up.resize(n);
	tin.resize(n);
	tout.resize(n);
	for (int i = 0; i < n - 1; i++) {
		int a, b;
		cin >> a >> b;
		g[a - 1].push_back(b - 1);
		g[b - 1].push_back(a - 1);
	}
	l = 1;

	while ((1 << l) <= n) l++;
	for (int i = 0; i < n; i++) up[i].resize(l + 1);
	dfs(0, 0);
	cin >> q;
	for (int i = 0; i < q; i++) {
		int root, a, b;
		cin >> root >> a >> b;
		a--;
		b--;
		root--;
		if (root == a) {
			cout << a + 1 << endl;
			continue;
		}
		if (root == b) {
			cout << b + 1 << endl;
			continue;
		}
		int flca = lca(a, b);
		if (root == flca || root == 0 || isAncestor(root, flca))
			cout << flca + 1 << endl;
		else {
			int lca1 = lca(root, a);
			int lca2 = lca(root, b);
			//int lca3 = lca(lca1, lca2);
			if (lca1 == lca2)
				cout << flca + 1 << endl;
			else if (isAncestor(lca1, lca2)) cout << lca2 + 1 << endl;
			else cout << lca1 + 1 << endl;
		}
	}
	return 0;
}