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

int main() {
	int	A, B, T;
	scanf("%d", &T);
	while (T--) {
		scanf("%d%d", &A, &B);
		while (B) {
			A %= B;
			swap(A, B);
		}
		printf("%d\n", A);
	}
	return 0;
}
/*
Задача L: Наибольший общий делитель двух чисел
Найдите НОД двух заданных чисел А и В.

Input
Первая строка стандартного потока ввода содержит количество тестовых случаев Т (T ≤ 100000).

Каждая из последующий Т строк содержит два числа А и В (0 ≤ A, B ≤ 1000000000)

Output
Для каждого тестового случая выведите в отдельную строку стандартного потока вывода единственное число - наибольший общий делитель соответствующих чисел.

Примеры
Входные данные
3
24 36
100 120
45 101
Результат работы
12
20
1
*/