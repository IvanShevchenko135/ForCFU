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
	int	N, T;
	scanf("%d", &T);
	while (T--) {
		int score = 0;
		scanf("%d", &N);
		while (N > 0) {
			int temp = N, summ = 0;
			while (temp) {
				summ += temp % 10;
				temp /= 10;
				
			}
			N -= summ;
			score++;
		}
		printf("%d\n", score);
	}
	return 0;
}
/*
Задача N: Сколько можно?
Задано натуральное число N. От данного числа вычтем сумму цифр этого числа, от полученного числа опять вычтем сумму цифр и т.д. Данную операцию будем продолжать до тех пор, пока полученное число положительно. Сколько раз будем выполнять данную операцию?

Input
Первая строка стандартного потока ввода содержит количество тестовых случаев Т.

Каждый тестовый случай - это натуральное число N (1 < N < 2 000 000 000), записанное в отдельной строке.

Output
Для каждого тестового случая выведите в отдельную строку стандартного потока вывода единственное число - количество описанных выше операций.

Примеры
Входные данные
3
23
547
1324
Результат работы
3
51
111
*/