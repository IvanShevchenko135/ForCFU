#include <iostream>
#include <climits>
#include <vector>
#include <set>
using namespace std;

int main() {

	int n, e, t, m, ans = 0;
	set < pair <int, int> > shortest;
	vector <int> ways;
	vector < vector < pair <int, int> > > g;

	cin >> n >> e >> t >> m;
	g.resize(n);
	ways.resize(n, INT_MAX);
	ways[e] = 0;
	for (int i = 0; i < n; i++) {
		if (i == e) shortest.insert({ 0, i });
		else shortest.insert({ INT_MAX, i });
	}
	for (int i = 0; i < m; i++) {
		int a, b, w;
		cin >> a >> b >> w;
		g[a - 1].push_back(make_pair(b - 1, w));
	}
	while (!shortest.empty() && shortest.begin()->first <= t) {
		ans++;
		int node = shortest.begin()->second;
		for (int i = 0; i < g[node].size(); i++) {
			int to = g[node][i].first, len = g[node][i].second;
			if (ways[node] + len < ways[to]) {
				shortest.erase(make_pair(ways[to], to));
				shortest.insert(make_pair(ways[node] + len, to));
				ways[g[node][i].first] = g[node][i].second;
			}
		}
		shortest.erase(shortest.begin());
	}
	cout << ans << endl;
	return 0;
}