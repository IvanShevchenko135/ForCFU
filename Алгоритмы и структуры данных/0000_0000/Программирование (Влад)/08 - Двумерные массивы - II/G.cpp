#include <cstdlib>
#include <iostream>
#include <stdio.h>
#include <cmath>
#include <algorithm>
#include <vector>
#include <string>
#include <iomanip>


using namespace std;

int s[200][200];

int main() {
	int n, m, ans = 0;
	cin >> n >> m;
	vector <string> s; string t;
	for (int i = 0; i < n; i++) { cin >> t; s.push_back(t); }
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			if (s[i][j] == '.') {
				if (i  && j && s[i - 1][j - 1] == '.' && s[i - 1][j] == '.') ans++;
				if (i && j < m - 1 && s[i - 1][j + 1] == '.' && s[i][j + 1] == '.') ans++;
				if (i && j < m - 1 && s[i][j + 1] == '.' && s[i - 1][j] == '.') ans++;
				if (i < n - 1 && j < m - 1 && s[i][j + 1] == '.' && s[i + 1][j] == '.') ans++;
			}
		}
	}
	cout << ans << endl;
	//system("pause");
	return 0;
}