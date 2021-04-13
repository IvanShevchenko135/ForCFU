#define _CRT_SECURE_NO_WARNINGS 
#include <iostream>
#include <cstdlib>
#include <stdio.h> 
#include <math.h>
#include <iomanip> 
#include <string>
using namespace std;

int Kramer(int A[][2], int *B, double &x, double &y) {
	B[0] = (A[0][0] * A[1][1]) - (A[0][1] * A[1][0]);
	B[1] = (A[2][0] * A[1][1]) - (A[0][1] * A[2][1]);
	B[2] = (A[0][0] * A[2][1]) - (A[2][0] * A[1][0]);

	if (B[0] == 0) {
		if (B[1] == 0 && B[2] == 0) {
			return 1;
		} else {
			return 0;
		}
	}
	x = (double)B[1] / (double)B[0];
	y = (double)B[2] / (double)B[0];

	return 2;
}

int main() {
	int mass[3][2];
	int det[3], res;
	double x, y;
	scanf("%d%d%d%d%d%d", &mass[0][0], &mass[0][1], &mass[2][0], &mass[1][0], &mass[1][1], &mass[2][1]);
	res = Kramer(mass, det, x, y);

	if (res == 2) {
		printf("%.6lf %.6lf", x, y);
	}
	else if (res == 1) {
		printf("Infinity!");
	}
	else {
		printf("No solution!");
	}
}
/*
Система двух линейных уравнений с двумя неизвестными

Напишите функцию, которая получает коэффициенты A, B, C, D, E, F системы двух линейных уравнений с двумя неизвестными вида

Ax + By = C
Dx + Ey = F

и вычисляет решения этой системы методом Крамера.

Функция должна иметь следующий заголовок

int Kramer(int A[][2], int *B, double &x, double &y);

Если система не имеет решение, функция должна возвращать 0. Если система имеет бесконечно много решений, функция должна возвращать 1.
*/