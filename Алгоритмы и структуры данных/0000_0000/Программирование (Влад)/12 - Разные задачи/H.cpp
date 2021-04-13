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
	int t, n, sum, cnt, tmp; cin >> t;
	for (int i = 0; i < t; i++) {
		cin >> n;
		sum = 0; cnt = 0;
		for (int j = 0; j < n; j++) {
			cin >> tmp;
			if (tmp % 6 == 0 && tmp > 0) { cnt++; sum += tmp; }
		}
		printf("%d %d\n", cnt, sum);
	}
	//system("pause");
	return 0;
}