#define _CRT_SECURE_NO_WARNINGS 
#include <iostream>
#include <cstdlib>
#include <stdio.h> 
#include <math.h>
#include <iomanip> 
#include <fstream> 
using namespace std;

int main() {



	long double summ1 = 0, summ2 = 0, temp;
	long long kord[40000][2];
	int n;
	bool flag = false;
	
	scanf("%d", &n);
	for (int i = 0; i < n + 1; i++) { 
		scanf("%lld%lld", &kord[i][0], &kord[i][1]);
	}


	for (int i = 0; i < n; i++) { //first area
		summ1 += (kord[i][0] * kord[(i + 1) % n][1] - kord[i][1] * kord[(i + 1) % n][0]) / 2.0;
	}
	summ1 = (summ1 >= 0 ? summ1 : -summ1);

	//second area
	for(int i = 0; i < n; i++){
		temp = abs(kord[i][0] * kord[n][1] + kord[n][0] * kord[(i + 1) % n][1] + kord[(i + 1) % n][0] * kord[i][1] - kord[i][1] * kord[n][0] - kord[n][1] * kord[(i + 1) % n][0] - kord[(i + 1) % n][1] * kord[i][0]) / 2.0;
		if(temp < 0.000000001){
			flag = true;
		}
		summ2 += temp;
	}
	
	if (abs(summ2 - summ1) < 0.000000001) {
		if(flag){
			printf("ON BORDER");
		}else{
			printf("INSIDE");
		}
	}
	else {
		printf("OUTSIDE");
	}
	
	return 0;
}
/*
Точка и выпуклый многоугольник
Для заданных выпуклого многоугольника и точки нужно определить, принадлежит точка многоугольнику или нет.

Формат входных данных
Входные данные содержат целое число N (N ≤ 1000), далее следует N пар целых чисел, содержащих координаты вершин многоугольника (X, Y) в порядке обхода против часовой стрелки. Следующая строка содержит два целых числа - координаты заданной точки. Все координаты лежат в интервале -1000 ≤ X, Y ≤ 1000.

Формат результата
Выведите "INSIDE", если точка находится внутри многоугольника, "ON BORDER", если точка расположена на его стороне, или "OUTSIDE", если точка не принадлежит многоугольнику.

Примеры
Входные данные
4
4 0
4 4
0 4
0 0
2 2
Результат работы
INSIDE
Входные данные
3
0 0
2 0
1 1
-2 -2
Результат работы
OUTSIDE
*/