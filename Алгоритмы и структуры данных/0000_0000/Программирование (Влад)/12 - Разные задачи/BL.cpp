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
	vector<int> a;
	vector<int> b;
	vector<int> c;
	string s;
	//ifstream in("INPUT.TXT");
	//ofstream out("OUTPUT.TXT");
	cin >> s;
	for (int i = s.length(); i > 0; i--) a.push_back(s[i - 1] - '0');
	cin >> s;
	for (int i = s.length(); i > 0; i--) b.push_back(s[i - 1] - '0');
	if (a.size() < b.size()) for (int i = a.size(); i < b.size(); i++) a.push_back(0);
	if (a.size() > b.size()) for (int i = b.size(); i < a.size(); i++) b.push_back(0);
	for (int i = 0; i < max(a.size(), b.size()) + 1; i++) c.push_back(0);
	for (int i = 0; i < c.size() - 1; i++) {
		c[i] += a[i] + b[i];
		c[i + 1] += c[i] / 10;
		c[i] %= 10;
	}
	if (c.back() == 0) c.pop_back();
	//for (int i = a.size() - 1; i >= 0; i--) printf("%d", a[i]); printf("\n");
	//for (int i = b.size() - 1; i >= 0; i--) printf("%d", b[i]); printf("\n");
	for (int i = c.size() - 1; i >= 0; i--) cout << c[i];
	//system("pause");
	return 0;
}