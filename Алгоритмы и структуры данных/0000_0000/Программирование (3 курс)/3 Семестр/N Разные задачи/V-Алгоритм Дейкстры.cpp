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



int main() {
	int T;
	scanf("%d", &T);
	while (T--) {
		int N, M;
		int D[501][501];
		int A, B, W;
		scanf("%d%d", &N, &M);
		for (int i = 0; i < N; i++) {
			for (int j = 0; j < N; j++) {
				D[i][j] = 1000000000; //inf
			}
		}
		while (M--) {
			scanf("%d%d%d", &A, &B, &W);
			D[A - 1][B - 1] = W;
			D[B - 1][A - 1] = W;
		}
		int S, E;
		scanf("%d%d", &S, &E);
		S--;
		E--;
		int score = 0;
		int de[501];
		bool pos[501];
		for (int i = 0; i < N; i++) {
			pos[i]= false; // Visit
		}
		for (int i = 0; i < N; i++) {
			de[i] = 1000000000; //inf
		}
		de[S] = 0;
		for (int i = 0; i < N; i++) {
			int min = -1;
			for (int j = 0; j < N; j++) {
				if (!pos[j] && (min == -1 || de[j] < de[min])) {
					min = j;
				}
			}
			if (de[min] >= 1000000000) {
				break;
			}
		
			pos[min] = true;
			for (int j = 0; j < N; j++) {
				if (de[min] + D[min][j] < de[j]) {
					de[j] = de[min] + D[min][j];
				}
			}

		}
		if (de[E] < 1000000000) {
			printf("%d\n", de[E]);
		}
		else {
			printf("infinity\n");
		}

	}
	return 0;
}

/*
Задача V: Алгоритм Дейкстры
Дан взвешенный неориентированный граф. Все веса, приписанные ребрам - целые положительные числа. Необходимо найти стоимость кратчайшего пути между двумя заданными узлами графа.

Input
Первая строка стандартного потока ввода содержит количество тестовых случаев Т.

Каждый тестовый случай состоит из нескольких строк.

Первая строка содержит два натуральных числа N, M, разделенных пробелом — количество узлов графа и количество ребер (1 ≤ N ≤ 500, 1 ≤ M ≤ N*(N-1)/2).

Следующие M строк содержат по три целых числа Ai, Bi, Wi, разделенных пробелом — это номера узлов, которые соединенных ребром, и вес этого ребра. (1 ≤ Ai, Bi ≤ N, 1 ≤ Wi ≤ 100).

Последняя строка каждого тестового случая содержит два натуральных числа S и E - номер начального и конечного узлов.

Output
Для каждого тестового случая выведите в отдельную строку единственное число - стоимость кратчайшего пути из узла S в узел E.

Если из узла S в узел E пути не существует, выведите слово infinity

Примеры
Входные данные
3
4 3
2 3 1
2 4 10
3 4 5
1 2
4 3
1 3 6
2 3 1
2 4 2
4 4
4 3
1 3 2
2 3 5
3 4 10
4 2
Результат работы
infinity
0
15
*/