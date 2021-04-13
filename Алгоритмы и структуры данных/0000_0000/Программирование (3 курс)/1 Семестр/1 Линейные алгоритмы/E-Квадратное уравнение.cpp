#include <iostream>
#include <cstdlib>
#include <stdio.h> 
#include <math.h>
#include <iomanip> 
using namespace std;


int main()
{
	long long a, b, c, x1, x2, d;

	scanf("%lld %lld %lld", &a, &b, &c);
	d = (b * b) - (4 * a * c);
	x1 = (-b + sqrt(d)) / (2*a);
	x2 = (-b - sqrt(d)) / (2*a);
	printf("%lld %lld", x2, x1);
	return 0;
}