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
	long long summ = 0;
	long long maxsumm = 0;
	int index = 0;
	int N, M;
	scanf("%d%d", &N, &M);
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < M; j++) {
			scanf("%d", &A[i][j]);
		}
	}

	for (int j = 0; j < M; j++) {
		for (int i = 0; i < N; i++) {
			summ += A[i][j];
		}
		if (j == 0) {
			maxsumm = summ;
		}else if (summ > maxsumm) {
			maxsumm = summ;
			index = j;
		}
		summ = 0;
	}

	printf("%d %lld", index, maxsumm);
	return 0;
}

/*
Задан двумерный массив целых чисел размера N x M. Найдите в массиве столбец с максимальной суммой элементов.
*/