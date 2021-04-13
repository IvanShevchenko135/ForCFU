#define _CRT_SECURE_NO_WARNINGS 
#include <iostream>
#include <cstdlib>
#include <stdio.h> 
#include <math.h>
#include <iomanip> 
using namespace std;

int main()
{
	long long T, n, fib[100];
	scanf("%lld", &T);
	fib[0] = 1;
	fib[1] = 1;

	for (int i = 0; i < T; i++) {
		scanf("%lld", &n);
		for (int j = 0; j < n; j++) {
			fib[j + 2] = fib[j] + fib[j + 1];
		}
		printf("%lld\n", fib[n - 1]);
	}
	return 0;
}