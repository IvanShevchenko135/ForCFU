#include <cstdlib>
#include <iostream>
#include <stdio.h>
#include <cmath>
#include <algorithm>
#include <vector>
#include <iomanip>

using namespace std;

long double last, e, n;

int main() {
	cin >> n;
	e = 1;
	last = 1;
	int k = 1;
	while (last > 0) {
		last *= n / k;
		k++;
		e += last;
	}
	cout << fixed << setprecision(9) << e;
	return 0;
}