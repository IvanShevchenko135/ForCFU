#define _CRT_SECURE_NO_WARNINGS 
#include <iostream>
#include <cstdlib>
#include <stdio.h> 
#include <math.h>
#include <iomanip> 
#include <string.h> 
using namespace std;


void MinMax(int a, int b, int c, int d, int &maxv, int &minv) {
	int mass[4];
	mass[0] = a;
	mass[1] = b;
	mass[2] = c;
	mass[3] = d;

	for (int i = 0; i < 3; i++) {
		for (int j = i + 1; j < 4; j++) {
			if (mass[i] > mass[j]) {
				swap(mass[i], mass[j]);
			}
		}
	}

	minv = mass[0];
	maxv = mass[3];

}
int main() {
	int min, max;
	int a[4];
	for (int i = 0; i < 4; i++) { scanf("%d", &a[i]); }

	MinMax(a[0], a[1], a[2], a[3], max, min);
	printf("%d %d", min, max);

	return 0;
}

/*
Напишите функцию, которая находит наименьшее и наибольшее значения из четырех целых чисел и возвращает эти значения по ссылке.

Заголовок функции должен выглядеть так:

void MinMax(int a, int b, int c, int d, int &maxv, int &minv);
*/