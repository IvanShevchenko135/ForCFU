#include <iostream>
#include <fstream>
#include <map>
using namespace std;

int main() {

	int a[20][2000], n, m;
	map <int, int> count;
	map <int, int> check;

	freopen("kare.dat", "r", stdin);
	freopen("kare.sol", "w", stdout);

	cin >> n >> m;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cin >> a[i][j];
			count.insert(pair<int, int>(a[i][j], 0));
			check.insert(pair<int, int>(a[i][j], -1));
		}
	}
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			if (check.at(a[i][j]) != i) {
				count.at(a[i][j])++;
				check.at(a[i][j]) = i;
			}
		}
	}
	for (auto i = count.begin(); i != count.end(); i++) {
		cout << i->first << " " << i->second << endl;
	}
	return 0;
}