#define _CRT_SECURE_NO_WARNINGS 
#include <iostream>
#include <cstdlib>
#include <stdio.h> 
#include <math.h>
#include <iomanip> 
using namespace std;


int main()
{
	long long T;
	scanf("%lld", &T);
	for (int i = 0; i < T; i++) {
		long double a, b, c = 0;
		scanf("%Lf%Lf", &a, &b);
		printf("%.3Lf %.3Lf\n", a + b + sqrt(a * a + b * b), a * b / 2);
	}
}