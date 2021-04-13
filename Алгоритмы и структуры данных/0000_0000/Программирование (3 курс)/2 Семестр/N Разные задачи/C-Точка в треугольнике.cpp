#define _CRT_SECURE_NO_WARNINGS 
#include <iostream>
#include <cstdlib>
#include <stdio.h> 
#include <math.h>
#include <iomanip> 
#include <fstream> 
using namespace std;

int main() {

	ifstream fin("trian.dat");
	ofstream fout("trian.sol");

	long double summ1 = 0;
	long double summ2 = 0;
	long long kord[4][2];
	long long temp[2];
	int n = 3;

	for (int i = 0; i < 4; i++) { //—читывание координат
		fin >> kord[i][0] >> kord[i][1];
		//scanf("%d%d", &kord[i][0], &kord[i][1]);
	}


	//first area
	summ1 = abs(kord[0][0] * kord[1][1] + kord[1][0] * kord[2][1] + kord[2][0] * kord[0][1] - kord[1][0] * kord[0][1] - kord[2][0] * kord[1][1] - kord[0][0] * kord[2][1]) / 2.0;

	//second area
	summ2 += abs(kord[0][0] * kord[1][1] + kord[1][0] * kord[3][1] + kord[3][0] * kord[0][1] - kord[1][0] * kord[0][1] - kord[3][0] * kord[1][1] - kord[0][0] * kord[3][1]) / 2.0;
	summ2 += abs(kord[0][0] * kord[2][1] + kord[2][0] * kord[3][1] + kord[3][0] * kord[0][1] - kord[2][0] * kord[0][1] - kord[3][0] * kord[2][1] - kord[0][0] * kord[3][1]) / 2.0;
	summ2 += abs(kord[1][0] * kord[2][1] + kord[2][0] * kord[3][1] + kord[3][0] * kord[1][1] - kord[2][0] * kord[1][1] - kord[3][0] * kord[2][1] - kord[1][0] * kord[3][1]) / 2.0;


	if (abs(summ2 - summ1) < 0.000000001) {
		fout << "YES";
		//printf("YES");
	}
	else {
		fout << "NO";
		//printf("NO");
	}

	//system("pause");
	return 0;
}
/*
Задача C: Точка в треугольнике

Захватив Изумрудный город Урфин Джюс поручил генералу Лану Пироту поставить деревянного солдата в каждый двор города. Все дворы Изумрудного города представляют собой треугольники, солдат должен находиться либо внутри треугольника, либо на его границе. Вам необходимо проверить, справился ли Лан Пирот с поставленной задачей.

Формат входного файла trian.dat
Текстовый файл trian.dat содержит четыре строки. В первых трех строках записаны координаты вершин треугольника - по два целых числа X, Y, разделенных пробелом, в строке (-1000000 ≤ X, Y ≤ 1000000). Гарантируется, что эти три вершины не лежат на одной прямой.

Четвертая строка файла содержит координаты точки, в которой стоит деревянный солдат Урфина Джюса, - два целых числа A, B, разделенных пробелом (-1000000 ≤ A, B ≤ 1000000).

Формат выходного файла trian.sol
Текстовый файл trian.sol должен слово YES, если точка с координатами (А,В) лежит внутри треугольника или на его стороне, и NO в противном случае.
*/