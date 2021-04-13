#define _CRT_SECURE_NO_WARNINGS 
#include <iostream>
#include <cstdlib>
#include <stdio.h> 
#include <math.h>
#include <iomanip> 
using namespace std;


int main()
{
	long double x, fac = 1, summ = 1, sup = 1;
	scanf("%Lf", &x);
	for (int i = 1; i < 200; i++) {
		sup *= x;
		fac *= i;
		summ += sup / fac;
	}
	printf("%.9Lf", summ);
	return 0;
}