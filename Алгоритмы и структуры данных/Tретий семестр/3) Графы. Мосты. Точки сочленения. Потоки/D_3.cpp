#include <iostream>
#include <vector>
#include <algorithm>
using namespace std; 

int n, m, k;
vector < vector < pair <int, long long> > > g;
vector <int> matching;
vector <bool> used;

bool dfs(int node, long long max_time) {
	if (used[node]) return false;
	used[node] = true;
	for (int i = 0; i < g[node].size(); i++) {
		int to = g[node][i].first;
		long long dis = g[node][i].second;
		if (dis <= max_time && (matching[to] == -1 || dfs(matching[to], max_time))) {
			//matching[node] = to;
			matching[to] = node;
			return true;
		}
	}
	return false;
}

int match(long long max_time) {

	int ans = 0;

	matching.clear(); 
	matching.resize(n + m, -1);
	for (int i = 0; i < n; i++) {
		used.clear();
		used.resize(n + m, false);
		if (dfs(i, max_time)) ans++;
	}
	return ans;
}

long long b_serch (long long l, long long r) {
	while (l < r) {
		long long m = (l + r) / 2;
		if (match(m) < k)
			l = m + 1;
		else
			r = m;
	}
	return r;
}

int main() {

	long long max_t = 0;

	cin >> n >> m >> k;
	vector < pair <long long, long long> > tmp(n);
	for (int i = 0; i < n; i++) {
		int x, y;
		cin >> x >> y;
		tmp[i].first = x;
		tmp[i].second = y;
	}
	g.resize(n + m);
	for (int j = 0; j < m; j++) {
		long long x1, y1;
		cin >> x1 >> y1;
		for (int i = 0; i < n; i++) {
			long long x2 = tmp[i].first, y2 = tmp[i].second;
			long long dis = (x1 - x2) * (x1 - x2) + (y1 - y2) * (y1 - y2);
			g[n + j].push_back(make_pair(i, dis));
			g[i].push_back(make_pair(n + j, dis));
			max_t = max(max_t, dis);
		}
	}
	long long ans = b_serch(0, max_t);
	cout << ans << endl;
	return 0;
}