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
	for (int i = 0; i < T; i++) {
		int N, b, mass[101], maxx = 0;
		for (int i = 0; i < 101; i++) {
			mass[i] = 0;
		}
		scanf("%d", &N);

		for (int i = 0; i < N; i++) {
			scanf("%d", &b);
			mass[b]++;
		}

		for (int i = 0; i < 101; i++) {
			if (mass[i] > maxx) {
				maxx = mass[i];
			}
		}

		printf("%d\n", maxx);
	}
	return 0;
}
/*
Дан целочисленный массив размера N. Определить максимальное количество его одинаковых элементов.
*/