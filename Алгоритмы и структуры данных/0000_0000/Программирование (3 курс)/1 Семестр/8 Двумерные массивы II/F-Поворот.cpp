#define _CRT_SECURE_NO_WARNINGS 
#include <iostream>
#include <cstdlib>
#include <stdio.h> 
#include <math.h>
#include <iomanip> 
using namespace std;

int main(){
	int N, M;
	scanf("%d%d", &N, &M);
	int mass[N][M];
	
	for(int i = 0; i < N; i++){
		for(int j = 0; j < M; j++){
			scanf("%d", &mass[i][j]);
		}
	}
	
	printf("%d %d\n", M, N);
	for(int j = 0; j < M; j++){
		for(int i = N - 1; i >= 0; i--){
			printf("%d ", mass[i][j]);
		}
		printf("\n");
	}
	return 0;
}

/*
Задан двумерный массив целых чисел размера N x M. Поверните его на 90 градусов по часовой стрелке.
*/