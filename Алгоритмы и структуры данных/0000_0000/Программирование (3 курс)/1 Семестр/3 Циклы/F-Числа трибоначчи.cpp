#define _CRT_SECURE_NO_WARNINGS 
#include <iostream>
#include <cstdlib>
#include <stdio.h> 
#include <math.h>
#include <iomanip> 
using namespace std;


int main()
{
	unsigned long long a[100], N;
	scanf("%lld", &N);
	a[0] = 0;
	a[1] = 0;
	a[2] = 1;
	for (int i = 3; i <= N; i++) {
		a[i] = a[i - 1] + a[i - 2] + a[i - 3];
	}
	printf("%llu", a[N]);
}