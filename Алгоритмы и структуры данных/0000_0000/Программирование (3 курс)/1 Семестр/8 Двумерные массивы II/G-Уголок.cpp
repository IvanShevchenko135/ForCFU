#define _CRT_SECURE_NO_WARNINGS 
#include <iostream>
#include <cstdlib>
#include <stdio.h> 
#include <math.h>
#include <iomanip> 
using namespace std;



int main()
{
	int N, M, score = 0, d;
	scanf("%d%d", &N, &M);
	char mass[N][M];
	scanf("%c", &d);
	
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < M; j++) {
			scanf("%c", &mass[i][j]);
		}
		scanf("%c", &d);
	}

	for (int i = 0; i < N; i++) {
		for (int j = 0; j < M; j++) {
			if (mass[i][j] == '.') {
				if ((i != 0) && (j != 0) && (mass[i - 1][j - 1] == '.') && (mass[i - 1][j] == '.')) {
					score++;
				}
				if ((i != 0) && (j != M - 1) && (mass[i][j + 1] == '.') && (mass[i - 1][j] == '.')) {
					score++;
				}
				if ((i != 0) && (j != M - 1) && (mass[i - 1][j + 1] == '.') && (mass[i][j + 1] == '.')) {
					score++;
					
				}
				if ((i != N - 1) && (j != M - 1) && (mass[i + 1][j] == '.') && (mass[i][j + 1] == '.')) {
					score++;
					
				}
			}
		}
	}

	printf("%d", score);
	return 0;
}

/*
Дана прямоугольная доска M×N, некоторые клетки в которой вырезаны. Сколькими способами можно поставить на неё "уголок" из трёх клеток так, чтобы все три клетки уголка находились внутри доски и не были вырезаны?
*/