#define _CRT_SECURE_NO_WARNINGS 
#include <iostream>
#include <cstdlib>
#include <stdio.h> 
#include <math.h>
#include <iomanip> 
using namespace std;

int main()
{
	long long T, N, b, c = 0, summ = 0;
	scanf("%lld", &T);
	for (int i = 0; i < T; i++) {
		scanf("%lld", &N);
		for (int j = 0; j < N; j++) {
			scanf("%lld", &b);
			if (b % 6 == 0 && b > 0) {
				summ += b;
				c++;
			}
		}
		printf("%lld %lld\n", c, summ);
		c = 0;
		summ = 0;
	}
	return 0;
}