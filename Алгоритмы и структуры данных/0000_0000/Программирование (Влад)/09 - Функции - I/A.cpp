#define CRT_NO_WARNINGS
#include <cstdlib>
#include <iostream>
#include <stdio.h>
#include <cmath>
#include <algorithm>
#include <vector>
#include <iomanip>
#include <string>

using namespace std;

long double func(double x) {
	return sin(x) + sqrt((double)(log(3 * x) / log(4))) + ceil(3 * exp(x));
}

int main() {
	double n;
	while (cin >> n) cout << fixed << setprecision(6) << func(n) << endl;
	//system("pause");
	return 0;
}