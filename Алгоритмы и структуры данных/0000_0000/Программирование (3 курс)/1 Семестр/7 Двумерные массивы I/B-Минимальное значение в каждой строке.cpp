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
	int min[101];
	int N, M;
	scanf("%d%d", &N, &M);
	for (int i = 0; i < N; i++) {
		scanf("%d", &A[i][0]);
		min[i] = A[i][0];
		for (int j = 1; j < M; j++) {
			scanf("%d", &A[i][j]);
			if (min[i] > A[i][j]) {
				min[i] = A[i][j];
			}
		}
	}
	
	for (int i = 0; i < N; i++) {
		printf("%d\n", min[i]);
	}

	return 0;
}

/*
«адан двумерный массив целых чисел размера N x M. Ќайдите минимальное значение в каждой строке массива.
*/
