#include <iostream>
#include <stdio.h>
#include <algorithm>
#include <vector>
#include <cmath>

using namespace std;

long long x_1, x_2, x_3, y_1, y_2, y_3;
double a, b, c;

int main() {
	scanf("%lld%lld%lld%lld%lld%lld", &x_1, &y_1, &x_2, &y_2, &x_3, &y_3);
	a = sqrt((x_2 - x_1)*(x_2 - x_1) + (y_2 - y_1)*(y_2 - y_1));
	b = sqrt((x_3 - x_2)*(x_3 - x_2) + (y_3 - y_2)*(y_3 - y_2));
	c = sqrt((x_3 - x_1)*(x_3 - x_1) + (y_3 - y_1)*(y_3 - y_1));
	double p = (a + b + c) / (double)2;
	printf("%.6lf", sqrt(p*(p - a)*(p - b)*(p - c)));
	return 0;
}