#include <iostream>
#include <stdio.h>
#include <algorithm>
#include <vector>
#include <cmath>

using namespace std;

long long a, b;

int main() {
	scanf("%lld%lld", &a, &b);
	double c = sqrt(a*a + b * b);
	printf("%.6lf", c);
	return 0;
}