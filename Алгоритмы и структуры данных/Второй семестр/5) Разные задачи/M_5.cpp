#include <iostream>
using namespace std;

int main() {

	int n, m;
	char flag[105][105];

	cin >> n >> m;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cin >> flag[i][j];
		}
	}
	for (int i = 0; i < n; i++) {
		flag[i][m] = flag[i][m - 1];
	}
	for (int j = 0; j < m; j++) {
		flag[n][j] = '-';
	}
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			if (flag[i][j] != flag[i][j + 1] || flag[i][j] == flag[i + 1][j]) {
				cout << "NO" << endl;
				//system("pause");
				return 0;
			}
		}
	}
	cout << "YES" << endl;
	//system("pause");
	return 0;
}