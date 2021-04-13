#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstdlib>
#include <stdio.h>
#include <math.h>
#include <iomanip>
#include <cstring>

using namespace std;

int main() {
	double x, y;
	const double PI = 3.14159265359;
	scanf("%lf%lf", &x, &y);
	if (x >= 0 && y >= 0) {
		printf("%.6lf", atan(y / x));
	}else if(x < 0 && y >= 0) {
		printf("%.6lf", PI - atan(y / -x));
	}else if (x < 0 && y < 0) {
		printf("%.6lf", PI + atan(y / x));
	}else if (x >= 0 && y < 0) {
		printf("%.6lf", 2 * PI - atan(-y / x));
	}
	return 0;
}

/*Найдите полярный угол точки на плоскости.*/