#include <iostream>
#include <stdio.h>
#include <algorithm>
#include <vector>
#include <cmath>
#include <string>

using namespace std;

int main() {
	string x, y; cin >> x >> y;
	int l = 0, r = y.length() - 1, ans = 0;
	while (r < x.length()) {
		int cnt = 0;
		for (int i = l; i <= r; i++) if (x[i] != y[i - l]) cnt++;
		if (cnt <= 1) ans++;
		l++; r++;
	}
	printf("%d", ans);
	//system("pause");
	return 0;
}