#define _CRT_SECURE_NO_WARNINGS 
#include <iostream>
#include <cstdlib>
#include <stdio.h> 
#include <math.h>
#include <iomanip> 
using namespace std;

int main()
{
	int T;
	scanf("%d", &T);
	for (int h = 0; h < T; h++) {
		int mass[1000], N;
		scanf("%ld", &N);
		for (int i = 0; i < N; i++) {
			scanf("%ld", &mass[i]);
		}
		for (int i = N - 1; i > -1; i--) {
			if (i == 0) {
				printf("%ld", mass[i]);
			}
			else {
				printf("%ld ", mass[i]);
			}
		}
		printf("\n");
	}
	return 0;
}
/*
Дан массив целых чисел размера N. Вывести его элементы в обратном порядкe
*/