#define _CRT_SECURE_NO_WARNINGS 
#include <iostream> 
#include <cstdlib> 
#include <stdio.h> 
#include <string> 
#include <set> 
#include <fstream> 
#include <algorithm> 
#include <math.h> 
#include <queue> 
#include <iterator> 
#include <map>

int T, N, max, min, arr[1000];
int main() {
	scanf("%d", &T);
	while (T--) {
		min = 0;
		max = 0;
		scanf("%d", &N);
		for (int i = 0; i < N; i++) {
			scanf("%d", &arr[i]);
			if (arr[i] > arr[max]) {
				max = i;
			}
			if (arr[i] < arr[min]) {
				min = i;
			}
		}
		max = arr[max];
		min = arr[min];
		for (int i = 0; i < N; i++) {
			if (arr[i] == max) {
				printf("%d", min);

			}
			else if (arr[i] == min) {
				printf("%d", max);
			}
			else {
				printf("%d", arr[i]);
			}
			if (i != N - 1) {
				printf(" ");
			}
		}
		printf("\n");
	}
	return 0;
}
/*
Задача G: Замена элементов массива
Задан одномерный массив А целых чисел. Необходимо заменить в массиве все максимальные элементы минимальными и наоборот - минимальные элементы заменить максимальными.

Input
Входные данные начинаются с числа Т - это количество массивов, которые будут идти далее. Данные о каждом массиве занимают две строки. В первой строке задано количество элементов массива N (0 < N ≤ 100). В следующей строке через пробел заданы сами элементы массива, значения которых по модулю не превышают 100.

Output
Для каждого массива из входных данных в отдельной строке выведите новый массив.

Примеры
Входные данные
3
4
4 2 5 7
5
2 6 4 6 4 
3
1 2 2
Результат работы
4 7 5 2
6 2 4 2 4
2 1 1
*/