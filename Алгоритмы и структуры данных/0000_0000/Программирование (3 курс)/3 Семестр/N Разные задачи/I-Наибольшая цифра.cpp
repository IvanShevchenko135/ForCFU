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

int T, N, max;
int main() { 
	scanf("%d", &T);
	while (T--) {
		scanf("%d", &N);
		max = N % 10;
		while (N) {
			N /= 10;
			if (N % 10 > max) {
				max = N % 10;
			}
		}
		printf("%d\n", max);
	}
	return 0;
}
/*
Задача I: Наибольшая цифра
Задано натуральное число, состоящее не более, чем из восьми цифр. Необходимо найти наибольшую цифру этого числа.

Input
Входные данные начинаются с числа Т - это количество чисел, которые будут идти далее. Следующие Т строк содержат натуральные числа. Каждое число содержится в отдельной строке.

Output
Для каждого натурального числа из входных данных вывести в отдельной строке его наибольшую цифру.

Примеры
Входные данные
3
23
5436
343898
Результат работы
3
6
9
*/