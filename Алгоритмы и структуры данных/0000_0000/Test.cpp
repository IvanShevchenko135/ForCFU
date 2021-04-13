#define _CRT_SECURE_NO_WARNINGS 
#include <iostream>
#include <cstdlib>
#include <fstream>
#include <string>
#include <algorithm>
#include <cmath>
#include <stdio.h> 
#include <math.h>
#include <iomanip> 
#include <cstring> 
#include <string> 
#include <stdlib.h>
#define _ << " " <<
#define pt pair<ll, ll>
#define x first
#define y second

using namespace std;
using ll = long long;
using namespace std;

int dp[500][500];

string VLAD(string str) {
	string s = str;
	string rev_s = str;
	reverse(rev_s.begin(), rev_s.end());
	for (int i = 0; i <= s.size(); i++) {
		for (int j = 0; j <= rev_s.size(); j++) {
			if (i == 0 || j == 0) dp[i][j] = 0;
			else if (s[i - 1] == rev_s[j - 1]) dp[i][j] = dp[i - 1][j - 1] + 1;
			else dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]);
		}
	}
	int sz = dp[s.size()][rev_s.size()];
	string ans(sz, 'a');
	//cout << s.size() - sz << endl;
	int ptr1 = s.size(), ptr2 = rev_s.size();
	while (ptr1 && ptr2) {
		if (s[ptr1 - 1] == rev_s[ptr2 - 1]) {
			ans[sz - 1] = s[ptr1 - 1];
			ptr1--; ptr2--; sz--;
		}
		else if (dp[ptr1 - 1][ptr2] > dp[ptr1][ptr2 - 1]) ptr1--;
		else ptr2--;
	}
	return ans;
}


int m_str[310][310];

void findIndex(int& i, int& j, int& size) {
	while (m_str[i][j + 1] == size || m_str[i - 1][j] == size) {
		if (m_str[i][j + 1] == size) j++;
		else i--;
	}
	return;
}

string MY(string s) {
	string ans = "";
	int size;
	cin >> s;
	for (int i = 1; i <= s.size(); i++) {
		for (int j = s.size(); j > 0; j--) {
			if (s[i - 1] == s[j - 1]) {
				m_str[i][j - 1] = abs(m_str[i - 1][j]) + 1;
				m_str[i - 1][j - 1] *= -1;
				m_str[i][j] *= -1;
			}
			else m_str[i][j - 1] = max(abs(m_str[i - 1][j - 1]), abs(m_str[i][j]));
		}
	}
	int i = s.size(); int j = 0;
	size = m_str[i][j];
	//cout << s.size() - size << endl;
	while (size > 0) {
		findIndex(i, j, size);
		ans.push_back(s[j]);
		i--;
		j++;
		size--;
	}
	//cout << ans << endl;
	/*for (int i = 0; i <= s.size(); i++) {
		for (int j = 0; j <= s.size(); j++) {
			cout << m_str[i][j];
		}
		cout << endl;
	}*/
	return ans;
}

int main() {
	string s;
	while (cin >> s) {
		//string S = s;
		if (MY(s) != VLAD(s)) {
			cout << MY(s) << " " << VLAD(s) << endl;
		}
	}
	return 0;
}