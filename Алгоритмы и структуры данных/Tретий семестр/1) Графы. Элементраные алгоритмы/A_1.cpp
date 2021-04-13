#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

vector < vector <int> > g;

int main() {

	int n, m, a, b, q;

	cin >> n >> m;
	g.resize(n);
	for (int i = 0; i < m; i++) {
		cin >> a >> b;
		g[a - 1].push_back(b - 1);
		g[b - 1].push_back(a - 1);
	}
	for (int i = 0; i < m; i++) {
		sort(g[i].begin(), g[i].end());
	}
	cin >> q;
	while (q--) {
		cin >> a >> b;
		a--; b--;
		if (g[a].empty()) cout << 0 << endl;
		else {
			int l = 0, r = g[a].size() - 1, c = (l + r + 1) / 2;
			while (r >= l) {
				c = (l + r) / 2;
				if (c < 0 || c > g[a].size() - 1 || g[a][c] == b) break;
				else if (g[a][c] < b) l = c + 1;
				else r = c - 1;
			}
			if (c < 0 || c > g[a].size() - 1 || g[a][c] != b) cout << 0 << endl;
			else cout << c + 1 << endl;
		}
	}
	return 0;
}