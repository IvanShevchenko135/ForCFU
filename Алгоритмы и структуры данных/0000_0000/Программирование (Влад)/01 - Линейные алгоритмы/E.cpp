#include <iostream>
#include <stdio.h>
#include <algorithm>
#include <vector>
#include <cmath>

using namespace std;

long long a, b, c;

int main() {
	scanf("%lld%lld%lld", &a, &b, &c);
	long long d = b * b - 4 * a*c;
	printf("%lld %lld", ((-b + (int)sqrt(d)) / (2 * a)), ((-b - (int)sqrt(d)) / (2 * a)));
	return 0;
}