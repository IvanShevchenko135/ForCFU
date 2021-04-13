#include <cstdlib>
#include <iostream>
#include <stdio.h>
#include <cmath>
#include <algorithm>
#include <vector>
#include <iomanip>

using namespace std;

int a, b, c, n, d, t, s[100][100];

int main() {
	scanf("%d", &t);
	for (int i = 0; i < t; i++) {
		a = 0; b = 0;
		scanf("%d", &n);
		for (int j = 0; j < n; j++) {
			for (int k = 0; k < n; k++) scanf("%d", &s[j][k]);
		}
		for (int j = 0; j < n; j++) {
			a += s[j][j];
			b += s[j][n - j - 1];
		}
		printf("%d %d\n", a, b);
		for (int j = 0; j < n; j++) {
			for (int k = 0; k < n; k++) s[j][k] = 0;
		}
	}
	//system("pause");
	return 0;
}