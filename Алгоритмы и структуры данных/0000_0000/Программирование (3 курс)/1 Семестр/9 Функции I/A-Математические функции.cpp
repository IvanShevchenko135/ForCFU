#define _CRT_SECURE_NO_WARNINGS 
#include <iostream>
#include <cstdlib>
#include <stdio.h> 
#include <math.h>
#include <iomanip> 
#include <string.h> 
using namespace std;


double form(double x) {
	return (sin(x)) + sqrt((double)(log10(3 * x) / log10(4))) + ceil(3 * pow(M_E, x));
}

int main() {
	double x;
	while (scanf("%lf", &x) != EOF) {
		printf("%.6lf\n", form(x));
	}
	return 0;
}