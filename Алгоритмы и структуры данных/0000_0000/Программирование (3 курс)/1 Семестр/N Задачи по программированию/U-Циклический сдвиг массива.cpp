#define _CRT_SECURE_NO_WARNINGS 
#include <iostream>
#include <cstdlib>
#include <stdio.h> 
#include <math.h>
#include <iomanip> 
using namespace std;


int main()
{
	int T;
	scanf("%d", &T);
	for (int i = 0; i < T; i++) {
		int N, k, mass[1001];
		scanf("%d%d", &N, &k);

		for (int i = 0; i < N; i++) { //input
			scanf("%d", &mass[i]);
		}


		for (int i = N - (k%N); i < N; i++) { //input one
			printf("%d ", mass[i]);
		}

		for (int i = 0; i < N - (k%N); i++) { //input two
			if (i == N - (k%N) - 1) {
				printf("%d", mass[i]);
			}
			else {
				printf("%d ", mass[i]);
			}
		}
		printf("\n");
	}
	return 0;
}
/*
Дан массив размера N ? 2 и число k (0 < k < N).

Осуществить циклический сдвиг элементов массива вправо на k позиций.
*/