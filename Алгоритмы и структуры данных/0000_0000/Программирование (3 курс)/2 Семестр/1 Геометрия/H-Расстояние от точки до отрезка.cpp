#define _CRT_SECURE_NO_WARNINGS 
#include <iostream>
#include <cstdlib>
#include <stdio.h> 
#include <math.h>
#include <iomanip> 
using namespace std;

double linear(int x1, int y1, int x2, int y2) {
	return sqrt(abs(x1 - x2) * abs(x1 - x2) + abs(y1 - y2) * abs(y1 - y2));
}


int main() {
	double AB, BC, AC;
	int coord[3][2];
	for (int i = 0; i < 3; i++) {
		scanf("%d%d", &coord[i][0], &coord[i][1]);
	}
	AB = linear(coord[0][0], coord[0][1], coord[1][0], coord[1][1]);
	BC = linear(coord[1][0], coord[1][1], coord[2][0], coord[2][1]);
	AC = linear(coord[0][0], coord[0][1], coord[2][0], coord[2][1]);
	long double cosABC = ((AB * AB) + (BC * BC) - (AC * AC)) / (2 * AB * BC);
	long double cosACB = ((BC * BC) + (AC * AC) - (AB * AB)) / (2 * AC * BC);

	double p = (AB + BC + AC) / 2;
	if (cosABC < 0) {
		printf("%.4lf", AB);
	}
	else if (cosACB < 0) {
		printf("%.4lf", AC);
	}
	else if (BC == 0) {
		printf("%.4lf", AB);
	}
	else {
		printf("%.4lf", (2 / BC) * sqrt(p * (p - AB) * (p - BC) * (p - AC)));
	}
	return 0;
}

/*
Расстояние от точки до отрезка
Необходимо найти расстояние от точки до отрезка.

Формат входных данных
Шесть целых неотрицательных чисел, не превышающих 10000 - координаты точки и концов отрезка.

Формат результата
Расстояние от точки до отрезка, округленное до 4-х знаков после запятой.
*/