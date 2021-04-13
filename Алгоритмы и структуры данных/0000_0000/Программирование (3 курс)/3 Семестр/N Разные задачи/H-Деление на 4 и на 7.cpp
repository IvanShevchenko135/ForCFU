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

int T, N, Num;
int main() { 
	scanf("%d", &T);
	while (T--) {
		scanf("%d", &N);
		int score = 0;
		for (int i = 0; i < N; i++) {
			scanf("%d", &Num);
			if (Num % 4 == 0 && Num % 7 != 0) {
				score++;
			}
		}
		printf("%d\n", score);
	}
	return 0;
}
/*
Задача H: Деление на 4 и на 7
Задано N целых чисел. Необходимо определить количество тех из них, которые делятся на 4, но не делятся на 7.

Input
Входные данные начинаются с числа Т - это количество наборов чисел, которые будут идти далее. Каждый набор занимает две строки. В первой строке каждого набора задано количество чисел N (0 < N ≤ 100) в наборе. В следующей строке через пробел заданы сами числа, значения которых по модулю не превышают 10000.

Output
Для каждого набора чисел из входных данных в отдельной строке выведите количество указанных чисел.

Примеры
Входные данные
3
4
4 6 20 24
5
-6 -20 24 -28 7
3
1000 2000 3000
Результат работы
3
2
3
*/