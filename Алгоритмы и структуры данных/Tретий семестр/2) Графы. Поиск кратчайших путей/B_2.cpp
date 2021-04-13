#include <iostream>
#include <algorithm> 
#include <vector>
using namespace std;

int main() {

	int t, n, m, w;
	vector < vector <int> > ways;
	int const infinity = 100000000;

	cin >> t;
	while (t--) {
		cin >> n >> m >> w;
		vector <int> d (n, infinity);
		d[0] = 0;
		for (int i = 0; i < m; i++)	{
			int a, b, c;
			cin >> a >> b >> c;
			vector <int> tmp;
			tmp.push_back(a - 1);
			tmp.push_back(b - 1);
			tmp.push_back(c);
			ways.push_back(tmp);
			swap(tmp[0], tmp[1]);
			ways.push_back(tmp);
		}
		for (int i = 0; i < w; i++) {
			int a, b, c;
			cin >> a >> b >> c;
			vector <int> tmp;
			tmp.push_back(a - 1);
			tmp.push_back(b - 1);
			tmp.push_back(-c);
			ways.push_back(tmp);
		}
		bool ans = false;
		for (int i = 0; i < n; i++) {
			if (i == n - 1) {
				ans = true;
				break;
			}
			bool chk = true;
			for (int j = 0; j < ways.size(); j++) {
				if (d[ways[j][0]] < infinity) {
					if (d[ways[j][1]] > d[ways[j][0]] + ways[j][2]) {
						d[ways[j][1]] = d[ways[j][0]] + ways[j][2];
						chk = false;
					}
				}
			}
			if (chk) break;
		}
		if (ans) cout << "YES" << endl;
		else cout << "NO" << endl;
		ways.clear();
	}
	return 0;
}