#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstdlib>
#include <stdio.h>
#include <math.h>
#include <iomanip>
#include <cstring>

using namespace std;


int main() {
	int kord[60000][2], n;
	long double summ1 = 0;
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		scanf("%d%d", &kord[i][0], &kord[i][1]);
	}

	for (int i = 0; i < n; i++) {
		summ1 += (kord[i][0] * kord[(i + 1) % n][1] - kord[i][1] * kord[(i + 1) % n][0]) / 2.0;
	}

	printf("%.1llf", summ1 >= 0 ? summ1 : -summ1);
	return 0;
}

/*
Многоугольник на плоскости задан целочисленными координатами своих N вершин в декартовой системе координат. Требуется найти площадь многоугольника. Стороны многоугольника соприкасаются только в вершинах и не пересекаются.
*/