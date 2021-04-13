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
	int N, M;
	scanf("%d%d", &N, &M);
	int A[101][101];

	for (int i = 0; i < N; i++) {
		for (int j = 0; j < M; j++) {
			scanf("%d", &A[i][j]);
		}
	}

	for (int j = 0; j < M - 1; j++) {
		for (int k = j + 1; k < M; k++) {
			if (A[N - 1][j] > A[N - 1][k]) {
				for (int i = 0; i < N; i++) {
					swap(A[i][j], A[i][k]);
				}
			}
		}
	}



	for (int i = 0; i < N; i++) {
		for (int j = 0; j < M; j++) {
			printf("%d ", A[i][j]);
		}
		printf("\n");
	}
	return 0;
}

/*
Задан двумерный массив целых чисел размера N x M. Переставьте в массиве столбцы так, чтобы значения в последней строке массива шли по возрастанию.
*/