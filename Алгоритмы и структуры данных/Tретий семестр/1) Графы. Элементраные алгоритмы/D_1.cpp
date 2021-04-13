#include <iostream>
#include <vector>
#include <queue>
using namespace std;

int main() {

	int n, m; 
	vector < vector <int> > g;
	vector <int> pw;
	queue <int> q;
	vector <int> ans;

	cin >> n >> m;
	g.resize(n);
	pw.resize(n);
	for (int i = 0; i < m; i++) {
		int a, b;
		cin >> a >> b;
		g[a - 1].push_back(b - 1);
		pw[b - 1]++;
	}
	for (int i = 0; i < pw.size(); i++) {
		if (pw[i] == 0) q.push(i);
	}
	while (!q.empty()) {
		int c;
		c = q.front();
		for (int i = 0; i < g[c].size(); i++) {
			pw[g[c][i]]--;
			if (pw[g[c][i]] == 0) q.push(g[c][i]);
		}
		ans.push_back(q.front() + 1);
		q.pop();
	}
	if (ans.size() != n) cout << -1 << endl;
	else {
		for (int i = 0; i < n - 1; i++) cout << ans[i] << ' ';
		cout << ans[n - 1] << endl;
	}
	return 0;
}