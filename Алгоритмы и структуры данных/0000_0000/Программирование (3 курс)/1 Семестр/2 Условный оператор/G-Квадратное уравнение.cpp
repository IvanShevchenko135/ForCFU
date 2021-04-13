#define _CRT_SECURE_NO_WARNINGS 
#include <iostream>
#include <cstdlib>
#include <stdio.h> 
#include <math.h>
#include <iomanip> 
using namespace std;

int main()
{

	long double a, b, c, x1, x2;


	scanf("%Lf%Lf%Lf", &a, &b, &c);

	if ((b*b - 4 * a * c) >= 0) {
		x1 = (-b + sqrt(b*b - 4 * a*c)) / (2 * a);
		x2 = (-b - sqrt(b*b - 4 * a*c)) / (2 * a);

		if (x1 == x2) {
			printf("%.7Lf", x1);
		}
		else if(x1 > x2){
			printf("%.7Lf %.7Lf", x2, x1);
		}else if(x2 > x1){
			printf("%.7Lf %.7Lf", x1, x2);
		}
	}
	else if ((b*b - 4 * a * c) < 0) {
		printf("No roots");
	}

	return 0;
}