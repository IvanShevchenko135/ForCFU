#include <cstdlib>
#include <iostream>
#include <stdio.h>
#include <cmath>
#include <algorithm>
#include <vector>
#include <iomanip>

using namespace std;

int main() {
	int t; double a, n, b, f = 0;
	scanf("%d", &t);
	for (int i = 0; i < t; i++) {
		scanf("%lf%lf%lf", &n, &a, &b);
		double x = a; f = 0;
		for (int j = 0; j < n; j++) {
			x += f;
			f = (b - a) / (n - 1);
			printf("X=%.3lf F(X)=%.3lf\n", x, 1 - sin(x));
		}
	}
	//system("pause");