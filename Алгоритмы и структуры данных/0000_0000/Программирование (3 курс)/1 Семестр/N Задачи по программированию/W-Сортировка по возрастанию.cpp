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
		long long N, temp, mass[1001];
		scanf("%lld", &N);

		for (int i = 0; i < N; i++) { //input
			scanf("%lld", &mass[i]);
		}

		for (int i = 0; i < N; i++) { //sort
			for (int j = i + 1; j < N; j++) {
				if (mass[i] > mass[j]) {
					temp = mass[j];
					mass[j] = mass[i];
					mass[i] = temp;
				}
			}
		}

		for (int i = 0; i < N; i++) { //output
			printf(i == N - 1 ? "%lld\n" : "%lld ", mass[i]);
		}
	}
	return 0;
}

/*
Дан массив целых чисел размера N. Вывести его элементы в возрастающем порядке.
*/