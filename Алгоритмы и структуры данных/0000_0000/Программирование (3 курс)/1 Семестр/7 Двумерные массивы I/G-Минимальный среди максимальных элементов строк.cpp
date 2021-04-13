#define _CRT_SECURE_NO_WARNINGS 
#include <iostream>
#include <cstdlib>
#include <stdio.h> 
#include <math.h>
#include <iomanip> 
#include <cstring> 
#include <string> 
using namespace std;


int main() {
	int A[101][101];
	int ma[101];
	int mi;
	int N, M;
	scanf("%d%d", &N, &M);
	for (int i = 0; i < N; i++) {
		scanf("%d", &A[i][0]);
		ma[i] = A[i][0];
		for (int j = 1; j < M; j++) {
			scanf("%d", &A[i][j]);
			if (ma[i] < A[i][j]) {
				ma[i] = A[i][j];
			}
		}
	}

	mi = ma[0];
	for (int i = 1; i < N; i++) {
		if (mi > ma[i]) {
			mi = ma[i];
		}
	}
	printf("%d\n", mi);

	return 0;
}

/*
Задан двумерный массив целых чисел размера N x M. Найдите минимальное значение среди максимальных значений в каждой строке массива.
*/