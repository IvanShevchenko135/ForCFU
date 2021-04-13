#define _CRT_SECURE_NO_WARNINGS
#include <cstdlib>
#include <iostream>
#include <stdio.h>
#include <cmath>
#include <algorithm>
#include <vector>
#include <iomanip>
#include <string>
#include <sstream>

using namespace std;

bool isPalindrom(string s, int l, int r) {
	while (l < r) {
		if (s[l] != s[r]) return false;
		l++; r--;
	}
	return true;
}

int main() {
	string s;
	cin >> s;
	int l = 0, r = s.length() - 1;
	if (isPalindrom(s, l, r)) {
		cout << s.erase(r/2, 1) << endl;
		return 0;
	}
	while (l < r) {
		if (s[l] == s[r]) {
			l++; r--;
			continue;
		}
		if (isPalindrom(s, l + 1, r)) {
			cout << s.erase(l, 1) << endl; 
			break;
		}
		else {
			cout << s.erase(r, 1) << endl;
			break;
		}
	}
	//system("pause");
	return 0;
}