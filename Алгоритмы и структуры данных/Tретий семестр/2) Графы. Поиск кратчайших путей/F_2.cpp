#include <iostream>
using namespace std;

char maze[1010][1010];
int t, n, m, m_i, m_j, m_v = -1;

void dfs(int i, int j, int& len) {
	len++;
	maze[i][j] = '*';
	if (i < n - 1 && maze[i + 1][j] == '.') dfs(i + 1, j, len);
	if (i > 0 && maze[i - 1][j] == '.') dfs(i - 1, j, len);
	if (j < m - 1 && maze[i][j + 1] == '.') dfs(i, j + 1, len);
	if (j > 0 && maze[i][j - 1] == '.') dfs(i, j - 1, len);
	if (len >= m_v) {
		m_i = i;
		m_j = j;
		m_v = len;
	}
	maze[i][j] = '.';
	len--;
	return;
}

int main() {

	cin >> t;
	while (t--) {
		cin >> m >> n;
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < m; j++) {
				cin >> maze[i][j];
				if (maze[i][j] == '.') {
					m_i = i;
					m_j = j;
				}
			}
		}
		int len = -1;
		m_v = -1;
		dfs(m_i, m_j, len);
		len = -1;
		m_v = -1;
		dfs(m_i, m_j, len);
		//cout << endl << m_i << " " << m_j << " " << m_v;
		cout << "Maximum rope length is " << m_v << '.' << endl;
	}
	return 0;
}

/*
2
3 3
###
#.#
###
14 5
##############
#####..#######
#.....########
#####...######
##############
*/