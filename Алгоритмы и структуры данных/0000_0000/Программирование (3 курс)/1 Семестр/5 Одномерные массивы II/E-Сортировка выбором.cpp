#define _CRT_SECURE_NO_WARNINGS 
#include <iostream>
#include <cstdlib>
#include <stdio.h> 
#include <math.h>
#include <iomanip> 
using namespace std;

int main()
{
	int N, K, temp, mass[101];
	scanf("%d%d", &N, &K);

	for (int i = 0; i < N; i++) {
		scanf("%d", &mass[i]);
	}

	for (int i = 0; i < K; i++) {
		for (int j = i + 1; j < N; j++) {
			if (mass[i] > mass[j]) {
				temp = mass[j];
				mass[j] = mass[i];
				mass[i] = temp;
			}
		}
	}

	for (int i = 0; i < N; i++) {
		printf("%d ", mass[i]);
	}


	return 0;
}