#include <iostream>
#include <stdio.h>
#include <algorithm>
#include <vector>
#include <cmath>
#include <string>

using namespace std;

int main() {
	string x, y; cin >> x >> y;
	int l = 0, r = x.length() - 1, ans = 0;
	vector<char> t1, t2;
	for (int i = 0; i < x.length(); i++) t1.push_back(x[i]);
	sort(t1.begin(), t1.end());
	while (r < y.length()) {
		for (int i = l; i <= r; i++) t2.push_back(y[i]);
		sort(t2.begin(), t2.end());
		if (t1 == t2) ans++;
		t2.clear();
		l++; r++;
	}
	printf("%d", ans);
	//system("pause");
	return 0;
}