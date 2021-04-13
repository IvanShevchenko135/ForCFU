#include <iostream>
using namespace std;

int n, m, ver = 0;
bool g[1001][1001], visited[1001];

void dfs(int v) {
	if (!visited[v]) {
		visited[v] = true;
		ver++;
		for (int i = 1; i < 1001; i++) {
			if (g[v][i]) dfs(i);
		}
	}
	return;
}

int main() {
	while (cin >> n >> m) {
		for (int i = 1; i <= n; i++) {
			for (int j = 1; j <= n; j++) {
				visited[i] = false;
				g[i][j] = false;
			}
		}
		for (int edge = 0; edge < m; edge++) {
			int i, j;
			cin >> i >> j;
			g[i][j] = true;
			g[j][i] = true;
		}
		int check = 0;
		for (int i = 1; i <= n; i++) {
			if (!visited[i]) {
				dfs(i);
				check++;
			}
		}
		if (n - m == 1 && check == 1) cout << "YES" << endl;
		else cout << "NO" << endl;
	}
	//system("pause");
	return 0;
}