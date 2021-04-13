#define _CRT_SECURE_NO_WARNINGS 
#include <iostream>
#include <cstdlib>
#include <stdio.h> 
#include <math.h>
#include <iomanip> 
using namespace std;


long long N, mass[10000], b, maxx = 0;

int main()
{

	scanf("%lld", &N);

	for (int i = 0; i < N; i++) {
		scanf("%lld", &b);
		mass[b]++;
	}

	for (int i = 0; i < 10000; i++) {
		if (mass[i] > maxx) {
			maxx = mass[i];
		}
	}

	printf("%lld", maxx);
	return 0;
}