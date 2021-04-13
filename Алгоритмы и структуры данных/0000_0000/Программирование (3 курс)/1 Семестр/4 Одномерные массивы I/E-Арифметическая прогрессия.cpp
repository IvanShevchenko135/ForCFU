#define _CRT_SECURE_NO_WARNINGS 
#include <iostream>
#include <cstdlib>
#include <stdio.h> 
#include <math.h>
#include <iomanip> 
using namespace std;

int main()
{
	int mass[100], N, dif = 0;
	scanf("%ld", &N);
	
	for (int i = 0; i < N; i++) {
		scanf("%ld", &mass[i]);
	}

	for (int i = 0; i < N - 2; i++) {
		if ((mass[i + 1] - mass[i]) != (mass[i + 2] - mass[i + 1])) {
			printf("0");
			dif = 1;
			break;
		}
	}
	
	if (dif == 0) {
		printf("%ld", (mass[1] - mass[0]));
	}

	printf("\n");
	return 0;
}