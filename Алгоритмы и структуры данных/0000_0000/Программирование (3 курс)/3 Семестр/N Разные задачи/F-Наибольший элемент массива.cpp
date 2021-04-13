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

int T, N, arr[1000], max, score = 0;
int main() { 
	scanf("%d", &T);
	while (T--) {
		score = 0;
		max = 0;
		scanf("%d", &N);
		for (int i = 0; i < N; i++) {
			scanf("%d", &arr[i]);
			if (arr[i] > arr[max]) {
				max = i;
				score = 1;
			}
			else if (arr[i] == arr[max]) {
				score++;
			}
		}
		printf("%d\n", score);
	}
	return 0;
}
/*
Задача F: Наибольший элемент массива
Задан одномерный массив А целых чисел. Посчитать, сколько раз в этом массиве встречается наибольший элемент.

Input
Входные данные начинаются с числа Т - это количество массивов, которые будут идти далее. Данные о каждом массиве занимают две строки. В первой строке задано количество элементов массива N (0 < N ≤ 100). В следующей строке через пробел заданы сами элементы массива, значения которых по модулю не превышают 100.

Output
Для каждого массива из входных данных в отдельной строке выведите единственное число - ответ на задачу.

Примеры
Входные данные
3
4
1 4 3 4
5
-11 33 23 0 -4
3
3 3 3
Результат работы
2
1
3
*/