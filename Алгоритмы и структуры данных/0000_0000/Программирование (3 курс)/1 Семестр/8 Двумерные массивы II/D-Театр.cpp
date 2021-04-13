#define _CRT_SECURE_NO_WARNINGS 
#include <iostream>
#include <cstdlib>
#include <stdio.h> 
#include <math.h>
#include <iomanip> 
using namespace std;


int main()
{
	int N, M;
	int score = 0, min = 100000;
	scanf("%d%d", &N, &M);
	int mass[101][101];
	char mass2[101][101], d;

	for (int i = 0; i < N; i++) {
		for (int j = 0; j < M; j++) {
			scanf("%d", &mass[i][j]);
			if (mass[i][j] < min) {
				min = mass[i][j];
			}
		}
	}
	scanf("%c", &d);
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < M; j++) {
			scanf("%c", &mass2[i][j]);
			if (mass[i][j] == min && mass2[i][j] == '0') {
				score++;
			}
		}
		scanf("%c", &d);
	}

	printf("%d", score);
	return 0;
}

/*
В театре N рядов по M мест в каждом. Даны две матрицы: в первой записаны стоимости билетов, а вторая сообщает, какие билеты проданы, а какие - нет (1 - соответствующий билет продан, 0 - не продан).

Вася с компанией хочет пойти в театр, однако они готовы покупать лишь самые дешёвые билеты, какие только бывают в театре. Определите, каков максимальный возможный размер компании, которая может пойти в театр (иначе говоря, сколько ещё самых дешёвых билетов осталось в продаже).
*/