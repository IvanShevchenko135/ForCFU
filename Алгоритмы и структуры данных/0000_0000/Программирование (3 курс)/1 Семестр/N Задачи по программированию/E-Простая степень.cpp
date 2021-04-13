#define _CRT_SECURE_NO_WARNINGS 
#include <iostream>
#include <cstdlib>
#include <stdio.h> 
#include <math.h>
#include <iomanip> 
using namespace std;

int main()
{
	long long T, a, k, p;
	scanf("%lld", &T);
	for (int i = 0; i < T; i++) {
		scanf("%lld%lld", &a, &k);
		p = a;
		for (int j = 1; j < k; j++) {
			a *= p;
		}
		printf("%lld\n", a);
	}
	return 0;
}