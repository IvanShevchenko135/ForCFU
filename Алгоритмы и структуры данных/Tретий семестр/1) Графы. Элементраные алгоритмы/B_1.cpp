#include <iostream>
#include <vector>
using namespace std;

bool visited[100000];
vector < vector <int> > g;

bool dfs(int node, int prev, int leader) {
	bool ans = true;
	visited[node] = true;
	if (g[node].empty()) ans = false;

	for (int i = 0; i < g[node].size(); i++) {

	}
}

int main() {

	int n, m, a, b, party = 0;

	cin >> n >> m;
	g.resize(n);
	for (int i = 0; i < m; i++) {
		cin >> a >> b;
		g[--a].push_back(--b);
		g[--b].push_back(--a);
	}
	for (int i = 0; i < n; i++)	{
		if (visited[i] == false) {
			if (dfs(i, -1, 0) == true) party++;
		}
	}
	cout << party << endl;
	return 0;
}