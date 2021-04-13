#define _CRT_SECURE_NO_WARNINGS 
#include <iostream>
#include <cstdlib>
#include <stdio.h> 
#include <math.h>
#include <iomanip> 
using namespace std;

int main()
{
	int mass[100], N, dif, r1, r2;
	scanf("%ld", &N);

	for (int i = 0; i < N; i++) {
		scanf("%ld", &mass[i]);
	}

	dif = abs(mass[0] - mass[1]);
	r1 = 0;
	r2 = 1;

	for (int i = 0; i < N - 1; i++) {
		for (int j = i + 1; j < N; j++) {
			if ((abs(mass[i] - mass[j])) < dif) {
				r1 = i;
				r2 = j;
				dif = abs(mass[i] - mass[j]);
			}
		}
	}
	printf("%ld %ld", r1, r2);
	printf("\n");
	return 0;
}