#include <cstdlib>
#include <iostream>
#include <stdio.h>
#include <cmath>
#include <algorithm>
#include <vector>
#include <string>
#include <iomanip>

using namespace std;

int main() {
	int ans = 0;
	string a, b; cin >> a >> b;
	if (a.length() != b.length()) {
		cout << -1 << endl;
		return 0;
	}
	int alen = a.length();
	for (int i = 0; i < alen; i++) {
		bool chk = false;
		if (a[0] == b[0]) {
			a.erase(0, 1); b.erase(0, 1); continue;
		}
		for (int j = 0; j < b.length(); j++) {
			if (b[j] == a[0]) {
				chk = true;
				a.erase(0, 1); b.erase(j, 1);
				ans += j;
				break;
			}
		}
		if (!chk) {
			cout << -1 << endl;
			return 0;
		}
	}
	cout << ans << endl;
	//system("pause");
	return 0;
}