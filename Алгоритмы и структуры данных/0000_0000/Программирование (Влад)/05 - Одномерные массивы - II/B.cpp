#include <cstdlib>
#include <iostream>
#include <stdio.h>
#include <cmath>
#include <algorithm>
#include <vector>
#include <iomanip>
#include <string>
#include <fstream>

using namespace std;

int main() {
	int t, n, chk = 1; vector<int> s, best;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> t;  s.push_back(t);
	}
	for(int i = 1; i <= n; i++) best.push_back(i);
	for (int i = 0; i < s.size(); i++) {
		chk = 0;
		for (int j = 0; j < best.size(); j++) {
			if (s[i] == best[j]) { chk = 1; t = j; break; }
		}
		if (!chk) { printf("NO\n%d", s[i]); return 0; }
		best.erase(best.begin() + t);
	}
	printf("YES");
	//system("pause");
	return 0;
}