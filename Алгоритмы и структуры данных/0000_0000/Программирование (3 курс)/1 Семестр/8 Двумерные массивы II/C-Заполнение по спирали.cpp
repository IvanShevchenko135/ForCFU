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
	int ffN = N;
	int ffM = M;
	int mass[N][M];
	int nat = 1;
	

	for (int k = 0; k < ffM || k < ffN; k++) {
		if(nat <= ffN * ffM){
			for (int i = k; i < M; i++) {
				mass[k][i] = nat++;
			}
		}
		if(nat <= ffN * ffM){
			for (int i = k + 1; i < N; i++) {
				mass[i][M - 1] = nat++;
			}
		}
		if(nat <= ffN * ffM){
			for (int i = M - 2; i >= k; i--) {
				mass[N - 1][i] = nat++;
			}
		}
		if(nat <= ffN * ffM){
			for (int i = N - 2; i > k; i--) {
				mass[i][k] = nat++;
			}
		}
		N--;
		M--;
	}



	for (int i = 0; i < ffN; i++) {
		for (int j = 0; j < ffM; j++) {
			printf("%d ", mass[i][j]);
		}
		printf("\n");
	}
	return 0;
}

/*
Заполните двумерный массив Aij размера N x M последовательными натуральными числами от 1 до N*M по спирали по часовой стрелке, как показано ниже.

1 2 3 4
10 11 12 5
9 8 7 6
*/