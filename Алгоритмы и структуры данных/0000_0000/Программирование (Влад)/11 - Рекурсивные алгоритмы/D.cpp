#include <iostream>
#include <stdio.h>
#include <algorithm>
#include <vector>
#include <iomanip>
#include <string>

using namespace std;

string s;

void kantor(int k, int l, int r) {
	if (k > 0) {
		//printf("%d %d %d\n", k, l, r);
		for (int i = l +(r - l) / 3; i < l + 2 * (r - l) / 3; i++) s[i] = ' ';
		kantor(k - 1, l, l + (r - l) / 3);
		kantor(k - 1, l + 2 * (r - l) / 3, r);
	}
}

int main() {
	int n, k; scanf("%d %d", &n, &k);
	for (int i = 0; i < n; i++) s.push_back('#');
	kantor(k, 0, s.length());
	cout << s;
	//system("pause");
	return 0;
}