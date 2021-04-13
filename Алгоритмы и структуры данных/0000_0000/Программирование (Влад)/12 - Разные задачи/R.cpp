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

int gcd(int a, int b) {
	if (b == 0) return a;
	return gcd(b, a % b);
}

int main() {
	int n, m;
	while (cin >> n >> m) {
		if (gcd(n, m) > 1) printf("NO\n");
		else printf("YES\n");
	}
	//system("pause");
	return 0;
}