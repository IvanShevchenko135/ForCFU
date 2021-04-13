#include <cstdlib>
#include <iostream>
#include <stdio.h>
#include <cmath>
#include <algorithm>
#include <vector>
#include <iomanip>
#include <string>

using namespace std;

void pal(string s) {
	string l, r; int li, ri;
	l = s.substr(0, s.length() / 2);
	if (s.length() % 2 == 1) l.push_back(s[s.length() / 2]);
	r = s.substr(s.length() / 2, s.length() - s.length() / 2);
	string rev_l = l;
	reverse(rev_l.begin(), rev_l.end());
	li = stoi(rev_l);
	ri = stoi(r);
	if (li < ri) {
		li = stoi(l);
		li++;
		l = to_string(li);
		r = l;
		reverse(r.begin(), r.end());
	}
	else {
		r = l;
		reverse(r.begin(), r.end());
	}
	if (s.length() % 2 == 1) l.pop_back();
	cout << l << r;
}

bool isPalindrom(string s) {
	string l, r;
	l = s.substr(0, s.length() / 2);
	if (s.length() % 2 == 1) l.push_back(s[s.length() / 2]);
	r = s.substr(s.length() / 2, s.length() - s.length() / 2);
	reverse(r.begin(), r.end());
	if (l == r) return true;
	return false;
}

int main() {
	long long n; cin >> n;
	n++;
	if (isPalindrom(to_string(n))) cout << n;
	else pal(to_string(n));
	//system("pause");
	return 0;
}