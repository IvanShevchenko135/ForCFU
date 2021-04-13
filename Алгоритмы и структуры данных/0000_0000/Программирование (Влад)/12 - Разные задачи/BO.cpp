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
	int n, t;
	vector<char> a, b;
	string s;
	cin >> t;
	for (int i = 0; i < t; i++) {
		cin >> s;
		a.clear(); b.clear();
		int mid = s.length() / 2;
		for (int i = 0; i < mid; i++) a.push_back(s[i]);
		for (int i = mid; i < s.length(); i++) b.push_back(s[i]);
		if (s.length() % 2 == 1) a.push_back(s[mid]);
		sort(a.begin(), a.end()); sort(b.begin(), b.end());
		if (a == b) printf("YES\n");
		else printf("NO\n");
	}
	//system("pause");
	return 0;
}