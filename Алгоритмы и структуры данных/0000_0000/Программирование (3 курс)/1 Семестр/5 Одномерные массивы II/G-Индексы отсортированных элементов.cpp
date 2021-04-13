#define _CRT_SECURE_NO_WARNINGS 
#include <iostream>
#include <cstdlib>
#include <stdio.h> 
#include <math.h>
#include <iomanip> 
using namespace std;

int main()
{
	int N, temp, mass[101], mass2[101];
	scanf("%d", &N);

	for (int i = 0; i < N; i++) { //Initialization
		scanf("%d", &mass[i]);
		mass2[i] = i;
	}

	for (int i = 0; i < N; i++) { //Sort
		for (int j = i + 1; j < N; j++) {
			if (mass[i] > mass[j]) {
				temp = mass[j];
				mass[j] = mass[i];
				mass[i] = temp;

				temp = mass2[j];
				mass2[j] = mass2[i];
				mass2[i] = temp;
			}
		}
	}

	for (int i = 0; i < N; i++) { //Output
		printf("%d ", mass2[i]);
	}

	return 0;
}