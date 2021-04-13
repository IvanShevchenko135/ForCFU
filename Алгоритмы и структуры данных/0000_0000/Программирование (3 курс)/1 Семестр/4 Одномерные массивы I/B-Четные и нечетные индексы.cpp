#define _CRT_SECURE_NO_WARNINGS 
#include <iostream>
#include <cstdlib>
#include <stdio.h> 
#include <math.h>
#include <iomanip> 
using namespace std;

int main()
{
	int mass[100], N;
	scanf("%ld", &N);
	for (int i = 0; i < N; i++) {
		scanf("%ld", &mass[i]);
	}

	for (int i = 0; i < N; i += 2) {
		printf("%ld ", mass[i]);
	}

	printf("\n");

	for (int i = 1; i < N; i += 2) {
		printf("%ld ", mass[i]);
	}
	cin >> N;
	return 0;
}