#include <iostream>
#include <cstdlib>
#include <stdio.h> 
#include <math.h>
#include <iomanip> 
using namespace std;


int main()
{
	int a = -1;
	int c = 0;
	double mass[40];
	while (scanf("%lf", &mass[++a]) != EOF);
	for (; a > 0; c += mass[--a]);
	printf("%d", c);
	return 0;
}