#include <cstdlib>
#include <iostream>
#include <stdio.h>
#include <cmath>
#include <algorithm>
#include <vector>
#include <iomanip>

using namespace std;

int p[1010];

int main() {
	for (int i = 1; i <= 1000; i++) {
		int sum = 0;
		for (int j = 1; j <= i; j++) {
			if (i%j == 0) sum += j;
		}
		if (sum <= 1000) p[sum] = i;
	}
	int n; cin >> n;
	for (int i = 1; n; i++) {
		printf("Case %d: %d\n", i, (p[n] == 0 ? -1 : p[n]));
		cin >> n;
	}
	//system("pause");
	return 0;
}