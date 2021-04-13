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

vector<int> a, b, c;

void long_fib() {
	c.clear();
	if (a.size() < b.size()) for (int i = a.size(); i < b.size(); i++) a.push_back(0);
	if (a.size() > b.size()) for (int i = b.size(); i < a.size(); i++) b.push_back(0);
	for (int i = 0; i < max(a.size(), b.size()) + 1; i++) c.push_back(0);
	for (int i = 0; i < c.size() - 1; i++) {
		c[i] += a[i] + b[i];
		c[i + 1] += c[i] / 10;
		c[i] %= 10;
	}
	if (c.back() == 0) c.pop_back();
	a = b;
	b = c;
}

int main() {
	int n; cin >> n;
	if (n == 1 || n == 2) { cout << 1; return 0; }
	a.push_back(1); b.push_back(1);
	for (int i = 0; i < n - 2; i++) long_fib();
	for (int i = c.size() - 1; i >= 0; i--) cout << c[i];
	//system("pause");
	return 0;
}