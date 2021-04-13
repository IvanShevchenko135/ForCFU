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
using namespace std;

int euclidean(int A, int B) {
	while (B) {
		A %= B;
		swap(A, B);
	}
	return A;
}

int main() {
	int	N, T, Numb[102];
	scanf("%d", &T);
	while (T--) {
		scanf("%d", &N);
		for (int i = 0; i < N; i++) {
			scanf("%d", &Numb[i]);
		}
		int temp = Numb[0];
		for (int i = 1; i < N; i++) {
			temp = euclidean(temp, Numb[i]);
		}
		printf("%d\n", temp);
	}
	return 0;
}
/*
Задача M: Наибольший общий делитель N чисел
Найдите НОД N заданных чисел.

Input
Первая строка стандартного потока ввода содержит количество тестовых случаев Т (T ≤ 1000) .

Каждый тестовый случай состоит из двух строк. Первая строка содержит натуральное число N (1 < N < 101). Вторая строка содержит N натуральных чисел, не превышающих 1000000000 и разделенных пробелами.

Output
Для каждого тестового случая выведите в отдельную строку стандартного потока вывода единственное число - наибольший общий делитель соответствующих чисел.

Примеры
Входные данные
2
3
15 20 30
2
49 35
Результат работы
5
7
*/