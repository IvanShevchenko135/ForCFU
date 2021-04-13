#define _CRT_SECURE_NO_WARNINGS 
#include <iostream>
#include <cstdlib>
#include <stdio.h> 
#include <math.h>
#include <iomanip> 
#include <string>
using namespace std;



long long mass[40][40];
long long F(int M, int N) {
	if(mass[M][N] == 0){
		mass[M][N] = 1;
		if(M == 2){
			mass[M][N] = (N*(N+1))/2;;
		}else if(M == 1){
			mass[M][N] = N;			
		}else if(M == 0){
			mass[M][N] = 1;
		}else{
			for(int i = 2; i <= N; i++){
				mass[M][N] += F(M-1, i);
			}
		}
	}
	return mass[M][N];	
}

int main() {
	int N, M;
	scanf("%d%d", &N, &M);
	printf("%lld", F(N - M, M + 1));
	return 0;
}

/*
Дана функция, аргументы которой – неотрицательные целые числа m и n (m ≤ n):
Напишите рекурсивную функцию с запоминанием, которая возвращает значение этой функции.
*/