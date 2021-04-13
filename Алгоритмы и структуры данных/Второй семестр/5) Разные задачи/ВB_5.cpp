#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

unsigned long long st[1000000], minv[1000000], x[1000001], ptr = 0;

int main() {

	unsigned long long sum = 0, a, b, c, n;
	
	scanf("%lld", &n);
	scanf("%lld", &a);
	scanf("%lld", &b);
	scanf("%lld", &c);
	scanf("%lld", &x[0]);
	for (int i = 1; i <= n; i++) {
		x[i] = x[i - 1] * x[i - 1];
		x[i] *= a;
		x[i] += b * x[i - 1] + c;
		x[i] /= 100;
		x[i] %= 1000000;
		if ((x[i] % 5) < 2) {
			if (ptr != 0) ptr--;
		}
		else {
			st[ptr++] = x[i];
			if (ptr == 1) minv[ptr - 1] = st[0];
			else {
				if (minv[ptr - 2] < st[ptr - 1]) minv[ptr - 1] = minv[ptr - 2];
				else minv[ptr - 1] = st[ptr - 1];
			}
		}
		if (ptr != 0) sum += minv[ptr - 1];
	}
	printf("%lld\n", sum);
	return 0;
}