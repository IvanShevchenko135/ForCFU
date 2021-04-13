#include <iostream>
#include <cstdlib>
#include <stdio.h> 
#include <math.h>
#include <iomanip> 
using namespace std;


long double a, b;
const double eps = 1e-10;
const double pi = 3.14159265359;
int main()
{
	scanf("%Lf %Lf", &a, &b);
	if (b > a) {
		printf("%.6Lf", (pi*b*b - pi*a*a) + eps);
	}
	else {
		printf("%.6Lf", (pi*a*a - pi*b*b) + eps);
	}
	cin >> a;
	return 0;
}