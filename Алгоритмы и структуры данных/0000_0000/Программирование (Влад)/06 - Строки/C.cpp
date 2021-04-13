#include <iostream>
#include <stdio.h>
#include <algorithm>
#include <vector>
#include <cmath>
#include <string>

using namespace std;

int main() {
	string s; 
	long long osn, n = 1000000007, ans = 0;
	cin >> osn >> s;
	for (int i = 0; i < s.length(); i++) {
		if (s[i] > 57) s[i] -= 7;
		ans = (s[i] - '0' + ans * osn) % n;
	}
	printf("%lld", ans);
	//system("pause");
	return 0;
}