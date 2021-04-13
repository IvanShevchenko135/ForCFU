#define _CRT_SECURE_NO_WARNINGS 
#include <iostream>
#include <cstdlib>
#include <stdio.h> 
#include <math.h>
#include <iomanip> 
using namespace std;

int shif(int *mas, int N, int k, char c) {
	int mass2[1000];
	int j = 0;
	if (c == 'l') {
		for (int i = k; i < N; i++) {
			mass2[j++] = mas[i];
		}
		for (int i = 0; i < k; i++) {
			mass2[j++] = mas[i];
		}
	} else {
		for (int i = N - k; i < N; i++) {
			mass2[j++] = mas[i];
		}
		for (int i = 0; i < N - k; i++) {
			mass2[j++] = mas[i];
		}
	}

	for (int i = 0; i < N; i++) {
		mas[i] = mass2[i];
	}
	return 0;
}

int main()
{	
	int N, k;
	int mass[1000];
	char c;
	scanf("%d", &N);
	for (int i = 0; i < N; i++) {
		scanf("%d", &mass[i]);
	}
	scanf("%d%c%c", &k, &c, &c);
	k %= N;
	shif(mass, N, k, c);
	
	for (int i = 0; i < N; i++) {
		printf("%d ", mass[i]);
	}
	return 0;
}

/*
Напишите функцию, которая осуществляет циклический сдвиг массива целых положительных чисел на заданное количество позиций в заданном направлении.
*/