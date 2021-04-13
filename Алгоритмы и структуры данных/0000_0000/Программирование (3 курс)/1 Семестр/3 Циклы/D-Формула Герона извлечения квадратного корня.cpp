#include <iostream>
#include <cstdlib>
#include <stdio.h> 
#include <math.h>
#include <iomanip> 
using namespace std;

int main()
{
	long double a, x1, x2 = 1;
	int i = 0;
	scanf("%Lf", &a);

	do {
		x1 = x2; x2 = (x1 + a / x1) / 2; i++;
	} while (fabs(x2 - x1) >= 0.000000001);

	printf("%.9Lf\n%d", x2, i);
	return 0;
}