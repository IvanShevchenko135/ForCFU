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
#include <map>
using namespace std;

using namespace std;
long double distance(long double ax, long double ay, long double bx, long double by) {
	return sqrt((ax - bx)*(ax - bx) + (ay - by)*(ay - by));
}

int main() {
	long double AB, BC, CD, AD;
	long double cosABC, cosBCD, cosCDA, cosDAB;
	long double x1, y1, x2, y2, x3, y3, x4, y4;
	long double eps = 1e-10;
	scanf("%Lf%Lf%Lf%Lf%Lf%Lf%Lf%Lf", &x1, &y1, &x2, &y2, &x3, &y3, &x4, &y4);
	AB = distance(x1, y1, x2, y2);
	BC = distance(x2, y2, x3, y3);
	CD = distance(x3, y3, x4, y4);
	AD = distance(x1, y1, x4, y4);


	cosABC = ((x2 - x1) * (x3 - x2) + (y2 - y1) * (y3 - y2)) / (AB * BC);
	cosBCD = ((x3 - x2) * (x4 - x3) + (y3 - y2) * (y4 - y3)) / (BC * CD);
	cosCDA = ((x4 - x3) * (x1 - x4) + (y4 - y3) * (y1 - y4)) / (CD * AD);
	cosDAB = ((x1 - x4) * (x2 - x1) + (y1 - y4) * (y2 - y1)) / (AD * AB);

	if (abs(AB - BC) < eps && abs(CD - AD) < eps && abs(cosABC) < eps && abs(cosCDA) < eps) {
		printf("4");
	}
	else if (abs(AB - BC) < eps && abs(CD - AD) < eps && abs(cosABC - cosCDA) < eps) {
		printf("2");
	}
	else if (abs(AB - CD) < eps && abs(BC - AD) < eps && abs(cosABC) < eps && abs(cosCDA) < eps) {
		printf("2");
	}
	else if ((abs(AB - AD) < eps && abs(BC - CD) < eps && abs(cosABC - cosCDA) < eps) || (abs(AB - BC) < eps && abs(CD - AD) < eps && abs(cosDAB - cosBCD) < eps)) {
		printf("1");
	}
	else if ((abs(AB - CD) > eps && abs(BC - AD) < eps && abs(cosABC - cosDAB) < eps) || (abs(AB - CD) < eps && abs(BC - AD) > eps && abs(cosDAB - cosCDA) < eps)) {
		printf("1");
	}
	else {
		printf("0");
	}

	return 0;
}
/*
Оси симетрии четырёхугольника
Заданы координаты последовательных вершин выпуклого четырёхугольника. Сколько осей симетрии имеет эта фигура?

Формат входных данных
В одной строке записаны 8 чисел x1, y1, x2, y2, x3, y3, x4, y4 – координаты вершин четырёхугольника.

-50 ≤ x1, y1, x2, y2, x3, y3, x4, y4 ≤ 50

Формат результата
Одно число - количество осей симетрии.

Примеры
Входные данные
0 0 0 5 5 5 5 0
Результат работы
4
*/