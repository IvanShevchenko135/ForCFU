#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstdlib>
#include <stdio.h>
#include <math.h>
#include <iomanip>
#include <cstring>
#include <fstream> 

using namespace std;


int n, m;
int mass[1001][1001];
int score = 0;

int main() {

	ifstream fin("rect.dat");
	ofstream fout("rect.sol");
	fin >> n;
	fin >> m;
	//scanf("%d%d", &n, &m);
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			fin >> mass[i][j];
		}
	}

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			if (mass[i][j] == 1 && mass[i + 1][j] == 0 && mass[i][j + 1] == 0) {
				score++;
			}
		}
	}
	fout << score;
	//printf("%d", score);
	//system("pause");
	return 0;
}

/*
Урфин Джюс решил смастерить свое деревянное войско. Прежде чем делать солдата, Урфин рисует на прямоугольном листочке в клеточку все заготовки, которые для этого необходимы. Каждая заготовка представляет собой прямоугольник. Причем нарисованные прямоугольники не пересекаются и даже не соприкасаются между собой (то есть не имеют общих точек). Определите, сколько заготовок нарисовал Урфин Джюс.
*/