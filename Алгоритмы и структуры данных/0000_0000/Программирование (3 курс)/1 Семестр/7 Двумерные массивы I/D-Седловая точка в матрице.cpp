#define _CRT_SECURE_NO_WARNINGS 
#include <iostream>
#include <cstdlib>
#include <stdio.h> 
#include <math.h>
#include <iomanip> 
#include <cstring> 
#include <string> 
using namespace std;

int mi[10001]; //??????? ???????????? ???????? ? ?????? i
int ma[10001]; //?????? ????????????? ???????? ? ??????? j

int main() {
	int N, M;
	scanf("%d%d", &N, &M);
	int A[N][M];

	for (int i = 0; i < N; i++) {
		for (int j = 0; j < M; j++) {
			scanf("%d", &A[i][j]);
		}
	}

	for (int i = 0; i < N; i++) {
		for (int j = 0; j < M; j++) { 
			if (A[i][mi[i]] > A[i][j]) { 
				mi[i] = j; 
			}
		}
	}
	
	for (int j = 0; j < M; j++) {
		for (int i = 0; i < N; i++) { 
			if (A[ma[j]][j] < A[i][j]) { 
				ma[j] = i; 
			}
		}
	}
	
	for(int i = 0; i < N; i++){
		for(int j = 0; j < M; j++){
			if(i == ma[j] && j == mi[i]){
				printf("%d\n%d %d", A[i][j], i, j);
				return 0;
			}
		}
	}
	
	printf("0");
	return 0;
}

/*
Задан двумерный массив целых чисел размера N x M. Найдите в массиве седловую точку - значение, минимальное в строке и максимальное в столбце.
*/