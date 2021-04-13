#include <iostream>
#include <stdio.h>
#include <algorithm>
#include <vector>

using namespace std;

long long n, sum;

int main() {
	scanf("%lld", &n);
	while (n > 0) {
		sum += n % 10;
		n /= 10;
	}
	printf("%lld", sum);
	return 0;
}