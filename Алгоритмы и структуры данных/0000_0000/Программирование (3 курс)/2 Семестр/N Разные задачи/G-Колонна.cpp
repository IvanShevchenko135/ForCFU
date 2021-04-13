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

using namespace std;

long long w[50], n, sum;
set <int> s;
set <int> ::iterator it;
int N, M, arr[21][2001], repeat[50000], repeatit;

int main()
{
	freopen("kare.dat", "r", stdin);
	freopen("kare.sol", "w", stdout);


	scanf("%d%d", &N, &M);
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < M; j++) {
			scanf("%d", &arr[i][j]);
			s.insert(arr[i][j]);
		}
	}
	int ssize = s.size();
	for (it = s.begin(); it != s.end(); it++) {
		int find = *it;
		for (int i = 0; i < N; i++) {
			int l = 0, r = M - 1;
			while (true) {
				if (arr[i][(l + r) / 2] == find) {
					repeat[repeatit]++;
					break;
				}
				else {
					if (l >= r) {
						break;
					}
					if (find < arr[i][(l + r) / 2]) {
						r = (l + r) / 2 - 1;
					}
					if (find > arr[i][(l + r) / 2]) {
						l = (l + r) / 2 + 1;
					}
					
				}
			}
		}
		repeatit++;
	}
	repeatit = 0;
	for (it = s.begin(); it != s.end(); it++) {
		printf("%d %d\n", *it, repeat[repeatit++]);
	}

	fclose(stdin);
	fclose(stdout);
	return 0;
}

/*
Задача K: Количество перестановок при сортировке
В этой задаче вам необходимо проанализировать некоторый алгоритм сортировки. Этот алгоритм сортирует последовательность из N различных целых чисел, переставляя по два соседних элемента последовательности до тех пор, пока она не будет упорядочена по возрастанию. Ваша задача состоит в том, чтобы посчитать, сколько таких перестановок двух соседних элементов необходимо сделать, чтобы отсортировать заданную последовательность.

Входные данные
Первая строка входных данных содержит единственное натуральное число 1 ≤ N < 500000 - длину сортируемой последовательности. Каждая из последующих N строк содержит целое число 0 ≤ a[i] ≤ 999999999, i-ый элемент последовательности. Все элементы последовательности различны.

Выходные данные
Выведите единственное целое число - минимальное количество перестановок соседних элементов последовательности, необходимое для того, чтобы отсортировать ее по возрастанию.
*/