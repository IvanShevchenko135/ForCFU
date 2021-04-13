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
	int ma, mi, maj, mij;
	int temp;

	for (int i = 0; i < N; i++) {
		for (int j = 0; j < M; j++) {
			scanf("%d", &A[i][j]);
		}
	}

	ma = A[0][0];
	mi = A[0][0];
	maj = 0;
	mij = 0;
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < M; j++) {
			if (ma < A[i][j]) {
				ma = A[i][j];
				maj = j;
			}
			if (mi > A[i][j]) {
				mi = A[i][j];
				mij = j;
			}
		}
	}

	for (int i = 0; i < N; i++) {
		swap(A[i][mij], A[i][maj]);
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
Задан двумерный массив целых чисел размера N x M. Переставьте в массиве два столбца - столбец, который содержит минимальное значение из всех элементов массива, и столбец, который содержит максимальное значение из всех элементов массива.
*/