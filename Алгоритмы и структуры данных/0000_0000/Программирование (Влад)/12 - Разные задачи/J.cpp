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
	int t;
	cin >> t;
	for (int i = 0; i < t; i++) {
		unsigned long long n, a = 3, k = 5;
		cin >> n;
		while (n > a + k) {
			a += k;
			k += 2;
		}
		if (n == a + k) {
			cout << n << " " << n << endl;
			continue;
		}
		cout << a << " " << a + k << endl;
	}
	//system("pause");
	return 0;
}