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
	scanf("%d%d", &N, &M);
	int resi = 0, resj = 0, nat = 1;
	int mass[N][M];
	for (int i = 0, j = M - 1; (i < N - 1)  || (j > 0);) {
		for (resj = j, resi = i; (resi >= 0) && (resj >= 0);) {
			mass[resi][resj] = nat;
			nat++;
			resi--;
			resj--;
		}

		if (i + 1 < N) {
			i++;
		}
		else {
			j--;
		}
	}

	mass[N - 1][0] = N * M;
	
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

9 6 3 1
11 8 5 2
12 10 7 4
*/