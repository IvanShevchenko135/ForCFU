#include <iostream>
#include <cstdlib>
#include <stdio.h> 
#include <math.h>
#include <iomanip> 
using namespace std;


int main()
{
	double a, b;
	scanf("%lf %lf", &a, &b);
	printf("%.6lf", sqrt(a*a+b*b));
	return 0;
}