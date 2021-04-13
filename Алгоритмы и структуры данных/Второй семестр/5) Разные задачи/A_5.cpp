#include <iostream>
#include <fstream>
using namespace std;

int main() {

	bool rect[1000][1000];
	int n, m, si, sj, ei, ej, count = 0;

	freopen("rect.dat", "r", stdin);
	freopen("rect.sol", "w", stdout);

	cin >> n >> m;
	for (int i = 0; i < n; i++)
		for (int j = 0; j < m; j++)
			cin >> rect[i][j];
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			if (rect[i][j] == 1) {
				si = i; sj = j;
				int u = si, v = j;
				while (rect[u][v] == 1) u++;
				ei = --u;
				while (rect[u][v] == 1) v++;
				ej = --v;
				for (u = si; u < ei + 1; u++) {
					for (v = sj; v < ej + 1; v++) {
						rect[u][v] = 0;
					}
				}
				count++;
			}
		}
	}
	cout << count << endl;
	return 0;
}