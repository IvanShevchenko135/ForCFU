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
		int mas[1000], N, min, idmin, max, idmax;
		scanf("%d", &N);
		for (int i = 0; i < N; i++) {
			scanf("%d", &mas[i]);
		}

		min = mas[0];
		idmin = 0;
		max = mas[0];
		idmax = 0;

		for (int i = 1; i < N; i++) {
			if (mas[i] > max) {
				max = mas[i];
				idmax = i;
			}
			if (mas[i] < min) {
				min = mas[i];
				idmin = i;
			}
		}

		mas[idmin] = max;
		mas[idmax] = min;

		for (int i = 0; i < N; i++) {
			if (i == N - 1) {
				printf("%d", mas[i]);
			}
			else {
				printf("%d ", mas[i]);
			}
		}

		printf("\n");
	}
	return 0;
}
/*
Дан массив целых чисел размера N. Поменять местами минимальный и максимальный элементы массива.
*/