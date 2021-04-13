#define _CRT_SECURE_NO_WARNINGS 
#include <iostream>
#include <cstdlib>
#include <stdio.h> 
#include <math.h>
#include <iomanip> 
using namespace std;


int main()
{
	int N, M;
	int resi = 0, resj = 0, nat = 1;
	scanf("%d%d", &N, &M);
	int mass[N][M];
	for (int i = 0, j = 0; (i < N - 1)  || (j < M - 1);) {
		for (resj = 0 + j, resi = i; (resi >= 0) && (resj < M);) {
			mass[resi][resj] = nat;
			nat++;
			resi--;
			resj++;
		}

		if (i + 1 < N) {
			i++;
		}
		else {
			j++;
		}
	}

	mass[N - 1][M - 1] = N * M;
	
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < M; j++) {
			printf("%d ", mass[i][j]);
		}
		printf("\n");
	}
	return 0;
}

/*
Заполните двумерный массив Aij размера N x M последовательными натуральными числами от 1 до N*M так, как показано ниже.

1 3 6 9
2 5 8 11
4 7 10 12
*/