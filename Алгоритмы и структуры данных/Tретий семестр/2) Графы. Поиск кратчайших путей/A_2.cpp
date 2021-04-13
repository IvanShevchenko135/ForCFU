#include <iostream>
#include <climits>
#include <vector>
#include <set>
#include <algorithm>
using namespace std;

const int infinity = 10000000;

int main() {

	vector < vector < pair <int, int> > > g;
	set < pair <int, int> > shortest;
	vector < pair <int, int> > ways;
	int k, n, m, s = 0;

	while (true) {
		cin >> n;
		if (n == 0) return 0;
		g.resize(n);
		for (int i = 0; i < n; i++) g[i].resize(n);
		ways.resize(n);
		cin >> m;
		for (int i = 0; i < m; i++) {
			int a, b, w;
			cin >> a >> b >> w;
			g[a].push_back(make_pair(b, w));
			g[b].push_back(make_pair(a, w));
		}
		cin >> k;
		ways[0].first = 0;
		ways[0].second = 0;
		shortest.insert(make_pair(0, 0));
		for (int i = 1; i < n; i++) {
			shortest.insert(make_pair(infinity, i));
			ways[i].first = infinity;
			ways[i].second = i;
		}
		while (!shortest.empty()) {
			int node = shortest.begin()->second;
			int length = shortest.begin()->first;
			shortest.erase(shortest.begin());
			for (int i = 0; i < g[node].size(); i++) {
				int to_n = g[node][i].first, to_w = g[node][i].second;
				if (to_w + length < ways[to_n].first) {
					ways[to_n].first = to_w + length;
					shortest.erase(make_pair(to_w, to_n));
					shortest.insert(make_pair(ways[to_n].first, to_n));
				}
			}
		}
		sort(ways.begin(), ways.end());
		cout << ways[k].second << endl;
		ways.clear();
		shortest.clear();
		g.clear();
	}
	return 0;
}