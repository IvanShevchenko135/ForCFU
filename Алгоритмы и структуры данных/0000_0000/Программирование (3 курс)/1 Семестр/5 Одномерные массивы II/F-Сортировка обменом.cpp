#define _CRT_SECURE_NO_WARNINGS 
#include <iostream>
#include <cstdlib>
#include <stdio.h> 
#include <math.h>
#include <iomanip> 
using namespace std;

int main()
{
	int N, K, temp, mass[101];
	scanf("%d%d", &N, &K);

	for (int i = 0; i < N; i++) { //Initialization
		scanf("%d", &mass[i]);
	}

	for (int j = 0; j < K; j++) {
		for (int i = 0; i < N - 1; i++) {
			if (mass[i] > mass[i + 1]) {
				temp = mass[i + 1];
				mass[i + 1] = mass[i];
				mass[i] = temp;
			}
		}
	}

	for (int i = 0; i < N; i++) { //Output
		printf("%d ", mass[i]);
	}

	return 0;
}