#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

bool comp(int a, int b) {
	return a > b;
}

int main() {

	int n, c;
	vector <pair <int, int> > purse;
	vector < pair <bool, vector <int> > > sum;

	cin >> n >> c;
	for (int i = 0; i < n; i++) {
		int a;
		cin >> a;
		purse.push_back(make_pair(a, i + 1));
	}
	sum.resize(c + 1, { false, { } });
	sum[0].first = true;
	sort(purse.begin(), purse.end());
	for (int i = purse.size() - 1; i >= 0; i--) {
		for (int j = sum.size() - 1 - purse[i].first; j >= 0; j--) {
			if (sum[j].first == true && sum[j + purse[i].first].first == false) {
				sum[j + purse[i].first].first = true;
				sum[j + purse[i].first].second = sum[j].second;
				sum[j + purse[i].first].second.push_back(purse[i].second);
			}
		}
		if (sum[c].first == true) {
			cout << sum[c].second.size() << endl;
			sort(sum[c].second.begin(), sum[c].second.end());
			for (int u = 0; u < sum[c].second.size(); u++) {
				cout << sum[c].second[u] << " ";
			}
			cout << endl;
			return 0;
		}
	}
	cout << -1 << endl;
	return 0;
}