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
	int t, n; vector<int> s;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> t;  s.push_back(t);
	}
	int a1 = -1, a2 = -1; long long abs_a = 1e15;
	for (int i = 0; i < s.size()-1; i++) {
		for (int j = i+1; j < s.size(); j++) {
			if (abs(s[i] - s[j]) <= abs_a) {
				a1 = i; a2 = j; abs_a = abs(s[i] - s[j]);
			}
		}
	}
	printf("%d %d", a1, a2);
	//system("pause");
	return 0;
}