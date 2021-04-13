#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int m[100];

int pref(string str) {

	int maxv = 0;

	for (int i = 1; i < str.size(); i++) {
		int j = m[i - 1];
		while (true) {
			if (str[i] == str[j]) {
				m[i] = j + 1;
				break;
			}
			if (j == 0) break;
			else  j = m[j - 1];
		}
		if (m[i] > maxv) {
			maxv = m[i];
		}
	}
	for (int i = 1; i < str.size(); i++) m[i] = 0;
	return maxv;
}

int main() {

	int maxv;
	string str;

	cin >> str;
	maxv = pref(str);
	while (str.size() > 1) {
		str = str.substr(1, str.size() - 1);
		maxv = max(maxv, pref(str));
	}
	cout << maxv << endl;
	return 0;
}