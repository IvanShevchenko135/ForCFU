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

int tree[10001];
int sear(int v) {
	int x = v;
	if (tree[v] != v) {
		x = sear(tree[v]);
	}
	tree[v] = x;
	return x;
}


int main() {
	int T;
	scanf("%d", &T);
	while (T--) {
		int N, M;
		int a, b;
		int score = 0;
		bool cycle = false;
		scanf("%d%d", &N, &M);
		for (int i = 0; i < N; i++) {
			tree[i] = i;
		}
		while (M--) {
			scanf("%d%d", &a, &b);
			a--; b--;
			a = sear(a);
			b = sear(b);
			if (a != b) {
				if (rand() % 2) {
					tree[a] = b;
				}
				else {
					tree[b] = a;
				}
			}
			else {
				cycle = true;
			}
		}
		for (int i = 0; i < N; i++) {
			if (tree[i] == i) {
				score++;
			}
		}
		if (score > 1) {
			printf("0\n");
		}
		else if (cycle) {
			printf("1\n");
		}
		else {
			printf("2\n");
		}
	}
	//system("pause");
	return 0;
}
/*
Задача U: Циклы в графе
Дан неориентированный граф. Необходимо выяснить, является ли он связным, и есть ли в нем циклы.

Граф не содержит ребер начинающихся и оканчивающихся в одной и той же вершине. Между любыми двумя узлами существует не более одного ребра.

Формат входных данных
Первая строка стандартного потока ввода содержит количество тестовых случаев Т (T ≤ 100).

Каждый тестовый случай состоит из нескольких строк.

Первая строка содержит два натуральных числа N, M, разделенных пробелом — количество узлов графа и количество ребер (1 ≤ N, M ≤ 200).

Следующие M строк содержат по два целых числа Ai, Bi, разделенных пробелом — это номера узлов, которые соединенных ребром (1 ≤ Ai, Bi ≤ N).

Формат результата
Для каждого тестового случая выведите в отдельную строку единственное число:

0 - если граф является несвязным.
1 - если граф является связным, но содержит циклы.
2 - если граф является связным и не содержит циклов.
Примеры
Входные данные
3
3 3
1 2
2 3
1 3
4 2
1 2
3 4
3 2
1 2
2 3
Результат работы
1
0
2
*/