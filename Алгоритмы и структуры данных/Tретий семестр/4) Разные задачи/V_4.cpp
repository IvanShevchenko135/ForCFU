#include <iostream>
#include <climits>
#include <vector>
#include <set>
using namespace std;

const int infinity = 10000000;

int main() {

	vector < pair <int, int> > way;
	vector < vector < pair <int, int> > > g; // номер, длина
	set < pair <int, int> > shortest; // длина, номер
	int ways[10000];
	int t, n, m, s, e;

	cin >> t;
	while (t--) {
		int ans = 0;
		cin >> n >> m;
		g.resize(n);
		for (int i = 0; i < m; i++) {
			int a, b, w;
			cin >> a >> b >> w;
			g[a - 1].push_back(make_pair(b - 1, w));
			g[b - 1].push_back(make_pair(a - 1, w));
		}
		cin >> s >> e;
		s--; e--;
		for (int i = 0; i < n; i++) {
			if (i == s) {
				shortest.insert(make_pair(0, i));
				ways[i] = 0;
			}
			else {
				shortest.insert(make_pair(infinity, i));
				ways[i] = infinity;
			}
		}
		while (!shortest.empty()) {
			int node = shortest.begin()->second;
			int length = shortest.begin()->first;
			if (node == e) {
				ans = length;
				break;
			}
			shortest.erase(shortest.begin());
			for (int i = 0; i < g[node].size(); i++) {
				int to_n = g[node][i].first, to_w = g[node][i].second;
				if (to_w + length < ways[to_n]) {
					ways[to_n] = to_w + length;
					shortest.erase(make_pair(to_w, to_n));
					shortest.insert(make_pair(ways[to_n], to_n));
				}
			}
		}
		shortest.erase(shortest.begin(), shortest.end());
		g.resize(0);
		if (ans < infinity) cout << ans << endl;
		else cout << "infinity" << endl;
	}
	return 0;
}