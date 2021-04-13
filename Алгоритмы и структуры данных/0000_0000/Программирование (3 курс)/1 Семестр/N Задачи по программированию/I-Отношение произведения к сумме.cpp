#define _CRT_SECURE_NO_WARNINGS 
#include <iostream>
#include <cstdlib>
#include <stdio.h> 
#include <math.h>
#include <iomanip> 
using namespace std;

int main()
{
	long long T, N, mult = 1, summ = 0;
	scanf("%lld", &T);
	for (int i = 0; i < T; i++) {
		scanf("%lld", &N);
		while (N != 0) {
			summ += (N % 10);
			mult *= (N % 10);
			N /= 10;
		}
		printf("%.3lf\n", ((double)mult / (double)summ));
		mult = 1;
		summ = 0;
	}
	return 0;
}