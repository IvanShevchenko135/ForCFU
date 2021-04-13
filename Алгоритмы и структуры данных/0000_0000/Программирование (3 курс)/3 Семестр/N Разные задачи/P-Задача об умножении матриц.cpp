#define _CRT_SECURE_NO_WARNINGS 
#include <iostream> 
#include <cstdlib> 
#include <stdio.h> 
#include <vector> 
#include <set> 
#include <fstream> 
#include <algorithm> 
#include <math.h> 
#include <queue> 
#include <iterator> 
using namespace std;

int n;
int r[101];
long long per[101][101];

long long matrix(int k, int p) {
	if (per[k][p] == -1) {
		if (k == p) {
			per[k][p] = 0;
		}
		else {
			long long min = matrix(k, p - 1) + matrix(p, p) + r[k - 1] * r[p - 1] * r[p];
			for (int i = k; i < p; i++) {
				int temp = matrix(k, i) + matrix(i + 1, p) + r[k - 1] * r[i] * r[p];
				if (temp < min) {
					min = temp;
				}
			}
			per[k][p] = min;
		}
	}
	return per[k][p];
}

int main() {
	int T;
	scanf("%d", &T);
	while (T--) {
		scanf("%d", &n);
		for (int i = 0; i <= n; i++) {
			scanf("%d", &r[i]);
		}
		for (int i = 0; i <= n; i++) {
			for (int j = 0; j <= n; j++) {
				per[i][j] = -1;
			}
		}
		printf("%lld\n", matrix(1, n));
	}
	return 0;
}
/*
Задача P: Задача об умножении матриц
Необходимо выполнить умножение n матриц M1 × M2 × M3 ×... × Mn. Размеры матриц известны и заданы: r0, r1, r2,... rn. Матрица Mi имеет размеры ri-1 × ri.

Найдите наименьшее возможное количество элементарных операций умножения элементов матриц, необходимое для вычисления указанного выше произведения.

Input
Первая строка стандартного потока ввода содержит количество тестовых случаев Т.

Каждый тестовый случай состоит из двух строк.

Первая строка содержит количество матриц n (1 ≤ n ≤ 100).

Вторая строка содержит n+1 натуральное число r0, r1, r2,... rn - размеры матриц. Числа разделены одним пробелом и лежат в диапазоне от 1 до 100.

Output
Для каждого тестового случая выведите в отдельную строку минимальное количество элементарных операций умножения элементов матриц.

Примеры
Входные данные
2
3
10 100 5 50
4
10 20 50 1 100
Результат работы
7500
2200
*/