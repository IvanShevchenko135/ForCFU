#define _CRT_SECURE_NO_WARNINGS 
#include <iostream>
#include <cstdlib>
#include <stdio.h> 
#include <math.h>
#include <iomanip> 
using namespace std;

int main()
{
	long long N, mass[1000000];
	scanf("%lld", &N);

	for (int i = 0; i < N; i++) {
		scanf("%lld", &mass[i]);
	}

	int iter = 0, max = 0;;

	for (int i = 0; i < N - 1; i++) {
		if (mass[i] == mass[i + 1]) {
			iter++;
		}
		else {
			if (iter > max) {
				max = iter;
			}
			iter = 0;
		}
	}

	if (iter != 0) {
		max = iter;
	}
	if (N == 0) {
		printf("0");
	}
	else {
		printf("%d", max + 1);
	}
	return 0;
}