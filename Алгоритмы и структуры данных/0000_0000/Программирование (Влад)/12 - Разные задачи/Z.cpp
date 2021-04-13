#include <cstdlib>
#include <iostream>
#include <stdio.h>
#include <cmath>
#include <algorithm>
#include <vector>
#include <iomanip>
#include <fstream>

using namespace std;

int n, m, s[10100], t, tmp, ans, cnt;

int main() {
	for (int i = 1; i < 10100; i++) s[i] = i;
	ifstream in("Z.inp");
	in >> t;
	ofstream out("Z.out");
	while (in >> n >> m) {
		cnt = 1;
		for (int i = 0; i < n; i++) {
			out << s[cnt]; cnt++;
			for (int j = 0; j < m - 1; j++) {
				out << ' ' << s[cnt]; cnt++;
			}
		out << endl;;
		}
	}
	return 0;
}