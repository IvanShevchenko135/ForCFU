#define _CRT_SECURE_NO_WARNINGS 
#include <iostream>
#include <cstdlib>
#include <stdio.h> 
#include <math.h>
#include <iomanip> 
using namespace std;

int main()
{
	long long T, a, b, n;
	scanf("%lld", &T);
	for (int i = 0; i < T; i++) {
		scanf("%lld", &n);
		a = n % 10;
		b = n / 100;
		if (a > b) {
			printf("%lld\n", a);
		}
		else if (a < b) {
			printf("%lld\n", b);
		}
		else {
			printf("=\n");
		}

	}
	return 0;
}