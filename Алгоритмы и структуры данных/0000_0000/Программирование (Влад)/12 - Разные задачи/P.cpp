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
	int k, n, t, cnt;
	cin >> t;
	for (int i = 0; i < t; i++) {
		cin >> k >> n;
		int tmp = k; cnt = 1;
		if (k > n) cout << 1 << " " << n << endl;
		else {
			while (tmp + k < n) { tmp += k; cnt++; }
			cout << cnt + 1 << " " << n % tmp << endl;
		}
	}
	//system("pause");
	return 0;
}